/**
 ******************************************************************************
 * File Name          : ProtocolTask.hpp
 * Description        :
 ******************************************************************************
*/
#ifndef SOAR_SYSTEM_PROTOCOL_TASK_HPP_
#define SOAR_SYSTEM_PROTOCOL_TASK_HPP_
/* Includes ------------------------------------------------------------------*/
#include "Task.hpp"
#include "SystemDefines.hpp"
#include "UARTTask.hpp"
#include "WriteBufferFixedSize.h"
#include "CoreProto.h"
#include "ControlMessage.hpp"
#include "CommandMessage.hpp"
#include "ReadBufferFixedSize.h"
#include "TelemetryMessage.hpp"
#include "UARTDriver.hpp"

/* Enums ------------------------------------------------------------------*/
enum PROTOCOL_TASK_COMMANDS {
    PROTOCOL_TASK_COMMAND_NONE = 0,
    EVENT_PROTOCOL_RX_COMPLETE,
    PROTOCOL_RX_DECODED_DATA,
    PROTOCOL_TX_REQUEST_DATA,

    EVENT_UART_INTERRUPT_ARM_ERROR
};

/* Macros ------------------------------------------------------------------*/
constexpr uint16_t PROTOCOL_RX_BUFFER_SZ_BYTES = 256;
constexpr uint16_t DEFAULT_PROTOCOL_WRITE_BUFFER_SIZE = 256;

constexpr uint16_t PROTOCOL_READ_BUFFER_SIZE_CONTROL_COMMAND = 128;

// Task Definition
constexpr uint8_t TASK_PROTOCOL_PRIORITY = 2;            // Priority of the protocol task
constexpr uint8_t TASK_PROTOCOL_QUEUE_DEPTH_OBJS = 10;        // Size of the protocol task queue
constexpr uint16_t TASK_PROTOCOL_STACK_DEPTH_WORDS = 750;        // Size of the protocol task stack (768x4 = 3KB)

// Protocol Definition
// The protocol is applied BEFORE COBS encoding, and contains a message ID and a checksum footer
constexpr uint8_t PROTOCOL_CHECKSUM_BYTES = 2;
constexpr uint8_t PROTOCOL_OVERHEAD_BYTES = 1 + PROTOCOL_CHECKSUM_BYTES;        // Size of the protocol overhead *PRE-COBS* (message ID + 2 byte checksum)
constexpr uint16_t PROTOCOL_MINIMUM_MESSAGE_LENGTH = PROTOCOL_OVERHEAD_BYTES + 1;

// Error Handling
constexpr uint8_t PROTOCOL_MAX_NUM_ERRORS_UNTIL_RESET = 200;        // Number of consecutive UART errors before a system reset is triggered
constexpr uint16_t PROTOCOL_UART_RX_ERROR_RETRY_DELAY_MS = 1;     // Delay between UART error retries

/* Class ------------------------------------------------------------------*/
class ProtocolTask : public Task, public UARTReceiverBase
{
public:
    ProtocolTask(Proto::Node node,
        UARTDriver* uartDriver,
        uint16_t uartTaskCmd);

    virtual void InitTask() = 0;

    //Functions exposed to HAL callbacks
    void InterruptRxData(uint8_t errors);

protected:
    void Run(void* pvParams);    // Main run code

    void ConfigureUART();
    // This will receive a (PROTOCOL_COMMAND, PROTOCOL_RX_DECODED_DATA) with the data pointer allocated, COBS decoded (but in the SOAR Message Format)
    void HandleProtocolMessage(Command& cmd);

    //Main interface function for sending protobuf messages
    void SendProtobufMessage(EmbeddedProto::WriteBufferFixedSize<DEFAULT_PROTOCOL_WRITE_BUFFER_SIZE>& writeBuffer, Proto::MessageID msgId);

    // These MUST be implemented in the derived board-specific ProtocolTask object
    virtual void HandleProtobufCommandMessage(EmbeddedProto::ReadBufferFixedSize<PROTOCOL_RX_BUFFER_SZ_BYTES>& readBuffer) = 0;
    virtual void HandleProtobufControlMesssage(EmbeddedProto::ReadBufferFixedSize<PROTOCOL_RX_BUFFER_SZ_BYTES>& readBuffer) = 0;
    virtual void HandleProtobufTelemetryMessage(EmbeddedProto::ReadBufferFixedSize<PROTOCOL_RX_BUFFER_SZ_BYTES>& readBuffer) = 0;

    bool ReceiveData();

    // Helper functions
    
    // Member variables
    uint8_t* protocolRxBuffer;
    uint16_t protocolMsgIdx;
    bool isProtocolMsgReady;

    uint8_t protocolRxChar; // Character received from UART Interrupt

    Proto::Node srcNode;

    void SendData(uint8_t* data, uint16_t size, uint8_t msgId); // Send a protobuf encoded message over UART
    void SendNACK(Proto::MessageID msgId = Proto::MessageID::MSG_UNKNOWN, Proto::Node msgSource = Proto::Node::NODE_UNKNOWN); // Send a NACK message over UART

    UARTDriver* const kUart_;
	const uint16_t uartTaskCommand;

    uint8_t numUartErrors_;
};

#endif    // SOAR_SYSTEM_PROTOCOL_TASK_HPP_
