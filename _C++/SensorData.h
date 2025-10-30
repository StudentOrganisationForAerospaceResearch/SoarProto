/*
 *  This file is generated with Embedded Proto, PLEASE DO NOT EDIT!
 *  source: SensorData.proto
 */

// This file is generated. Please do not edit!
#ifndef SENSORDATA_H
#define SENSORDATA_H

#include <cstdint>
#include <MessageInterface.h>
#include <WireFormatter.h>
#include <Fields.h>
#include <MessageSizeCalculator.h>
#include <ReadBufferSection.h>
#include <RepeatedFieldFixedSize.h>
#include <FieldStringBytes.h>
#include <Errors.h>
#include <Defines.h>
#include <limits>

// Include external proto definitions

namespace Proto {

enum class ChargeSpeed : uint32_t
{
  INVALID_CHARGE_SPEED = 0,
  SLOW = 1,
  MEDIUM = 2,
  FAST = 3
};

enum class ChargeState : uint32_t
{
  INVALID_CHARGE_STATE = 0,
  CHARGING = 1,
  DISCHARGING = 2
};

class Accelerometer final: public ::EmbeddedProto::MessageInterface
{
  public:
    Accelerometer() = default;
    Accelerometer(const Accelerometer& rhs )
    {
      set_accel_x(rhs.get_accel_x());
      set_accel_y(rhs.get_accel_y());
      set_accel_z(rhs.get_accel_z());
    }

    Accelerometer(const Accelerometer&& rhs ) noexcept
    {
      set_accel_x(rhs.get_accel_x());
      set_accel_y(rhs.get_accel_y());
      set_accel_z(rhs.get_accel_z());
    }

    ~Accelerometer() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ACCEL_X = 1,
      ACCEL_Y = 2,
      ACCEL_Z = 3
    };

    Accelerometer& operator=(const Accelerometer& rhs)
    {
      set_accel_x(rhs.get_accel_x());
      set_accel_y(rhs.get_accel_y());
      set_accel_z(rhs.get_accel_z());
      return *this;
    }

    Accelerometer& operator=(const Accelerometer&& rhs) noexcept
    {
      set_accel_x(rhs.get_accel_x());
      set_accel_y(rhs.get_accel_y());
      set_accel_z(rhs.get_accel_z());
      return *this;
    }

    static constexpr char const* ACCEL_X_NAME = "accel_x";
    inline void clear_accel_x() { accel_x_.clear(); }
    inline void set_accel_x(const int32_t& value) { accel_x_ = value; }
    inline void set_accel_x(const int32_t&& value) { accel_x_ = value; }
    inline int32_t& mutable_accel_x() { return accel_x_.get(); }
    inline const int32_t& get_accel_x() const { return accel_x_.get(); }
    inline int32_t accel_x() const { return accel_x_.get(); }

    static constexpr char const* ACCEL_Y_NAME = "accel_y";
    inline void clear_accel_y() { accel_y_.clear(); }
    inline void set_accel_y(const int32_t& value) { accel_y_ = value; }
    inline void set_accel_y(const int32_t&& value) { accel_y_ = value; }
    inline int32_t& mutable_accel_y() { return accel_y_.get(); }
    inline const int32_t& get_accel_y() const { return accel_y_.get(); }
    inline int32_t accel_y() const { return accel_y_.get(); }

    static constexpr char const* ACCEL_Z_NAME = "accel_z";
    inline void clear_accel_z() { accel_z_.clear(); }
    inline void set_accel_z(const int32_t& value) { accel_z_ = value; }
    inline void set_accel_z(const int32_t&& value) { accel_z_ = value; }
    inline int32_t& mutable_accel_z() { return accel_z_.get(); }
    inline const int32_t& get_accel_z() const { return accel_z_.get(); }
    inline int32_t accel_z() const { return accel_z_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0 != accel_x_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = accel_x_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ACCEL_X), buffer, false);
      }

      if((0 != accel_y_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = accel_y_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ACCEL_Y), buffer, false);
      }

      if((0 != accel_z_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = accel_z_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ACCEL_Z), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::ACCEL_X:
            return_value = accel_x_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::ACCEL_Y:
            return_value = accel_y_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::ACCEL_Z:
            return_value = accel_z_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NOT_SET:
            return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
            break;

          default:
            return_value = skip_unknown_field(buffer, wire_type);
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_accel_x();
      clear_accel_y();
      clear_accel_z();

    }

#ifndef DISABLE_FIELD_NUMBER_TO_NAME 

    static char const* field_number_to_name(const FieldNumber fieldNumber)
    {
      char const* name = nullptr;
      switch(fieldNumber)
      {
        case FieldNumber::ACCEL_X:
          name = ACCEL_X_NAME;
          break;
        case FieldNumber::ACCEL_Y:
          name = ACCEL_Y_NAME;
          break;
        case FieldNumber::ACCEL_Z:
          name = ACCEL_Z_NAME;
          break;
        default:
          name = "Invalid FieldNumber";
          break;
      }
      return name;
    }

#endif

#ifdef MSG_TO_STRING

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str) const
    {
      return this->to_string(str, 0, nullptr, true);
    }

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str, const uint32_t indent_level, char const* name, const bool first_field) const override
    {
      ::EmbeddedProto::string_view left_chars = str;
      int32_t n_chars_used = 0;

      if(!first_field)
      {
        // Add a comma behind the previous field.
        n_chars_used = snprintf(left_chars.data, left_chars.size, ",\n");
        if(0 < n_chars_used)
        {
          // Update the character pointer and characters left in the array.
          left_chars.data += n_chars_used;
          left_chars.size -= n_chars_used;
        }
      }

      if(nullptr != name)
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "\"%s\": {\n", name);
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s\"%s\": {\n", indent_level, " ", name);
        }
      }
      else
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "{\n");
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s{\n", indent_level, " ");
        }
      }
      
      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      left_chars = accel_x_.to_string(left_chars, indent_level + 2, ACCEL_X_NAME, true);
      left_chars = accel_y_.to_string(left_chars, indent_level + 2, ACCEL_Y_NAME, false);
      left_chars = accel_z_.to_string(left_chars, indent_level + 2, ACCEL_Z_NAME, false);
  
      if( 0 == indent_level) 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n}");
      }
      else 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n%*s}", indent_level, " ");
      }

      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      return left_chars;
    }

#endif // End of MSG_TO_STRING

  private:


      EmbeddedProto::int32 accel_x_ = 0;
      EmbeddedProto::int32 accel_y_ = 0;
      EmbeddedProto::int32 accel_z_ = 0;

};

class AltitudeType final: public ::EmbeddedProto::MessageInterface
{
  public:
    AltitudeType() = default;
    AltitudeType(const AltitudeType& rhs )
    {
      set_altitude(rhs.get_altitude());
      set_unit(rhs.get_unit());
    }

    AltitudeType(const AltitudeType&& rhs ) noexcept
    {
      set_altitude(rhs.get_altitude());
      set_unit(rhs.get_unit());
    }

    ~AltitudeType() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ALTITUDE = 1,
      UNIT = 2
    };

    AltitudeType& operator=(const AltitudeType& rhs)
    {
      set_altitude(rhs.get_altitude());
      set_unit(rhs.get_unit());
      return *this;
    }

    AltitudeType& operator=(const AltitudeType&& rhs) noexcept
    {
      set_altitude(rhs.get_altitude());
      set_unit(rhs.get_unit());
      return *this;
    }

    static constexpr char const* ALTITUDE_NAME = "altitude";
    inline void clear_altitude() { altitude_.clear(); }
    inline void set_altitude(const int32_t& value) { altitude_ = value; }
    inline void set_altitude(const int32_t&& value) { altitude_ = value; }
    inline int32_t& mutable_altitude() { return altitude_.get(); }
    inline const int32_t& get_altitude() const { return altitude_.get(); }
    inline int32_t altitude() const { return altitude_.get(); }

    static constexpr char const* UNIT_NAME = "unit";
    inline void clear_unit() { unit_.clear(); }
    inline void set_unit(const int32_t& value) { unit_ = value; }
    inline void set_unit(const int32_t&& value) { unit_ = value; }
    inline int32_t& mutable_unit() { return unit_.get(); }
    inline const int32_t& get_unit() const { return unit_.get(); }
    inline int32_t unit() const { return unit_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0 != altitude_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = altitude_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ALTITUDE), buffer, false);
      }

      if((0 != unit_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = unit_.serialize_with_id(static_cast<uint32_t>(FieldNumber::UNIT), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::ALTITUDE:
            return_value = altitude_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::UNIT:
            return_value = unit_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NOT_SET:
            return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
            break;

          default:
            return_value = skip_unknown_field(buffer, wire_type);
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_altitude();
      clear_unit();

    }

#ifndef DISABLE_FIELD_NUMBER_TO_NAME 

    static char const* field_number_to_name(const FieldNumber fieldNumber)
    {
      char const* name = nullptr;
      switch(fieldNumber)
      {
        case FieldNumber::ALTITUDE:
          name = ALTITUDE_NAME;
          break;
        case FieldNumber::UNIT:
          name = UNIT_NAME;
          break;
        default:
          name = "Invalid FieldNumber";
          break;
      }
      return name;
    }

#endif

#ifdef MSG_TO_STRING

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str) const
    {
      return this->to_string(str, 0, nullptr, true);
    }

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str, const uint32_t indent_level, char const* name, const bool first_field) const override
    {
      ::EmbeddedProto::string_view left_chars = str;
      int32_t n_chars_used = 0;

      if(!first_field)
      {
        // Add a comma behind the previous field.
        n_chars_used = snprintf(left_chars.data, left_chars.size, ",\n");
        if(0 < n_chars_used)
        {
          // Update the character pointer and characters left in the array.
          left_chars.data += n_chars_used;
          left_chars.size -= n_chars_used;
        }
      }

      if(nullptr != name)
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "\"%s\": {\n", name);
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s\"%s\": {\n", indent_level, " ", name);
        }
      }
      else
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "{\n");
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s{\n", indent_level, " ");
        }
      }
      
      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      left_chars = altitude_.to_string(left_chars, indent_level + 2, ALTITUDE_NAME, true);
      left_chars = unit_.to_string(left_chars, indent_level + 2, UNIT_NAME, false);
  
      if( 0 == indent_level) 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n}");
      }
      else 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n%*s}", indent_level, " ");
      }

      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      return left_chars;
    }

#endif // End of MSG_TO_STRING

  private:


      EmbeddedProto::int32 altitude_ = 0;
      EmbeddedProto::int32 unit_ = 0;

};

class CoordinateType final: public ::EmbeddedProto::MessageInterface
{
  public:
    CoordinateType() = default;
    CoordinateType(const CoordinateType& rhs )
    {
      set_degrees(rhs.get_degrees());
      set_minutes(rhs.get_minutes());
    }

    CoordinateType(const CoordinateType&& rhs ) noexcept
    {
      set_degrees(rhs.get_degrees());
      set_minutes(rhs.get_minutes());
    }

    ~CoordinateType() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      DEGREES = 1,
      MINUTES = 2
    };

    CoordinateType& operator=(const CoordinateType& rhs)
    {
      set_degrees(rhs.get_degrees());
      set_minutes(rhs.get_minutes());
      return *this;
    }

    CoordinateType& operator=(const CoordinateType&& rhs) noexcept
    {
      set_degrees(rhs.get_degrees());
      set_minutes(rhs.get_minutes());
      return *this;
    }

    static constexpr char const* DEGREES_NAME = "degrees";
    inline void clear_degrees() { degrees_.clear(); }
    inline void set_degrees(const int32_t& value) { degrees_ = value; }
    inline void set_degrees(const int32_t&& value) { degrees_ = value; }
    inline int32_t& mutable_degrees() { return degrees_.get(); }
    inline const int32_t& get_degrees() const { return degrees_.get(); }
    inline int32_t degrees() const { return degrees_.get(); }

    static constexpr char const* MINUTES_NAME = "minutes";
    inline void clear_minutes() { minutes_.clear(); }
    inline void set_minutes(const int32_t& value) { minutes_ = value; }
    inline void set_minutes(const int32_t&& value) { minutes_ = value; }
    inline int32_t& mutable_minutes() { return minutes_.get(); }
    inline const int32_t& get_minutes() const { return minutes_.get(); }
    inline int32_t minutes() const { return minutes_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0 != degrees_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = degrees_.serialize_with_id(static_cast<uint32_t>(FieldNumber::DEGREES), buffer, false);
      }

      if((0 != minutes_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = minutes_.serialize_with_id(static_cast<uint32_t>(FieldNumber::MINUTES), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::DEGREES:
            return_value = degrees_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::MINUTES:
            return_value = minutes_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NOT_SET:
            return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
            break;

          default:
            return_value = skip_unknown_field(buffer, wire_type);
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_degrees();
      clear_minutes();

    }

#ifndef DISABLE_FIELD_NUMBER_TO_NAME 

    static char const* field_number_to_name(const FieldNumber fieldNumber)
    {
      char const* name = nullptr;
      switch(fieldNumber)
      {
        case FieldNumber::DEGREES:
          name = DEGREES_NAME;
          break;
        case FieldNumber::MINUTES:
          name = MINUTES_NAME;
          break;
        default:
          name = "Invalid FieldNumber";
          break;
      }
      return name;
    }

#endif

#ifdef MSG_TO_STRING

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str) const
    {
      return this->to_string(str, 0, nullptr, true);
    }

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str, const uint32_t indent_level, char const* name, const bool first_field) const override
    {
      ::EmbeddedProto::string_view left_chars = str;
      int32_t n_chars_used = 0;

      if(!first_field)
      {
        // Add a comma behind the previous field.
        n_chars_used = snprintf(left_chars.data, left_chars.size, ",\n");
        if(0 < n_chars_used)
        {
          // Update the character pointer and characters left in the array.
          left_chars.data += n_chars_used;
          left_chars.size -= n_chars_used;
        }
      }

      if(nullptr != name)
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "\"%s\": {\n", name);
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s\"%s\": {\n", indent_level, " ", name);
        }
      }
      else
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "{\n");
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s{\n", indent_level, " ");
        }
      }
      
      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      left_chars = degrees_.to_string(left_chars, indent_level + 2, DEGREES_NAME, true);
      left_chars = minutes_.to_string(left_chars, indent_level + 2, MINUTES_NAME, false);
  
      if( 0 == indent_level) 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n}");
      }
      else 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n%*s}", indent_level, " ");
      }

      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      return left_chars;
    }

#endif // End of MSG_TO_STRING

  private:


      EmbeddedProto::int32 degrees_ = 0;
      EmbeddedProto::int32 minutes_ = 0;

};

class Gyroscope final: public ::EmbeddedProto::MessageInterface
{
  public:
    Gyroscope() = default;
    Gyroscope(const Gyroscope& rhs )
    {
      set_gyro_x(rhs.get_gyro_x());
      set_gyro_y(rhs.get_gyro_y());
      set_gyro_z(rhs.get_gyro_z());
    }

    Gyroscope(const Gyroscope&& rhs ) noexcept
    {
      set_gyro_x(rhs.get_gyro_x());
      set_gyro_y(rhs.get_gyro_y());
      set_gyro_z(rhs.get_gyro_z());
    }

    ~Gyroscope() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      GYRO_X = 1,
      GYRO_Y = 2,
      GYRO_Z = 3
    };

    Gyroscope& operator=(const Gyroscope& rhs)
    {
      set_gyro_x(rhs.get_gyro_x());
      set_gyro_y(rhs.get_gyro_y());
      set_gyro_z(rhs.get_gyro_z());
      return *this;
    }

    Gyroscope& operator=(const Gyroscope&& rhs) noexcept
    {
      set_gyro_x(rhs.get_gyro_x());
      set_gyro_y(rhs.get_gyro_y());
      set_gyro_z(rhs.get_gyro_z());
      return *this;
    }

    static constexpr char const* GYRO_X_NAME = "gyro_x";
    inline void clear_gyro_x() { gyro_x_.clear(); }
    inline void set_gyro_x(const int32_t& value) { gyro_x_ = value; }
    inline void set_gyro_x(const int32_t&& value) { gyro_x_ = value; }
    inline int32_t& mutable_gyro_x() { return gyro_x_.get(); }
    inline const int32_t& get_gyro_x() const { return gyro_x_.get(); }
    inline int32_t gyro_x() const { return gyro_x_.get(); }

    static constexpr char const* GYRO_Y_NAME = "gyro_y";
    inline void clear_gyro_y() { gyro_y_.clear(); }
    inline void set_gyro_y(const int32_t& value) { gyro_y_ = value; }
    inline void set_gyro_y(const int32_t&& value) { gyro_y_ = value; }
    inline int32_t& mutable_gyro_y() { return gyro_y_.get(); }
    inline const int32_t& get_gyro_y() const { return gyro_y_.get(); }
    inline int32_t gyro_y() const { return gyro_y_.get(); }

    static constexpr char const* GYRO_Z_NAME = "gyro_z";
    inline void clear_gyro_z() { gyro_z_.clear(); }
    inline void set_gyro_z(const int32_t& value) { gyro_z_ = value; }
    inline void set_gyro_z(const int32_t&& value) { gyro_z_ = value; }
    inline int32_t& mutable_gyro_z() { return gyro_z_.get(); }
    inline const int32_t& get_gyro_z() const { return gyro_z_.get(); }
    inline int32_t gyro_z() const { return gyro_z_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0 != gyro_x_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = gyro_x_.serialize_with_id(static_cast<uint32_t>(FieldNumber::GYRO_X), buffer, false);
      }

      if((0 != gyro_y_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = gyro_y_.serialize_with_id(static_cast<uint32_t>(FieldNumber::GYRO_Y), buffer, false);
      }

      if((0 != gyro_z_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = gyro_z_.serialize_with_id(static_cast<uint32_t>(FieldNumber::GYRO_Z), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::GYRO_X:
            return_value = gyro_x_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::GYRO_Y:
            return_value = gyro_y_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::GYRO_Z:
            return_value = gyro_z_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NOT_SET:
            return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
            break;

          default:
            return_value = skip_unknown_field(buffer, wire_type);
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_gyro_x();
      clear_gyro_y();
      clear_gyro_z();

    }

#ifndef DISABLE_FIELD_NUMBER_TO_NAME 

    static char const* field_number_to_name(const FieldNumber fieldNumber)
    {
      char const* name = nullptr;
      switch(fieldNumber)
      {
        case FieldNumber::GYRO_X:
          name = GYRO_X_NAME;
          break;
        case FieldNumber::GYRO_Y:
          name = GYRO_Y_NAME;
          break;
        case FieldNumber::GYRO_Z:
          name = GYRO_Z_NAME;
          break;
        default:
          name = "Invalid FieldNumber";
          break;
      }
      return name;
    }

#endif

#ifdef MSG_TO_STRING

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str) const
    {
      return this->to_string(str, 0, nullptr, true);
    }

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str, const uint32_t indent_level, char const* name, const bool first_field) const override
    {
      ::EmbeddedProto::string_view left_chars = str;
      int32_t n_chars_used = 0;

      if(!first_field)
      {
        // Add a comma behind the previous field.
        n_chars_used = snprintf(left_chars.data, left_chars.size, ",\n");
        if(0 < n_chars_used)
        {
          // Update the character pointer and characters left in the array.
          left_chars.data += n_chars_used;
          left_chars.size -= n_chars_used;
        }
      }

      if(nullptr != name)
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "\"%s\": {\n", name);
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s\"%s\": {\n", indent_level, " ", name);
        }
      }
      else
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "{\n");
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s{\n", indent_level, " ");
        }
      }
      
      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      left_chars = gyro_x_.to_string(left_chars, indent_level + 2, GYRO_X_NAME, true);
      left_chars = gyro_y_.to_string(left_chars, indent_level + 2, GYRO_Y_NAME, false);
      left_chars = gyro_z_.to_string(left_chars, indent_level + 2, GYRO_Z_NAME, false);
  
      if( 0 == indent_level) 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n}");
      }
      else 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n%*s}", indent_level, " ");
      }

      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      return left_chars;
    }

#endif // End of MSG_TO_STRING

  private:


      EmbeddedProto::int32 gyro_x_ = 0;
      EmbeddedProto::int32 gyro_y_ = 0;
      EmbeddedProto::int32 gyro_z_ = 0;

};

class IndividualCellVoltages final: public ::EmbeddedProto::MessageInterface
{
  public:
    IndividualCellVoltages() = default;
    IndividualCellVoltages(const IndividualCellVoltages& rhs )
    {
      set_cellOneVoltage(rhs.get_cellOneVoltage());
      set_cellTwoVoltage(rhs.get_cellTwoVoltage());
      set_cellThreeVoltage(rhs.get_cellThreeVoltage());
      set_cellFourVoltage(rhs.get_cellFourVoltage());
    }

    IndividualCellVoltages(const IndividualCellVoltages&& rhs ) noexcept
    {
      set_cellOneVoltage(rhs.get_cellOneVoltage());
      set_cellTwoVoltage(rhs.get_cellTwoVoltage());
      set_cellThreeVoltage(rhs.get_cellThreeVoltage());
      set_cellFourVoltage(rhs.get_cellFourVoltage());
    }

    ~IndividualCellVoltages() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      CELLONEVOLTAGE = 1,
      CELLTWOVOLTAGE = 2,
      CELLTHREEVOLTAGE = 3,
      CELLFOURVOLTAGE = 4
    };

    IndividualCellVoltages& operator=(const IndividualCellVoltages& rhs)
    {
      set_cellOneVoltage(rhs.get_cellOneVoltage());
      set_cellTwoVoltage(rhs.get_cellTwoVoltage());
      set_cellThreeVoltage(rhs.get_cellThreeVoltage());
      set_cellFourVoltage(rhs.get_cellFourVoltage());
      return *this;
    }

    IndividualCellVoltages& operator=(const IndividualCellVoltages&& rhs) noexcept
    {
      set_cellOneVoltage(rhs.get_cellOneVoltage());
      set_cellTwoVoltage(rhs.get_cellTwoVoltage());
      set_cellThreeVoltage(rhs.get_cellThreeVoltage());
      set_cellFourVoltage(rhs.get_cellFourVoltage());
      return *this;
    }

    static constexpr char const* CELLONEVOLTAGE_NAME = "cellOneVoltage";
    inline void clear_cellOneVoltage() { cellOneVoltage_.clear(); }
    inline void set_cellOneVoltage(const uint32_t& value) { cellOneVoltage_ = value; }
    inline void set_cellOneVoltage(const uint32_t&& value) { cellOneVoltage_ = value; }
    inline uint32_t& mutable_cellOneVoltage() { return cellOneVoltage_.get(); }
    inline const uint32_t& get_cellOneVoltage() const { return cellOneVoltage_.get(); }
    inline uint32_t cellOneVoltage() const { return cellOneVoltage_.get(); }

    static constexpr char const* CELLTWOVOLTAGE_NAME = "cellTwoVoltage";
    inline void clear_cellTwoVoltage() { cellTwoVoltage_.clear(); }
    inline void set_cellTwoVoltage(const uint32_t& value) { cellTwoVoltage_ = value; }
    inline void set_cellTwoVoltage(const uint32_t&& value) { cellTwoVoltage_ = value; }
    inline uint32_t& mutable_cellTwoVoltage() { return cellTwoVoltage_.get(); }
    inline const uint32_t& get_cellTwoVoltage() const { return cellTwoVoltage_.get(); }
    inline uint32_t cellTwoVoltage() const { return cellTwoVoltage_.get(); }

    static constexpr char const* CELLTHREEVOLTAGE_NAME = "cellThreeVoltage";
    inline void clear_cellThreeVoltage() { cellThreeVoltage_.clear(); }
    inline void set_cellThreeVoltage(const uint32_t& value) { cellThreeVoltage_ = value; }
    inline void set_cellThreeVoltage(const uint32_t&& value) { cellThreeVoltage_ = value; }
    inline uint32_t& mutable_cellThreeVoltage() { return cellThreeVoltage_.get(); }
    inline const uint32_t& get_cellThreeVoltage() const { return cellThreeVoltage_.get(); }
    inline uint32_t cellThreeVoltage() const { return cellThreeVoltage_.get(); }

    static constexpr char const* CELLFOURVOLTAGE_NAME = "cellFourVoltage";
    inline void clear_cellFourVoltage() { cellFourVoltage_.clear(); }
    inline void set_cellFourVoltage(const uint32_t& value) { cellFourVoltage_ = value; }
    inline void set_cellFourVoltage(const uint32_t&& value) { cellFourVoltage_ = value; }
    inline uint32_t& mutable_cellFourVoltage() { return cellFourVoltage_.get(); }
    inline const uint32_t& get_cellFourVoltage() const { return cellFourVoltage_.get(); }
    inline uint32_t cellFourVoltage() const { return cellFourVoltage_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != cellOneVoltage_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = cellOneVoltage_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CELLONEVOLTAGE), buffer, false);
      }

      if((0U != cellTwoVoltage_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = cellTwoVoltage_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CELLTWOVOLTAGE), buffer, false);
      }

      if((0U != cellThreeVoltage_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = cellThreeVoltage_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CELLTHREEVOLTAGE), buffer, false);
      }

      if((0U != cellFourVoltage_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = cellFourVoltage_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CELLFOURVOLTAGE), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::CELLONEVOLTAGE:
            return_value = cellOneVoltage_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::CELLTWOVOLTAGE:
            return_value = cellTwoVoltage_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::CELLTHREEVOLTAGE:
            return_value = cellThreeVoltage_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::CELLFOURVOLTAGE:
            return_value = cellFourVoltage_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NOT_SET:
            return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
            break;

          default:
            return_value = skip_unknown_field(buffer, wire_type);
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_cellOneVoltage();
      clear_cellTwoVoltage();
      clear_cellThreeVoltage();
      clear_cellFourVoltage();

    }

#ifndef DISABLE_FIELD_NUMBER_TO_NAME 

    static char const* field_number_to_name(const FieldNumber fieldNumber)
    {
      char const* name = nullptr;
      switch(fieldNumber)
      {
        case FieldNumber::CELLONEVOLTAGE:
          name = CELLONEVOLTAGE_NAME;
          break;
        case FieldNumber::CELLTWOVOLTAGE:
          name = CELLTWOVOLTAGE_NAME;
          break;
        case FieldNumber::CELLTHREEVOLTAGE:
          name = CELLTHREEVOLTAGE_NAME;
          break;
        case FieldNumber::CELLFOURVOLTAGE:
          name = CELLFOURVOLTAGE_NAME;
          break;
        default:
          name = "Invalid FieldNumber";
          break;
      }
      return name;
    }

#endif

#ifdef MSG_TO_STRING

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str) const
    {
      return this->to_string(str, 0, nullptr, true);
    }

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str, const uint32_t indent_level, char const* name, const bool first_field) const override
    {
      ::EmbeddedProto::string_view left_chars = str;
      int32_t n_chars_used = 0;

      if(!first_field)
      {
        // Add a comma behind the previous field.
        n_chars_used = snprintf(left_chars.data, left_chars.size, ",\n");
        if(0 < n_chars_used)
        {
          // Update the character pointer and characters left in the array.
          left_chars.data += n_chars_used;
          left_chars.size -= n_chars_used;
        }
      }

      if(nullptr != name)
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "\"%s\": {\n", name);
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s\"%s\": {\n", indent_level, " ", name);
        }
      }
      else
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "{\n");
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s{\n", indent_level, " ");
        }
      }
      
      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      left_chars = cellOneVoltage_.to_string(left_chars, indent_level + 2, CELLONEVOLTAGE_NAME, true);
      left_chars = cellTwoVoltage_.to_string(left_chars, indent_level + 2, CELLTWOVOLTAGE_NAME, false);
      left_chars = cellThreeVoltage_.to_string(left_chars, indent_level + 2, CELLTHREEVOLTAGE_NAME, false);
      left_chars = cellFourVoltage_.to_string(left_chars, indent_level + 2, CELLFOURVOLTAGE_NAME, false);
  
      if( 0 == indent_level) 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n}");
      }
      else 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n%*s}", indent_level, " ");
      }

      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      return left_chars;
    }

#endif // End of MSG_TO_STRING

  private:


      EmbeddedProto::uint32 cellOneVoltage_ = 0U;
      EmbeddedProto::uint32 cellTwoVoltage_ = 0U;
      EmbeddedProto::uint32 cellThreeVoltage_ = 0U;
      EmbeddedProto::uint32 cellFourVoltage_ = 0U;

};

class Magnetometer final: public ::EmbeddedProto::MessageInterface
{
  public:
    Magnetometer() = default;
    Magnetometer(const Magnetometer& rhs )
    {
      set_mag_x(rhs.get_mag_x());
      set_mag_y(rhs.get_mag_y());
      set_mag_z(rhs.get_mag_z());
    }

    Magnetometer(const Magnetometer&& rhs ) noexcept
    {
      set_mag_x(rhs.get_mag_x());
      set_mag_y(rhs.get_mag_y());
      set_mag_z(rhs.get_mag_z());
    }

    ~Magnetometer() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      MAG_X = 1,
      MAG_Y = 2,
      MAG_Z = 3
    };

    Magnetometer& operator=(const Magnetometer& rhs)
    {
      set_mag_x(rhs.get_mag_x());
      set_mag_y(rhs.get_mag_y());
      set_mag_z(rhs.get_mag_z());
      return *this;
    }

    Magnetometer& operator=(const Magnetometer&& rhs) noexcept
    {
      set_mag_x(rhs.get_mag_x());
      set_mag_y(rhs.get_mag_y());
      set_mag_z(rhs.get_mag_z());
      return *this;
    }

    static constexpr char const* MAG_X_NAME = "mag_x";
    inline void clear_mag_x() { mag_x_.clear(); }
    inline void set_mag_x(const int32_t& value) { mag_x_ = value; }
    inline void set_mag_x(const int32_t&& value) { mag_x_ = value; }
    inline int32_t& mutable_mag_x() { return mag_x_.get(); }
    inline const int32_t& get_mag_x() const { return mag_x_.get(); }
    inline int32_t mag_x() const { return mag_x_.get(); }

    static constexpr char const* MAG_Y_NAME = "mag_y";
    inline void clear_mag_y() { mag_y_.clear(); }
    inline void set_mag_y(const int32_t& value) { mag_y_ = value; }
    inline void set_mag_y(const int32_t&& value) { mag_y_ = value; }
    inline int32_t& mutable_mag_y() { return mag_y_.get(); }
    inline const int32_t& get_mag_y() const { return mag_y_.get(); }
    inline int32_t mag_y() const { return mag_y_.get(); }

    static constexpr char const* MAG_Z_NAME = "mag_z";
    inline void clear_mag_z() { mag_z_.clear(); }
    inline void set_mag_z(const int32_t& value) { mag_z_ = value; }
    inline void set_mag_z(const int32_t&& value) { mag_z_ = value; }
    inline int32_t& mutable_mag_z() { return mag_z_.get(); }
    inline const int32_t& get_mag_z() const { return mag_z_.get(); }
    inline int32_t mag_z() const { return mag_z_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0 != mag_x_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = mag_x_.serialize_with_id(static_cast<uint32_t>(FieldNumber::MAG_X), buffer, false);
      }

      if((0 != mag_y_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = mag_y_.serialize_with_id(static_cast<uint32_t>(FieldNumber::MAG_Y), buffer, false);
      }

      if((0 != mag_z_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = mag_z_.serialize_with_id(static_cast<uint32_t>(FieldNumber::MAG_Z), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::MAG_X:
            return_value = mag_x_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::MAG_Y:
            return_value = mag_y_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::MAG_Z:
            return_value = mag_z_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NOT_SET:
            return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
            break;

          default:
            return_value = skip_unknown_field(buffer, wire_type);
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_mag_x();
      clear_mag_y();
      clear_mag_z();

    }

#ifndef DISABLE_FIELD_NUMBER_TO_NAME 

    static char const* field_number_to_name(const FieldNumber fieldNumber)
    {
      char const* name = nullptr;
      switch(fieldNumber)
      {
        case FieldNumber::MAG_X:
          name = MAG_X_NAME;
          break;
        case FieldNumber::MAG_Y:
          name = MAG_Y_NAME;
          break;
        case FieldNumber::MAG_Z:
          name = MAG_Z_NAME;
          break;
        default:
          name = "Invalid FieldNumber";
          break;
      }
      return name;
    }

#endif

#ifdef MSG_TO_STRING

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str) const
    {
      return this->to_string(str, 0, nullptr, true);
    }

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str, const uint32_t indent_level, char const* name, const bool first_field) const override
    {
      ::EmbeddedProto::string_view left_chars = str;
      int32_t n_chars_used = 0;

      if(!first_field)
      {
        // Add a comma behind the previous field.
        n_chars_used = snprintf(left_chars.data, left_chars.size, ",\n");
        if(0 < n_chars_used)
        {
          // Update the character pointer and characters left in the array.
          left_chars.data += n_chars_used;
          left_chars.size -= n_chars_used;
        }
      }

      if(nullptr != name)
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "\"%s\": {\n", name);
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s\"%s\": {\n", indent_level, " ", name);
        }
      }
      else
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "{\n");
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s{\n", indent_level, " ");
        }
      }
      
      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      left_chars = mag_x_.to_string(left_chars, indent_level + 2, MAG_X_NAME, true);
      left_chars = mag_y_.to_string(left_chars, indent_level + 2, MAG_Y_NAME, false);
      left_chars = mag_z_.to_string(left_chars, indent_level + 2, MAG_Z_NAME, false);
  
      if( 0 == indent_level) 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n}");
      }
      else 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n%*s}", indent_level, " ");
      }

      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      return left_chars;
    }

#endif // End of MSG_TO_STRING

  private:


      EmbeddedProto::int32 mag_x_ = 0;
      EmbeddedProto::int32 mag_y_ = 0;
      EmbeddedProto::int32 mag_z_ = 0;

};

class SensorLoggingRate final: public ::EmbeddedProto::MessageInterface
{
  public:
    SensorLoggingRate() = default;
    SensorLoggingRate(const SensorLoggingRate& rhs )
    {
      set_changeLoggingRate(rhs.get_changeLoggingRate());
      set_newSensorLoggingRate(rhs.get_newSensorLoggingRate());
    }

    SensorLoggingRate(const SensorLoggingRate&& rhs ) noexcept
    {
      set_changeLoggingRate(rhs.get_changeLoggingRate());
      set_newSensorLoggingRate(rhs.get_newSensorLoggingRate());
    }

    ~SensorLoggingRate() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      CHANGELOGGINGRATE = 1,
      NEWSENSORLOGGINGRATE = 2
    };

    SensorLoggingRate& operator=(const SensorLoggingRate& rhs)
    {
      set_changeLoggingRate(rhs.get_changeLoggingRate());
      set_newSensorLoggingRate(rhs.get_newSensorLoggingRate());
      return *this;
    }

    SensorLoggingRate& operator=(const SensorLoggingRate&& rhs) noexcept
    {
      set_changeLoggingRate(rhs.get_changeLoggingRate());
      set_newSensorLoggingRate(rhs.get_newSensorLoggingRate());
      return *this;
    }

    static constexpr char const* CHANGELOGGINGRATE_NAME = "changeLoggingRate";
    inline void clear_changeLoggingRate() { changeLoggingRate_.clear(); }
    inline void set_changeLoggingRate(const bool& value) { changeLoggingRate_ = value; }
    inline void set_changeLoggingRate(const bool&& value) { changeLoggingRate_ = value; }
    inline bool& mutable_changeLoggingRate() { return changeLoggingRate_.get(); }
    inline const bool& get_changeLoggingRate() const { return changeLoggingRate_.get(); }
    inline bool changeLoggingRate() const { return changeLoggingRate_.get(); }

    static constexpr char const* NEWSENSORLOGGINGRATE_NAME = "newSensorLoggingRate";
    inline void clear_newSensorLoggingRate() { newSensorLoggingRate_.clear(); }
    inline void set_newSensorLoggingRate(const uint32_t& value) { newSensorLoggingRate_ = value; }
    inline void set_newSensorLoggingRate(const uint32_t&& value) { newSensorLoggingRate_ = value; }
    inline uint32_t& mutable_newSensorLoggingRate() { return newSensorLoggingRate_.get(); }
    inline const uint32_t& get_newSensorLoggingRate() const { return newSensorLoggingRate_.get(); }
    inline uint32_t newSensorLoggingRate() const { return newSensorLoggingRate_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((false != changeLoggingRate_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = changeLoggingRate_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CHANGELOGGINGRATE), buffer, false);
      }

      if((0U != newSensorLoggingRate_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = newSensorLoggingRate_.serialize_with_id(static_cast<uint32_t>(FieldNumber::NEWSENSORLOGGINGRATE), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::CHANGELOGGINGRATE:
            return_value = changeLoggingRate_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NEWSENSORLOGGINGRATE:
            return_value = newSensorLoggingRate_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NOT_SET:
            return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
            break;

          default:
            return_value = skip_unknown_field(buffer, wire_type);
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_changeLoggingRate();
      clear_newSensorLoggingRate();

    }

#ifndef DISABLE_FIELD_NUMBER_TO_NAME 

    static char const* field_number_to_name(const FieldNumber fieldNumber)
    {
      char const* name = nullptr;
      switch(fieldNumber)
      {
        case FieldNumber::CHANGELOGGINGRATE:
          name = CHANGELOGGINGRATE_NAME;
          break;
        case FieldNumber::NEWSENSORLOGGINGRATE:
          name = NEWSENSORLOGGINGRATE_NAME;
          break;
        default:
          name = "Invalid FieldNumber";
          break;
      }
      return name;
    }

#endif

#ifdef MSG_TO_STRING

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str) const
    {
      return this->to_string(str, 0, nullptr, true);
    }

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str, const uint32_t indent_level, char const* name, const bool first_field) const override
    {
      ::EmbeddedProto::string_view left_chars = str;
      int32_t n_chars_used = 0;

      if(!first_field)
      {
        // Add a comma behind the previous field.
        n_chars_used = snprintf(left_chars.data, left_chars.size, ",\n");
        if(0 < n_chars_used)
        {
          // Update the character pointer and characters left in the array.
          left_chars.data += n_chars_used;
          left_chars.size -= n_chars_used;
        }
      }

      if(nullptr != name)
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "\"%s\": {\n", name);
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s\"%s\": {\n", indent_level, " ", name);
        }
      }
      else
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "{\n");
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s{\n", indent_level, " ");
        }
      }
      
      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      left_chars = changeLoggingRate_.to_string(left_chars, indent_level + 2, CHANGELOGGINGRATE_NAME, true);
      left_chars = newSensorLoggingRate_.to_string(left_chars, indent_level + 2, NEWSENSORLOGGINGRATE_NAME, false);
  
      if( 0 == indent_level) 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n}");
      }
      else 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n%*s}", indent_level, " ");
      }

      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      return left_chars;
    }

#endif // End of MSG_TO_STRING

  private:


      EmbeddedProto::boolean changeLoggingRate_ = false;
      EmbeddedProto::uint32 newSensorLoggingRate_ = 0U;

};

class Barometer final: public ::EmbeddedProto::MessageInterface
{
  public:
    Barometer() = default;
    Barometer(const Barometer& rhs )
    {
      set_baro_pressure(rhs.get_baro_pressure());
      set_baro_temperature(rhs.get_baro_temperature());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
    }

    Barometer(const Barometer&& rhs ) noexcept
    {
      set_baro_pressure(rhs.get_baro_pressure());
      set_baro_temperature(rhs.get_baro_temperature());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
    }

    ~Barometer() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      BARO_PRESSURE = 1,
      BARO_TEMPERATURE = 2,
      SENSORLOGGINGRATE = 3
    };

    Barometer& operator=(const Barometer& rhs)
    {
      set_baro_pressure(rhs.get_baro_pressure());
      set_baro_temperature(rhs.get_baro_temperature());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
      return *this;
    }

    Barometer& operator=(const Barometer&& rhs) noexcept
    {
      set_baro_pressure(rhs.get_baro_pressure());
      set_baro_temperature(rhs.get_baro_temperature());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
      return *this;
    }

    static constexpr char const* BARO_PRESSURE_NAME = "baro_pressure";
    inline void clear_baro_pressure() { baro_pressure_.clear(); }
    inline void set_baro_pressure(const int32_t& value) { baro_pressure_ = value; }
    inline void set_baro_pressure(const int32_t&& value) { baro_pressure_ = value; }
    inline int32_t& mutable_baro_pressure() { return baro_pressure_.get(); }
    inline const int32_t& get_baro_pressure() const { return baro_pressure_.get(); }
    inline int32_t baro_pressure() const { return baro_pressure_.get(); }

    static constexpr char const* BARO_TEMPERATURE_NAME = "baro_temperature";
    inline void clear_baro_temperature() { baro_temperature_.clear(); }
    inline void set_baro_temperature(const int32_t& value) { baro_temperature_ = value; }
    inline void set_baro_temperature(const int32_t&& value) { baro_temperature_ = value; }
    inline int32_t& mutable_baro_temperature() { return baro_temperature_.get(); }
    inline const int32_t& get_baro_temperature() const { return baro_temperature_.get(); }
    inline int32_t baro_temperature() const { return baro_temperature_.get(); }

    static constexpr char const* SENSORLOGGINGRATE_NAME = "sensorLoggingRate";
    inline void clear_sensorLoggingRate() { sensorLoggingRate_.clear(); }
    inline void set_sensorLoggingRate(const SensorLoggingRate& value) { sensorLoggingRate_ = value; }
    inline void set_sensorLoggingRate(const SensorLoggingRate&& value) { sensorLoggingRate_ = value; }
    inline SensorLoggingRate& mutable_sensorLoggingRate() { return sensorLoggingRate_; }
    inline const SensorLoggingRate& get_sensorLoggingRate() const { return sensorLoggingRate_; }
    inline const SensorLoggingRate& sensorLoggingRate() const { return sensorLoggingRate_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0 != baro_pressure_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = baro_pressure_.serialize_with_id(static_cast<uint32_t>(FieldNumber::BARO_PRESSURE), buffer, false);
      }

      if((0 != baro_temperature_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = baro_temperature_.serialize_with_id(static_cast<uint32_t>(FieldNumber::BARO_TEMPERATURE), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = sensorLoggingRate_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SENSORLOGGINGRATE), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::BARO_PRESSURE:
            return_value = baro_pressure_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::BARO_TEMPERATURE:
            return_value = baro_temperature_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::SENSORLOGGINGRATE:
            return_value = sensorLoggingRate_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NOT_SET:
            return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
            break;

          default:
            return_value = skip_unknown_field(buffer, wire_type);
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_baro_pressure();
      clear_baro_temperature();
      clear_sensorLoggingRate();

    }

#ifndef DISABLE_FIELD_NUMBER_TO_NAME 

    static char const* field_number_to_name(const FieldNumber fieldNumber)
    {
      char const* name = nullptr;
      switch(fieldNumber)
      {
        case FieldNumber::BARO_PRESSURE:
          name = BARO_PRESSURE_NAME;
          break;
        case FieldNumber::BARO_TEMPERATURE:
          name = BARO_TEMPERATURE_NAME;
          break;
        case FieldNumber::SENSORLOGGINGRATE:
          name = SENSORLOGGINGRATE_NAME;
          break;
        default:
          name = "Invalid FieldNumber";
          break;
      }
      return name;
    }

#endif

#ifdef MSG_TO_STRING

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str) const
    {
      return this->to_string(str, 0, nullptr, true);
    }

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str, const uint32_t indent_level, char const* name, const bool first_field) const override
    {
      ::EmbeddedProto::string_view left_chars = str;
      int32_t n_chars_used = 0;

      if(!first_field)
      {
        // Add a comma behind the previous field.
        n_chars_used = snprintf(left_chars.data, left_chars.size, ",\n");
        if(0 < n_chars_used)
        {
          // Update the character pointer and characters left in the array.
          left_chars.data += n_chars_used;
          left_chars.size -= n_chars_used;
        }
      }

      if(nullptr != name)
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "\"%s\": {\n", name);
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s\"%s\": {\n", indent_level, " ", name);
        }
      }
      else
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "{\n");
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s{\n", indent_level, " ");
        }
      }
      
      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      left_chars = baro_pressure_.to_string(left_chars, indent_level + 2, BARO_PRESSURE_NAME, true);
      left_chars = baro_temperature_.to_string(left_chars, indent_level + 2, BARO_TEMPERATURE_NAME, false);
      left_chars = sensorLoggingRate_.to_string(left_chars, indent_level + 2, SENSORLOGGINGRATE_NAME, false);
  
      if( 0 == indent_level) 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n}");
      }
      else 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n%*s}", indent_level, " ");
      }

      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      return left_chars;
    }

#endif // End of MSG_TO_STRING

  private:


      EmbeddedProto::int32 baro_pressure_ = 0;
      EmbeddedProto::int32 baro_temperature_ = 0;
      SensorLoggingRate sensorLoggingRate_;

};

class BatteryPack final: public ::EmbeddedProto::MessageInterface
{
  public:
    BatteryPack() = default;
    BatteryPack(const BatteryPack& rhs )
    {
      set_voltage(rhs.get_voltage());
      set_currentDraw(rhs.get_currentDraw());
      set_StateOfCharge(rhs.get_StateOfCharge());
      set_packTemperature(rhs.get_packTemperature());
      set_chargeState(rhs.get_chargeState());
      set_chargeSpeed(rhs.get_chargeSpeed());
      set_individualCellVoltages(rhs.get_individualCellVoltages());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
    }

    BatteryPack(const BatteryPack&& rhs ) noexcept
    {
      set_voltage(rhs.get_voltage());
      set_currentDraw(rhs.get_currentDraw());
      set_StateOfCharge(rhs.get_StateOfCharge());
      set_packTemperature(rhs.get_packTemperature());
      set_chargeState(rhs.get_chargeState());
      set_chargeSpeed(rhs.get_chargeSpeed());
      set_individualCellVoltages(rhs.get_individualCellVoltages());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
    }

    ~BatteryPack() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VOLTAGE = 1,
      CURRENTDRAW = 2,
      STATEOFCHARGE = 3,
      PACKTEMPERATURE = 4,
      CHARGESTATE = 5,
      CHARGESPEED = 6,
      INDIVIDUALCELLVOLTAGES = 7,
      SENSORLOGGINGRATE = 8
    };

    BatteryPack& operator=(const BatteryPack& rhs)
    {
      set_voltage(rhs.get_voltage());
      set_currentDraw(rhs.get_currentDraw());
      set_StateOfCharge(rhs.get_StateOfCharge());
      set_packTemperature(rhs.get_packTemperature());
      set_chargeState(rhs.get_chargeState());
      set_chargeSpeed(rhs.get_chargeSpeed());
      set_individualCellVoltages(rhs.get_individualCellVoltages());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
      return *this;
    }

    BatteryPack& operator=(const BatteryPack&& rhs) noexcept
    {
      set_voltage(rhs.get_voltage());
      set_currentDraw(rhs.get_currentDraw());
      set_StateOfCharge(rhs.get_StateOfCharge());
      set_packTemperature(rhs.get_packTemperature());
      set_chargeState(rhs.get_chargeState());
      set_chargeSpeed(rhs.get_chargeSpeed());
      set_individualCellVoltages(rhs.get_individualCellVoltages());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
      return *this;
    }

    static constexpr char const* VOLTAGE_NAME = "voltage";
    inline void clear_voltage() { voltage_.clear(); }
    inline void set_voltage(const uint32_t& value) { voltage_ = value; }
    inline void set_voltage(const uint32_t&& value) { voltage_ = value; }
    inline uint32_t& mutable_voltage() { return voltage_.get(); }
    inline const uint32_t& get_voltage() const { return voltage_.get(); }
    inline uint32_t voltage() const { return voltage_.get(); }

    static constexpr char const* CURRENTDRAW_NAME = "currentDraw";
    inline void clear_currentDraw() { currentDraw_.clear(); }
    inline void set_currentDraw(const uint32_t& value) { currentDraw_ = value; }
    inline void set_currentDraw(const uint32_t&& value) { currentDraw_ = value; }
    inline uint32_t& mutable_currentDraw() { return currentDraw_.get(); }
    inline const uint32_t& get_currentDraw() const { return currentDraw_.get(); }
    inline uint32_t currentDraw() const { return currentDraw_.get(); }

    static constexpr char const* STATEOFCHARGE_NAME = "StateOfCharge";
    inline void clear_StateOfCharge() { StateOfCharge_.clear(); }
    inline void set_StateOfCharge(const uint32_t& value) { StateOfCharge_ = value; }
    inline void set_StateOfCharge(const uint32_t&& value) { StateOfCharge_ = value; }
    inline uint32_t& mutable_StateOfCharge() { return StateOfCharge_.get(); }
    inline const uint32_t& get_StateOfCharge() const { return StateOfCharge_.get(); }
    inline uint32_t StateOfCharge() const { return StateOfCharge_.get(); }

    static constexpr char const* PACKTEMPERATURE_NAME = "packTemperature";
    inline void clear_packTemperature() { packTemperature_.clear(); }
    inline void set_packTemperature(const uint32_t& value) { packTemperature_ = value; }
    inline void set_packTemperature(const uint32_t&& value) { packTemperature_ = value; }
    inline uint32_t& mutable_packTemperature() { return packTemperature_.get(); }
    inline const uint32_t& get_packTemperature() const { return packTemperature_.get(); }
    inline uint32_t packTemperature() const { return packTemperature_.get(); }

    static constexpr char const* CHARGESTATE_NAME = "chargeState";
    inline void clear_chargeState() { chargeState_.clear(); }
    inline void set_chargeState(const ChargeState& value) { chargeState_ = value; }
    inline void set_chargeState(const ChargeState&& value) { chargeState_ = value; }
    inline const ChargeState& get_chargeState() const { return chargeState_.get(); }
    inline ChargeState chargeState() const { return chargeState_.get(); }

    static constexpr char const* CHARGESPEED_NAME = "chargeSpeed";
    inline void clear_chargeSpeed() { chargeSpeed_.clear(); }
    inline void set_chargeSpeed(const ChargeSpeed& value) { chargeSpeed_ = value; }
    inline void set_chargeSpeed(const ChargeSpeed&& value) { chargeSpeed_ = value; }
    inline const ChargeSpeed& get_chargeSpeed() const { return chargeSpeed_.get(); }
    inline ChargeSpeed chargeSpeed() const { return chargeSpeed_.get(); }

    static constexpr char const* INDIVIDUALCELLVOLTAGES_NAME = "individualCellVoltages";
    inline void clear_individualCellVoltages() { individualCellVoltages_.clear(); }
    inline void set_individualCellVoltages(const IndividualCellVoltages& value) { individualCellVoltages_ = value; }
    inline void set_individualCellVoltages(const IndividualCellVoltages&& value) { individualCellVoltages_ = value; }
    inline IndividualCellVoltages& mutable_individualCellVoltages() { return individualCellVoltages_; }
    inline const IndividualCellVoltages& get_individualCellVoltages() const { return individualCellVoltages_; }
    inline const IndividualCellVoltages& individualCellVoltages() const { return individualCellVoltages_; }

    static constexpr char const* SENSORLOGGINGRATE_NAME = "sensorLoggingRate";
    inline void clear_sensorLoggingRate() { sensorLoggingRate_.clear(); }
    inline void set_sensorLoggingRate(const SensorLoggingRate& value) { sensorLoggingRate_ = value; }
    inline void set_sensorLoggingRate(const SensorLoggingRate&& value) { sensorLoggingRate_ = value; }
    inline SensorLoggingRate& mutable_sensorLoggingRate() { return sensorLoggingRate_; }
    inline const SensorLoggingRate& get_sensorLoggingRate() const { return sensorLoggingRate_; }
    inline const SensorLoggingRate& sensorLoggingRate() const { return sensorLoggingRate_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != voltage_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = voltage_.serialize_with_id(static_cast<uint32_t>(FieldNumber::VOLTAGE), buffer, false);
      }

      if((0U != currentDraw_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = currentDraw_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CURRENTDRAW), buffer, false);
      }

      if((0U != StateOfCharge_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = StateOfCharge_.serialize_with_id(static_cast<uint32_t>(FieldNumber::STATEOFCHARGE), buffer, false);
      }

      if((0U != packTemperature_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = packTemperature_.serialize_with_id(static_cast<uint32_t>(FieldNumber::PACKTEMPERATURE), buffer, false);
      }

      if((static_cast<ChargeState>(0) != chargeState_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = chargeState_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CHARGESTATE), buffer, false);
      }

      if((static_cast<ChargeSpeed>(0) != chargeSpeed_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = chargeSpeed_.serialize_with_id(static_cast<uint32_t>(FieldNumber::CHARGESPEED), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = individualCellVoltages_.serialize_with_id(static_cast<uint32_t>(FieldNumber::INDIVIDUALCELLVOLTAGES), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = sensorLoggingRate_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SENSORLOGGINGRATE), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::VOLTAGE:
            return_value = voltage_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::CURRENTDRAW:
            return_value = currentDraw_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::STATEOFCHARGE:
            return_value = StateOfCharge_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::PACKTEMPERATURE:
            return_value = packTemperature_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::CHARGESTATE:
            return_value = chargeState_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::CHARGESPEED:
            return_value = chargeSpeed_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::INDIVIDUALCELLVOLTAGES:
            return_value = individualCellVoltages_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::SENSORLOGGINGRATE:
            return_value = sensorLoggingRate_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NOT_SET:
            return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
            break;

          default:
            return_value = skip_unknown_field(buffer, wire_type);
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_voltage();
      clear_currentDraw();
      clear_StateOfCharge();
      clear_packTemperature();
      clear_chargeState();
      clear_chargeSpeed();
      clear_individualCellVoltages();
      clear_sensorLoggingRate();

    }

#ifndef DISABLE_FIELD_NUMBER_TO_NAME 

    static char const* field_number_to_name(const FieldNumber fieldNumber)
    {
      char const* name = nullptr;
      switch(fieldNumber)
      {
        case FieldNumber::VOLTAGE:
          name = VOLTAGE_NAME;
          break;
        case FieldNumber::CURRENTDRAW:
          name = CURRENTDRAW_NAME;
          break;
        case FieldNumber::STATEOFCHARGE:
          name = STATEOFCHARGE_NAME;
          break;
        case FieldNumber::PACKTEMPERATURE:
          name = PACKTEMPERATURE_NAME;
          break;
        case FieldNumber::CHARGESTATE:
          name = CHARGESTATE_NAME;
          break;
        case FieldNumber::CHARGESPEED:
          name = CHARGESPEED_NAME;
          break;
        case FieldNumber::INDIVIDUALCELLVOLTAGES:
          name = INDIVIDUALCELLVOLTAGES_NAME;
          break;
        case FieldNumber::SENSORLOGGINGRATE:
          name = SENSORLOGGINGRATE_NAME;
          break;
        default:
          name = "Invalid FieldNumber";
          break;
      }
      return name;
    }

#endif

#ifdef MSG_TO_STRING

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str) const
    {
      return this->to_string(str, 0, nullptr, true);
    }

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str, const uint32_t indent_level, char const* name, const bool first_field) const override
    {
      ::EmbeddedProto::string_view left_chars = str;
      int32_t n_chars_used = 0;

      if(!first_field)
      {
        // Add a comma behind the previous field.
        n_chars_used = snprintf(left_chars.data, left_chars.size, ",\n");
        if(0 < n_chars_used)
        {
          // Update the character pointer and characters left in the array.
          left_chars.data += n_chars_used;
          left_chars.size -= n_chars_used;
        }
      }

      if(nullptr != name)
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "\"%s\": {\n", name);
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s\"%s\": {\n", indent_level, " ", name);
        }
      }
      else
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "{\n");
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s{\n", indent_level, " ");
        }
      }
      
      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      left_chars = voltage_.to_string(left_chars, indent_level + 2, VOLTAGE_NAME, true);
      left_chars = currentDraw_.to_string(left_chars, indent_level + 2, CURRENTDRAW_NAME, false);
      left_chars = StateOfCharge_.to_string(left_chars, indent_level + 2, STATEOFCHARGE_NAME, false);
      left_chars = packTemperature_.to_string(left_chars, indent_level + 2, PACKTEMPERATURE_NAME, false);
      left_chars = chargeState_.to_string(left_chars, indent_level + 2, CHARGESTATE_NAME, false);
      left_chars = chargeSpeed_.to_string(left_chars, indent_level + 2, CHARGESPEED_NAME, false);
      left_chars = individualCellVoltages_.to_string(left_chars, indent_level + 2, INDIVIDUALCELLVOLTAGES_NAME, false);
      left_chars = sensorLoggingRate_.to_string(left_chars, indent_level + 2, SENSORLOGGINGRATE_NAME, false);
  
      if( 0 == indent_level) 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n}");
      }
      else 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n%*s}", indent_level, " ");
      }

      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      return left_chars;
    }

#endif // End of MSG_TO_STRING

  private:


      EmbeddedProto::uint32 voltage_ = 0U;
      EmbeddedProto::uint32 currentDraw_ = 0U;
      EmbeddedProto::uint32 StateOfCharge_ = 0U;
      EmbeddedProto::uint32 packTemperature_ = 0U;
      EmbeddedProto::enumeration<ChargeState> chargeState_ = static_cast<ChargeState>(0);
      EmbeddedProto::enumeration<ChargeSpeed> chargeSpeed_ = static_cast<ChargeSpeed>(0);
      IndividualCellVoltages individualCellVoltages_;
      SensorLoggingRate sensorLoggingRate_;

};

class Gps final: public ::EmbeddedProto::MessageInterface
{
  public:
    Gps() = default;
    Gps(const Gps& rhs )
    {
      set_latitude(rhs.get_latitude());
      set_longitude(rhs.get_longitude());
      set_antenna_altitude(rhs.get_antenna_altitude());
      set_geo_id_altitude(rhs.get_geo_id_altitude());
      set_total_altitude(rhs.get_total_altitude());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
    }

    Gps(const Gps&& rhs ) noexcept
    {
      set_latitude(rhs.get_latitude());
      set_longitude(rhs.get_longitude());
      set_antenna_altitude(rhs.get_antenna_altitude());
      set_geo_id_altitude(rhs.get_geo_id_altitude());
      set_total_altitude(rhs.get_total_altitude());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
    }

    ~Gps() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      LATITUDE = 1,
      LONGITUDE = 2,
      ANTENNA_ALTITUDE = 3,
      GEO_ID_ALTITUDE = 4,
      TOTAL_ALTITUDE = 5,
      SENSORLOGGINGRATE = 6
    };

    Gps& operator=(const Gps& rhs)
    {
      set_latitude(rhs.get_latitude());
      set_longitude(rhs.get_longitude());
      set_antenna_altitude(rhs.get_antenna_altitude());
      set_geo_id_altitude(rhs.get_geo_id_altitude());
      set_total_altitude(rhs.get_total_altitude());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
      return *this;
    }

    Gps& operator=(const Gps&& rhs) noexcept
    {
      set_latitude(rhs.get_latitude());
      set_longitude(rhs.get_longitude());
      set_antenna_altitude(rhs.get_antenna_altitude());
      set_geo_id_altitude(rhs.get_geo_id_altitude());
      set_total_altitude(rhs.get_total_altitude());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
      return *this;
    }

    static constexpr char const* LATITUDE_NAME = "latitude";
    inline void clear_latitude() { latitude_.clear(); }
    inline void set_latitude(const CoordinateType& value) { latitude_ = value; }
    inline void set_latitude(const CoordinateType&& value) { latitude_ = value; }
    inline CoordinateType& mutable_latitude() { return latitude_; }
    inline const CoordinateType& get_latitude() const { return latitude_; }
    inline const CoordinateType& latitude() const { return latitude_; }

    static constexpr char const* LONGITUDE_NAME = "longitude";
    inline void clear_longitude() { longitude_.clear(); }
    inline void set_longitude(const CoordinateType& value) { longitude_ = value; }
    inline void set_longitude(const CoordinateType&& value) { longitude_ = value; }
    inline CoordinateType& mutable_longitude() { return longitude_; }
    inline const CoordinateType& get_longitude() const { return longitude_; }
    inline const CoordinateType& longitude() const { return longitude_; }

    static constexpr char const* ANTENNA_ALTITUDE_NAME = "antenna_altitude";
    inline void clear_antenna_altitude() { antenna_altitude_.clear(); }
    inline void set_antenna_altitude(const AltitudeType& value) { antenna_altitude_ = value; }
    inline void set_antenna_altitude(const AltitudeType&& value) { antenna_altitude_ = value; }
    inline AltitudeType& mutable_antenna_altitude() { return antenna_altitude_; }
    inline const AltitudeType& get_antenna_altitude() const { return antenna_altitude_; }
    inline const AltitudeType& antenna_altitude() const { return antenna_altitude_; }

    static constexpr char const* GEO_ID_ALTITUDE_NAME = "geo_id_altitude";
    inline void clear_geo_id_altitude() { geo_id_altitude_.clear(); }
    inline void set_geo_id_altitude(const AltitudeType& value) { geo_id_altitude_ = value; }
    inline void set_geo_id_altitude(const AltitudeType&& value) { geo_id_altitude_ = value; }
    inline AltitudeType& mutable_geo_id_altitude() { return geo_id_altitude_; }
    inline const AltitudeType& get_geo_id_altitude() const { return geo_id_altitude_; }
    inline const AltitudeType& geo_id_altitude() const { return geo_id_altitude_; }

    static constexpr char const* TOTAL_ALTITUDE_NAME = "total_altitude";
    inline void clear_total_altitude() { total_altitude_.clear(); }
    inline void set_total_altitude(const AltitudeType& value) { total_altitude_ = value; }
    inline void set_total_altitude(const AltitudeType&& value) { total_altitude_ = value; }
    inline AltitudeType& mutable_total_altitude() { return total_altitude_; }
    inline const AltitudeType& get_total_altitude() const { return total_altitude_; }
    inline const AltitudeType& total_altitude() const { return total_altitude_; }

    static constexpr char const* SENSORLOGGINGRATE_NAME = "sensorLoggingRate";
    inline void clear_sensorLoggingRate() { sensorLoggingRate_.clear(); }
    inline void set_sensorLoggingRate(const SensorLoggingRate& value) { sensorLoggingRate_ = value; }
    inline void set_sensorLoggingRate(const SensorLoggingRate&& value) { sensorLoggingRate_ = value; }
    inline SensorLoggingRate& mutable_sensorLoggingRate() { return sensorLoggingRate_; }
    inline const SensorLoggingRate& get_sensorLoggingRate() const { return sensorLoggingRate_; }
    inline const SensorLoggingRate& sensorLoggingRate() const { return sensorLoggingRate_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = latitude_.serialize_with_id(static_cast<uint32_t>(FieldNumber::LATITUDE), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = longitude_.serialize_with_id(static_cast<uint32_t>(FieldNumber::LONGITUDE), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = antenna_altitude_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ANTENNA_ALTITUDE), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = geo_id_altitude_.serialize_with_id(static_cast<uint32_t>(FieldNumber::GEO_ID_ALTITUDE), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = total_altitude_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TOTAL_ALTITUDE), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = sensorLoggingRate_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SENSORLOGGINGRATE), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::LATITUDE:
            return_value = latitude_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::LONGITUDE:
            return_value = longitude_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::ANTENNA_ALTITUDE:
            return_value = antenna_altitude_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::GEO_ID_ALTITUDE:
            return_value = geo_id_altitude_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::TOTAL_ALTITUDE:
            return_value = total_altitude_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::SENSORLOGGINGRATE:
            return_value = sensorLoggingRate_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NOT_SET:
            return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
            break;

          default:
            return_value = skip_unknown_field(buffer, wire_type);
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_latitude();
      clear_longitude();
      clear_antenna_altitude();
      clear_geo_id_altitude();
      clear_total_altitude();
      clear_sensorLoggingRate();

    }

#ifndef DISABLE_FIELD_NUMBER_TO_NAME 

    static char const* field_number_to_name(const FieldNumber fieldNumber)
    {
      char const* name = nullptr;
      switch(fieldNumber)
      {
        case FieldNumber::LATITUDE:
          name = LATITUDE_NAME;
          break;
        case FieldNumber::LONGITUDE:
          name = LONGITUDE_NAME;
          break;
        case FieldNumber::ANTENNA_ALTITUDE:
          name = ANTENNA_ALTITUDE_NAME;
          break;
        case FieldNumber::GEO_ID_ALTITUDE:
          name = GEO_ID_ALTITUDE_NAME;
          break;
        case FieldNumber::TOTAL_ALTITUDE:
          name = TOTAL_ALTITUDE_NAME;
          break;
        case FieldNumber::SENSORLOGGINGRATE:
          name = SENSORLOGGINGRATE_NAME;
          break;
        default:
          name = "Invalid FieldNumber";
          break;
      }
      return name;
    }

#endif

#ifdef MSG_TO_STRING

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str) const
    {
      return this->to_string(str, 0, nullptr, true);
    }

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str, const uint32_t indent_level, char const* name, const bool first_field) const override
    {
      ::EmbeddedProto::string_view left_chars = str;
      int32_t n_chars_used = 0;

      if(!first_field)
      {
        // Add a comma behind the previous field.
        n_chars_used = snprintf(left_chars.data, left_chars.size, ",\n");
        if(0 < n_chars_used)
        {
          // Update the character pointer and characters left in the array.
          left_chars.data += n_chars_used;
          left_chars.size -= n_chars_used;
        }
      }

      if(nullptr != name)
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "\"%s\": {\n", name);
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s\"%s\": {\n", indent_level, " ", name);
        }
      }
      else
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "{\n");
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s{\n", indent_level, " ");
        }
      }
      
      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      left_chars = latitude_.to_string(left_chars, indent_level + 2, LATITUDE_NAME, true);
      left_chars = longitude_.to_string(left_chars, indent_level + 2, LONGITUDE_NAME, false);
      left_chars = antenna_altitude_.to_string(left_chars, indent_level + 2, ANTENNA_ALTITUDE_NAME, false);
      left_chars = geo_id_altitude_.to_string(left_chars, indent_level + 2, GEO_ID_ALTITUDE_NAME, false);
      left_chars = total_altitude_.to_string(left_chars, indent_level + 2, TOTAL_ALTITUDE_NAME, false);
      left_chars = sensorLoggingRate_.to_string(left_chars, indent_level + 2, SENSORLOGGINGRATE_NAME, false);
  
      if( 0 == indent_level) 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n}");
      }
      else 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n%*s}", indent_level, " ");
      }

      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      return left_chars;
    }

#endif // End of MSG_TO_STRING

  private:


      CoordinateType latitude_;
      CoordinateType longitude_;
      AltitudeType antenna_altitude_;
      AltitudeType geo_id_altitude_;
      AltitudeType total_altitude_;
      SensorLoggingRate sensorLoggingRate_;

};

class ImuNineAxis final: public ::EmbeddedProto::MessageInterface
{
  public:
    ImuNineAxis() = default;
    ImuNineAxis(const ImuNineAxis& rhs )
    {
      set_accelerometer(rhs.get_accelerometer());
      set_gyroscope(rhs.get_gyroscope());
      set_magnetometer(rhs.get_magnetometer());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
    }

    ImuNineAxis(const ImuNineAxis&& rhs ) noexcept
    {
      set_accelerometer(rhs.get_accelerometer());
      set_gyroscope(rhs.get_gyroscope());
      set_magnetometer(rhs.get_magnetometer());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
    }

    ~ImuNineAxis() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ACCELEROMETER = 1,
      GYROSCOPE = 2,
      MAGNETOMETER = 3,
      SENSORLOGGINGRATE = 4
    };

    ImuNineAxis& operator=(const ImuNineAxis& rhs)
    {
      set_accelerometer(rhs.get_accelerometer());
      set_gyroscope(rhs.get_gyroscope());
      set_magnetometer(rhs.get_magnetometer());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
      return *this;
    }

    ImuNineAxis& operator=(const ImuNineAxis&& rhs) noexcept
    {
      set_accelerometer(rhs.get_accelerometer());
      set_gyroscope(rhs.get_gyroscope());
      set_magnetometer(rhs.get_magnetometer());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
      return *this;
    }

    static constexpr char const* ACCELEROMETER_NAME = "accelerometer";
    inline void clear_accelerometer() { accelerometer_.clear(); }
    inline void set_accelerometer(const Accelerometer& value) { accelerometer_ = value; }
    inline void set_accelerometer(const Accelerometer&& value) { accelerometer_ = value; }
    inline Accelerometer& mutable_accelerometer() { return accelerometer_; }
    inline const Accelerometer& get_accelerometer() const { return accelerometer_; }
    inline const Accelerometer& accelerometer() const { return accelerometer_; }

    static constexpr char const* GYROSCOPE_NAME = "gyroscope";
    inline void clear_gyroscope() { gyroscope_.clear(); }
    inline void set_gyroscope(const Gyroscope& value) { gyroscope_ = value; }
    inline void set_gyroscope(const Gyroscope&& value) { gyroscope_ = value; }
    inline Gyroscope& mutable_gyroscope() { return gyroscope_; }
    inline const Gyroscope& get_gyroscope() const { return gyroscope_; }
    inline const Gyroscope& gyroscope() const { return gyroscope_; }

    static constexpr char const* MAGNETOMETER_NAME = "magnetometer";
    inline void clear_magnetometer() { magnetometer_.clear(); }
    inline void set_magnetometer(const Magnetometer& value) { magnetometer_ = value; }
    inline void set_magnetometer(const Magnetometer&& value) { magnetometer_ = value; }
    inline Magnetometer& mutable_magnetometer() { return magnetometer_; }
    inline const Magnetometer& get_magnetometer() const { return magnetometer_; }
    inline const Magnetometer& magnetometer() const { return magnetometer_; }

    static constexpr char const* SENSORLOGGINGRATE_NAME = "sensorLoggingRate";
    inline void clear_sensorLoggingRate() { sensorLoggingRate_.clear(); }
    inline void set_sensorLoggingRate(const SensorLoggingRate& value) { sensorLoggingRate_ = value; }
    inline void set_sensorLoggingRate(const SensorLoggingRate&& value) { sensorLoggingRate_ = value; }
    inline SensorLoggingRate& mutable_sensorLoggingRate() { return sensorLoggingRate_; }
    inline const SensorLoggingRate& get_sensorLoggingRate() const { return sensorLoggingRate_; }
    inline const SensorLoggingRate& sensorLoggingRate() const { return sensorLoggingRate_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = accelerometer_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ACCELEROMETER), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = gyroscope_.serialize_with_id(static_cast<uint32_t>(FieldNumber::GYROSCOPE), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = magnetometer_.serialize_with_id(static_cast<uint32_t>(FieldNumber::MAGNETOMETER), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = sensorLoggingRate_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SENSORLOGGINGRATE), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::ACCELEROMETER:
            return_value = accelerometer_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::GYROSCOPE:
            return_value = gyroscope_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::MAGNETOMETER:
            return_value = magnetometer_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::SENSORLOGGINGRATE:
            return_value = sensorLoggingRate_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NOT_SET:
            return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
            break;

          default:
            return_value = skip_unknown_field(buffer, wire_type);
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_accelerometer();
      clear_gyroscope();
      clear_magnetometer();
      clear_sensorLoggingRate();

    }

#ifndef DISABLE_FIELD_NUMBER_TO_NAME 

    static char const* field_number_to_name(const FieldNumber fieldNumber)
    {
      char const* name = nullptr;
      switch(fieldNumber)
      {
        case FieldNumber::ACCELEROMETER:
          name = ACCELEROMETER_NAME;
          break;
        case FieldNumber::GYROSCOPE:
          name = GYROSCOPE_NAME;
          break;
        case FieldNumber::MAGNETOMETER:
          name = MAGNETOMETER_NAME;
          break;
        case FieldNumber::SENSORLOGGINGRATE:
          name = SENSORLOGGINGRATE_NAME;
          break;
        default:
          name = "Invalid FieldNumber";
          break;
      }
      return name;
    }

#endif

#ifdef MSG_TO_STRING

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str) const
    {
      return this->to_string(str, 0, nullptr, true);
    }

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str, const uint32_t indent_level, char const* name, const bool first_field) const override
    {
      ::EmbeddedProto::string_view left_chars = str;
      int32_t n_chars_used = 0;

      if(!first_field)
      {
        // Add a comma behind the previous field.
        n_chars_used = snprintf(left_chars.data, left_chars.size, ",\n");
        if(0 < n_chars_used)
        {
          // Update the character pointer and characters left in the array.
          left_chars.data += n_chars_used;
          left_chars.size -= n_chars_used;
        }
      }

      if(nullptr != name)
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "\"%s\": {\n", name);
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s\"%s\": {\n", indent_level, " ", name);
        }
      }
      else
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "{\n");
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s{\n", indent_level, " ");
        }
      }
      
      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      left_chars = accelerometer_.to_string(left_chars, indent_level + 2, ACCELEROMETER_NAME, true);
      left_chars = gyroscope_.to_string(left_chars, indent_level + 2, GYROSCOPE_NAME, false);
      left_chars = magnetometer_.to_string(left_chars, indent_level + 2, MAGNETOMETER_NAME, false);
      left_chars = sensorLoggingRate_.to_string(left_chars, indent_level + 2, SENSORLOGGINGRATE_NAME, false);
  
      if( 0 == indent_level) 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n}");
      }
      else 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n%*s}", indent_level, " ");
      }

      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      return left_chars;
    }

#endif // End of MSG_TO_STRING

  private:


      Accelerometer accelerometer_;
      Gyroscope gyroscope_;
      Magnetometer magnetometer_;
      SensorLoggingRate sensorLoggingRate_;

};

class ImuSixAxis final: public ::EmbeddedProto::MessageInterface
{
  public:
    ImuSixAxis() = default;
    ImuSixAxis(const ImuSixAxis& rhs )
    {
      set_accelerometer(rhs.get_accelerometer());
      set_gyroscope(rhs.get_gyroscope());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
    }

    ImuSixAxis(const ImuSixAxis&& rhs ) noexcept
    {
      set_accelerometer(rhs.get_accelerometer());
      set_gyroscope(rhs.get_gyroscope());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
    }

    ~ImuSixAxis() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      ACCELEROMETER = 1,
      GYROSCOPE = 2,
      SENSORLOGGINGRATE = 3
    };

    ImuSixAxis& operator=(const ImuSixAxis& rhs)
    {
      set_accelerometer(rhs.get_accelerometer());
      set_gyroscope(rhs.get_gyroscope());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
      return *this;
    }

    ImuSixAxis& operator=(const ImuSixAxis&& rhs) noexcept
    {
      set_accelerometer(rhs.get_accelerometer());
      set_gyroscope(rhs.get_gyroscope());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
      return *this;
    }

    static constexpr char const* ACCELEROMETER_NAME = "accelerometer";
    inline void clear_accelerometer() { accelerometer_.clear(); }
    inline void set_accelerometer(const Accelerometer& value) { accelerometer_ = value; }
    inline void set_accelerometer(const Accelerometer&& value) { accelerometer_ = value; }
    inline Accelerometer& mutable_accelerometer() { return accelerometer_; }
    inline const Accelerometer& get_accelerometer() const { return accelerometer_; }
    inline const Accelerometer& accelerometer() const { return accelerometer_; }

    static constexpr char const* GYROSCOPE_NAME = "gyroscope";
    inline void clear_gyroscope() { gyroscope_.clear(); }
    inline void set_gyroscope(const Gyroscope& value) { gyroscope_ = value; }
    inline void set_gyroscope(const Gyroscope&& value) { gyroscope_ = value; }
    inline Gyroscope& mutable_gyroscope() { return gyroscope_; }
    inline const Gyroscope& get_gyroscope() const { return gyroscope_; }
    inline const Gyroscope& gyroscope() const { return gyroscope_; }

    static constexpr char const* SENSORLOGGINGRATE_NAME = "sensorLoggingRate";
    inline void clear_sensorLoggingRate() { sensorLoggingRate_.clear(); }
    inline void set_sensorLoggingRate(const SensorLoggingRate& value) { sensorLoggingRate_ = value; }
    inline void set_sensorLoggingRate(const SensorLoggingRate&& value) { sensorLoggingRate_ = value; }
    inline SensorLoggingRate& mutable_sensorLoggingRate() { return sensorLoggingRate_; }
    inline const SensorLoggingRate& get_sensorLoggingRate() const { return sensorLoggingRate_; }
    inline const SensorLoggingRate& sensorLoggingRate() const { return sensorLoggingRate_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = accelerometer_.serialize_with_id(static_cast<uint32_t>(FieldNumber::ACCELEROMETER), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = gyroscope_.serialize_with_id(static_cast<uint32_t>(FieldNumber::GYROSCOPE), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = sensorLoggingRate_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SENSORLOGGINGRATE), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::ACCELEROMETER:
            return_value = accelerometer_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::GYROSCOPE:
            return_value = gyroscope_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::SENSORLOGGINGRATE:
            return_value = sensorLoggingRate_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NOT_SET:
            return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
            break;

          default:
            return_value = skip_unknown_field(buffer, wire_type);
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_accelerometer();
      clear_gyroscope();
      clear_sensorLoggingRate();

    }

#ifndef DISABLE_FIELD_NUMBER_TO_NAME 

    static char const* field_number_to_name(const FieldNumber fieldNumber)
    {
      char const* name = nullptr;
      switch(fieldNumber)
      {
        case FieldNumber::ACCELEROMETER:
          name = ACCELEROMETER_NAME;
          break;
        case FieldNumber::GYROSCOPE:
          name = GYROSCOPE_NAME;
          break;
        case FieldNumber::SENSORLOGGINGRATE:
          name = SENSORLOGGINGRATE_NAME;
          break;
        default:
          name = "Invalid FieldNumber";
          break;
      }
      return name;
    }

#endif

#ifdef MSG_TO_STRING

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str) const
    {
      return this->to_string(str, 0, nullptr, true);
    }

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str, const uint32_t indent_level, char const* name, const bool first_field) const override
    {
      ::EmbeddedProto::string_view left_chars = str;
      int32_t n_chars_used = 0;

      if(!first_field)
      {
        // Add a comma behind the previous field.
        n_chars_used = snprintf(left_chars.data, left_chars.size, ",\n");
        if(0 < n_chars_used)
        {
          // Update the character pointer and characters left in the array.
          left_chars.data += n_chars_used;
          left_chars.size -= n_chars_used;
        }
      }

      if(nullptr != name)
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "\"%s\": {\n", name);
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s\"%s\": {\n", indent_level, " ", name);
        }
      }
      else
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "{\n");
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s{\n", indent_level, " ");
        }
      }
      
      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      left_chars = accelerometer_.to_string(left_chars, indent_level + 2, ACCELEROMETER_NAME, true);
      left_chars = gyroscope_.to_string(left_chars, indent_level + 2, GYROSCOPE_NAME, false);
      left_chars = sensorLoggingRate_.to_string(left_chars, indent_level + 2, SENSORLOGGINGRATE_NAME, false);
  
      if( 0 == indent_level) 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n}");
      }
      else 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n%*s}", indent_level, " ");
      }

      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      return left_chars;
    }

#endif // End of MSG_TO_STRING

  private:


      Accelerometer accelerometer_;
      Gyroscope gyroscope_;
      SensorLoggingRate sensorLoggingRate_;

};

class LoadCell final: public ::EmbeddedProto::MessageInterface
{
  public:
    LoadCell() = default;
    LoadCell(const LoadCell& rhs )
    {
      set_mass(rhs.get_mass());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
    }

    LoadCell(const LoadCell&& rhs ) noexcept
    {
      set_mass(rhs.get_mass());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
    }

    ~LoadCell() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      MASS = 1,
      SENSORLOGGINGRATE = 2
    };

    LoadCell& operator=(const LoadCell& rhs)
    {
      set_mass(rhs.get_mass());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
      return *this;
    }

    LoadCell& operator=(const LoadCell&& rhs) noexcept
    {
      set_mass(rhs.get_mass());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
      return *this;
    }

    static constexpr char const* MASS_NAME = "mass";
    inline void clear_mass() { mass_.clear(); }
    inline void set_mass(const int32_t& value) { mass_ = value; }
    inline void set_mass(const int32_t&& value) { mass_ = value; }
    inline int32_t& mutable_mass() { return mass_.get(); }
    inline const int32_t& get_mass() const { return mass_.get(); }
    inline int32_t mass() const { return mass_.get(); }

    static constexpr char const* SENSORLOGGINGRATE_NAME = "sensorLoggingRate";
    inline void clear_sensorLoggingRate() { sensorLoggingRate_.clear(); }
    inline void set_sensorLoggingRate(const SensorLoggingRate& value) { sensorLoggingRate_ = value; }
    inline void set_sensorLoggingRate(const SensorLoggingRate&& value) { sensorLoggingRate_ = value; }
    inline SensorLoggingRate& mutable_sensorLoggingRate() { return sensorLoggingRate_; }
    inline const SensorLoggingRate& get_sensorLoggingRate() const { return sensorLoggingRate_; }
    inline const SensorLoggingRate& sensorLoggingRate() const { return sensorLoggingRate_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0 != mass_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = mass_.serialize_with_id(static_cast<uint32_t>(FieldNumber::MASS), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = sensorLoggingRate_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SENSORLOGGINGRATE), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::MASS:
            return_value = mass_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::SENSORLOGGINGRATE:
            return_value = sensorLoggingRate_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NOT_SET:
            return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
            break;

          default:
            return_value = skip_unknown_field(buffer, wire_type);
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_mass();
      clear_sensorLoggingRate();

    }

#ifndef DISABLE_FIELD_NUMBER_TO_NAME 

    static char const* field_number_to_name(const FieldNumber fieldNumber)
    {
      char const* name = nullptr;
      switch(fieldNumber)
      {
        case FieldNumber::MASS:
          name = MASS_NAME;
          break;
        case FieldNumber::SENSORLOGGINGRATE:
          name = SENSORLOGGINGRATE_NAME;
          break;
        default:
          name = "Invalid FieldNumber";
          break;
      }
      return name;
    }

#endif

#ifdef MSG_TO_STRING

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str) const
    {
      return this->to_string(str, 0, nullptr, true);
    }

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str, const uint32_t indent_level, char const* name, const bool first_field) const override
    {
      ::EmbeddedProto::string_view left_chars = str;
      int32_t n_chars_used = 0;

      if(!first_field)
      {
        // Add a comma behind the previous field.
        n_chars_used = snprintf(left_chars.data, left_chars.size, ",\n");
        if(0 < n_chars_used)
        {
          // Update the character pointer and characters left in the array.
          left_chars.data += n_chars_used;
          left_chars.size -= n_chars_used;
        }
      }

      if(nullptr != name)
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "\"%s\": {\n", name);
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s\"%s\": {\n", indent_level, " ", name);
        }
      }
      else
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "{\n");
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s{\n", indent_level, " ");
        }
      }
      
      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      left_chars = mass_.to_string(left_chars, indent_level + 2, MASS_NAME, true);
      left_chars = sensorLoggingRate_.to_string(left_chars, indent_level + 2, SENSORLOGGINGRATE_NAME, false);
  
      if( 0 == indent_level) 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n}");
      }
      else 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n%*s}", indent_level, " ");
      }

      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      return left_chars;
    }

#endif // End of MSG_TO_STRING

  private:


      EmbeddedProto::int32 mass_ = 0;
      SensorLoggingRate sensorLoggingRate_;

};

class PressureTansducer final: public ::EmbeddedProto::MessageInterface
{
  public:
    PressureTansducer() = default;
    PressureTansducer(const PressureTansducer& rhs )
    {
      set_pressureReading(rhs.get_pressureReading());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
    }

    PressureTansducer(const PressureTansducer&& rhs ) noexcept
    {
      set_pressureReading(rhs.get_pressureReading());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
    }

    ~PressureTansducer() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      PRESSUREREADING = 1,
      SENSORLOGGINGRATE = 2
    };

    PressureTansducer& operator=(const PressureTansducer& rhs)
    {
      set_pressureReading(rhs.get_pressureReading());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
      return *this;
    }

    PressureTansducer& operator=(const PressureTansducer&& rhs) noexcept
    {
      set_pressureReading(rhs.get_pressureReading());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
      return *this;
    }

    static constexpr char const* PRESSUREREADING_NAME = "pressureReading";
    inline void clear_pressureReading() { pressureReading_.clear(); }
    inline void set_pressureReading(const int32_t& value) { pressureReading_ = value; }
    inline void set_pressureReading(const int32_t&& value) { pressureReading_ = value; }
    inline int32_t& mutable_pressureReading() { return pressureReading_.get(); }
    inline const int32_t& get_pressureReading() const { return pressureReading_.get(); }
    inline int32_t pressureReading() const { return pressureReading_.get(); }

    static constexpr char const* SENSORLOGGINGRATE_NAME = "sensorLoggingRate";
    inline void clear_sensorLoggingRate() { sensorLoggingRate_.clear(); }
    inline void set_sensorLoggingRate(const SensorLoggingRate& value) { sensorLoggingRate_ = value; }
    inline void set_sensorLoggingRate(const SensorLoggingRate&& value) { sensorLoggingRate_ = value; }
    inline SensorLoggingRate& mutable_sensorLoggingRate() { return sensorLoggingRate_; }
    inline const SensorLoggingRate& get_sensorLoggingRate() const { return sensorLoggingRate_; }
    inline const SensorLoggingRate& sensorLoggingRate() const { return sensorLoggingRate_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0 != pressureReading_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = pressureReading_.serialize_with_id(static_cast<uint32_t>(FieldNumber::PRESSUREREADING), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = sensorLoggingRate_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SENSORLOGGINGRATE), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::PRESSUREREADING:
            return_value = pressureReading_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::SENSORLOGGINGRATE:
            return_value = sensorLoggingRate_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NOT_SET:
            return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
            break;

          default:
            return_value = skip_unknown_field(buffer, wire_type);
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_pressureReading();
      clear_sensorLoggingRate();

    }

#ifndef DISABLE_FIELD_NUMBER_TO_NAME 

    static char const* field_number_to_name(const FieldNumber fieldNumber)
    {
      char const* name = nullptr;
      switch(fieldNumber)
      {
        case FieldNumber::PRESSUREREADING:
          name = PRESSUREREADING_NAME;
          break;
        case FieldNumber::SENSORLOGGINGRATE:
          name = SENSORLOGGINGRATE_NAME;
          break;
        default:
          name = "Invalid FieldNumber";
          break;
      }
      return name;
    }

#endif

#ifdef MSG_TO_STRING

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str) const
    {
      return this->to_string(str, 0, nullptr, true);
    }

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str, const uint32_t indent_level, char const* name, const bool first_field) const override
    {
      ::EmbeddedProto::string_view left_chars = str;
      int32_t n_chars_used = 0;

      if(!first_field)
      {
        // Add a comma behind the previous field.
        n_chars_used = snprintf(left_chars.data, left_chars.size, ",\n");
        if(0 < n_chars_used)
        {
          // Update the character pointer and characters left in the array.
          left_chars.data += n_chars_used;
          left_chars.size -= n_chars_used;
        }
      }

      if(nullptr != name)
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "\"%s\": {\n", name);
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s\"%s\": {\n", indent_level, " ", name);
        }
      }
      else
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "{\n");
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s{\n", indent_level, " ");
        }
      }
      
      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      left_chars = pressureReading_.to_string(left_chars, indent_level + 2, PRESSUREREADING_NAME, true);
      left_chars = sensorLoggingRate_.to_string(left_chars, indent_level + 2, SENSORLOGGINGRATE_NAME, false);
  
      if( 0 == indent_level) 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n}");
      }
      else 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n%*s}", indent_level, " ");
      }

      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      return left_chars;
    }

#endif // End of MSG_TO_STRING

  private:


      EmbeddedProto::int32 pressureReading_ = 0;
      SensorLoggingRate sensorLoggingRate_;

};

class RelayStatus final: public ::EmbeddedProto::MessageInterface
{
  public:
    RelayStatus() = default;
    RelayStatus(const RelayStatus& rhs )
    {
      set_relayOn(rhs.get_relayOn());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
    }

    RelayStatus(const RelayStatus&& rhs ) noexcept
    {
      set_relayOn(rhs.get_relayOn());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
    }

    ~RelayStatus() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      RELAYON = 1,
      SENSORLOGGINGRATE = 2
    };

    RelayStatus& operator=(const RelayStatus& rhs)
    {
      set_relayOn(rhs.get_relayOn());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
      return *this;
    }

    RelayStatus& operator=(const RelayStatus&& rhs) noexcept
    {
      set_relayOn(rhs.get_relayOn());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
      return *this;
    }

    static constexpr char const* RELAYON_NAME = "relayOn";
    inline void clear_relayOn() { relayOn_.clear(); }
    inline void set_relayOn(const bool& value) { relayOn_ = value; }
    inline void set_relayOn(const bool&& value) { relayOn_ = value; }
    inline bool& mutable_relayOn() { return relayOn_.get(); }
    inline const bool& get_relayOn() const { return relayOn_.get(); }
    inline bool relayOn() const { return relayOn_.get(); }

    static constexpr char const* SENSORLOGGINGRATE_NAME = "sensorLoggingRate";
    inline void clear_sensorLoggingRate() { sensorLoggingRate_.clear(); }
    inline void set_sensorLoggingRate(const SensorLoggingRate& value) { sensorLoggingRate_ = value; }
    inline void set_sensorLoggingRate(const SensorLoggingRate&& value) { sensorLoggingRate_ = value; }
    inline SensorLoggingRate& mutable_sensorLoggingRate() { return sensorLoggingRate_; }
    inline const SensorLoggingRate& get_sensorLoggingRate() const { return sensorLoggingRate_; }
    inline const SensorLoggingRate& sensorLoggingRate() const { return sensorLoggingRate_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((false != relayOn_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = relayOn_.serialize_with_id(static_cast<uint32_t>(FieldNumber::RELAYON), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = sensorLoggingRate_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SENSORLOGGINGRATE), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::RELAYON:
            return_value = relayOn_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::SENSORLOGGINGRATE:
            return_value = sensorLoggingRate_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NOT_SET:
            return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
            break;

          default:
            return_value = skip_unknown_field(buffer, wire_type);
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_relayOn();
      clear_sensorLoggingRate();

    }

#ifndef DISABLE_FIELD_NUMBER_TO_NAME 

    static char const* field_number_to_name(const FieldNumber fieldNumber)
    {
      char const* name = nullptr;
      switch(fieldNumber)
      {
        case FieldNumber::RELAYON:
          name = RELAYON_NAME;
          break;
        case FieldNumber::SENSORLOGGINGRATE:
          name = SENSORLOGGINGRATE_NAME;
          break;
        default:
          name = "Invalid FieldNumber";
          break;
      }
      return name;
    }

#endif

#ifdef MSG_TO_STRING

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str) const
    {
      return this->to_string(str, 0, nullptr, true);
    }

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str, const uint32_t indent_level, char const* name, const bool first_field) const override
    {
      ::EmbeddedProto::string_view left_chars = str;
      int32_t n_chars_used = 0;

      if(!first_field)
      {
        // Add a comma behind the previous field.
        n_chars_used = snprintf(left_chars.data, left_chars.size, ",\n");
        if(0 < n_chars_used)
        {
          // Update the character pointer and characters left in the array.
          left_chars.data += n_chars_used;
          left_chars.size -= n_chars_used;
        }
      }

      if(nullptr != name)
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "\"%s\": {\n", name);
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s\"%s\": {\n", indent_level, " ", name);
        }
      }
      else
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "{\n");
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s{\n", indent_level, " ");
        }
      }
      
      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      left_chars = relayOn_.to_string(left_chars, indent_level + 2, RELAYON_NAME, true);
      left_chars = sensorLoggingRate_.to_string(left_chars, indent_level + 2, SENSORLOGGINGRATE_NAME, false);
  
      if( 0 == indent_level) 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n}");
      }
      else 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n%*s}", indent_level, " ");
      }

      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      return left_chars;
    }

#endif // End of MSG_TO_STRING

  private:


      EmbeddedProto::boolean relayOn_ = false;
      SensorLoggingRate sensorLoggingRate_;

};

class Thermocouple final: public ::EmbeddedProto::MessageInterface
{
  public:
    Thermocouple() = default;
    Thermocouple(const Thermocouple& rhs )
    {
      set_thermocoupleReading(rhs.get_thermocoupleReading());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
    }

    Thermocouple(const Thermocouple&& rhs ) noexcept
    {
      set_thermocoupleReading(rhs.get_thermocoupleReading());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
    }

    ~Thermocouple() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      THERMOCOUPLEREADING = 1,
      SENSORLOGGINGRATE = 2
    };

    Thermocouple& operator=(const Thermocouple& rhs)
    {
      set_thermocoupleReading(rhs.get_thermocoupleReading());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
      return *this;
    }

    Thermocouple& operator=(const Thermocouple&& rhs) noexcept
    {
      set_thermocoupleReading(rhs.get_thermocoupleReading());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
      return *this;
    }

    static constexpr char const* THERMOCOUPLEREADING_NAME = "thermocoupleReading";
    inline void clear_thermocoupleReading() { thermocoupleReading_.clear(); }
    inline void set_thermocoupleReading(const int32_t& value) { thermocoupleReading_ = value; }
    inline void set_thermocoupleReading(const int32_t&& value) { thermocoupleReading_ = value; }
    inline int32_t& mutable_thermocoupleReading() { return thermocoupleReading_.get(); }
    inline const int32_t& get_thermocoupleReading() const { return thermocoupleReading_.get(); }
    inline int32_t thermocoupleReading() const { return thermocoupleReading_.get(); }

    static constexpr char const* SENSORLOGGINGRATE_NAME = "sensorLoggingRate";
    inline void clear_sensorLoggingRate() { sensorLoggingRate_.clear(); }
    inline void set_sensorLoggingRate(const SensorLoggingRate& value) { sensorLoggingRate_ = value; }
    inline void set_sensorLoggingRate(const SensorLoggingRate&& value) { sensorLoggingRate_ = value; }
    inline SensorLoggingRate& mutable_sensorLoggingRate() { return sensorLoggingRate_; }
    inline const SensorLoggingRate& get_sensorLoggingRate() const { return sensorLoggingRate_; }
    inline const SensorLoggingRate& sensorLoggingRate() const { return sensorLoggingRate_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0 != thermocoupleReading_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = thermocoupleReading_.serialize_with_id(static_cast<uint32_t>(FieldNumber::THERMOCOUPLEREADING), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = sensorLoggingRate_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SENSORLOGGINGRATE), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::THERMOCOUPLEREADING:
            return_value = thermocoupleReading_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::SENSORLOGGINGRATE:
            return_value = sensorLoggingRate_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NOT_SET:
            return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
            break;

          default:
            return_value = skip_unknown_field(buffer, wire_type);
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_thermocoupleReading();
      clear_sensorLoggingRate();

    }

#ifndef DISABLE_FIELD_NUMBER_TO_NAME 

    static char const* field_number_to_name(const FieldNumber fieldNumber)
    {
      char const* name = nullptr;
      switch(fieldNumber)
      {
        case FieldNumber::THERMOCOUPLEREADING:
          name = THERMOCOUPLEREADING_NAME;
          break;
        case FieldNumber::SENSORLOGGINGRATE:
          name = SENSORLOGGINGRATE_NAME;
          break;
        default:
          name = "Invalid FieldNumber";
          break;
      }
      return name;
    }

#endif

#ifdef MSG_TO_STRING

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str) const
    {
      return this->to_string(str, 0, nullptr, true);
    }

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str, const uint32_t indent_level, char const* name, const bool first_field) const override
    {
      ::EmbeddedProto::string_view left_chars = str;
      int32_t n_chars_used = 0;

      if(!first_field)
      {
        // Add a comma behind the previous field.
        n_chars_used = snprintf(left_chars.data, left_chars.size, ",\n");
        if(0 < n_chars_used)
        {
          // Update the character pointer and characters left in the array.
          left_chars.data += n_chars_used;
          left_chars.size -= n_chars_used;
        }
      }

      if(nullptr != name)
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "\"%s\": {\n", name);
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s\"%s\": {\n", indent_level, " ", name);
        }
      }
      else
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "{\n");
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s{\n", indent_level, " ");
        }
      }
      
      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      left_chars = thermocoupleReading_.to_string(left_chars, indent_level + 2, THERMOCOUPLEREADING_NAME, true);
      left_chars = sensorLoggingRate_.to_string(left_chars, indent_level + 2, SENSORLOGGINGRATE_NAME, false);
  
      if( 0 == indent_level) 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n}");
      }
      else 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n%*s}", indent_level, " ");
      }

      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      return left_chars;
    }

#endif // End of MSG_TO_STRING

  private:


      EmbeddedProto::int32 thermocoupleReading_ = 0;
      SensorLoggingRate sensorLoggingRate_;

};

class ValveStatus final: public ::EmbeddedProto::MessageInterface
{
  public:
    ValveStatus() = default;
    ValveStatus(const ValveStatus& rhs )
    {
      set_valveOpen(rhs.get_valveOpen());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
    }

    ValveStatus(const ValveStatus&& rhs ) noexcept
    {
      set_valveOpen(rhs.get_valveOpen());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
    }

    ~ValveStatus() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      VALVEOPEN = 1,
      SENSORLOGGINGRATE = 2
    };

    ValveStatus& operator=(const ValveStatus& rhs)
    {
      set_valveOpen(rhs.get_valveOpen());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
      return *this;
    }

    ValveStatus& operator=(const ValveStatus&& rhs) noexcept
    {
      set_valveOpen(rhs.get_valveOpen());
      set_sensorLoggingRate(rhs.get_sensorLoggingRate());
      return *this;
    }

    static constexpr char const* VALVEOPEN_NAME = "valveOpen";
    inline void clear_valveOpen() { valveOpen_.clear(); }
    inline void set_valveOpen(const bool& value) { valveOpen_ = value; }
    inline void set_valveOpen(const bool&& value) { valveOpen_ = value; }
    inline bool& mutable_valveOpen() { return valveOpen_.get(); }
    inline const bool& get_valveOpen() const { return valveOpen_.get(); }
    inline bool valveOpen() const { return valveOpen_.get(); }

    static constexpr char const* SENSORLOGGINGRATE_NAME = "sensorLoggingRate";
    inline void clear_sensorLoggingRate() { sensorLoggingRate_.clear(); }
    inline void set_sensorLoggingRate(const SensorLoggingRate& value) { sensorLoggingRate_ = value; }
    inline void set_sensorLoggingRate(const SensorLoggingRate&& value) { sensorLoggingRate_ = value; }
    inline SensorLoggingRate& mutable_sensorLoggingRate() { return sensorLoggingRate_; }
    inline const SensorLoggingRate& get_sensorLoggingRate() const { return sensorLoggingRate_; }
    inline const SensorLoggingRate& sensorLoggingRate() const { return sensorLoggingRate_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((false != valveOpen_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = valveOpen_.serialize_with_id(static_cast<uint32_t>(FieldNumber::VALVEOPEN), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = sensorLoggingRate_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SENSORLOGGINGRATE), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::VALVEOPEN:
            return_value = valveOpen_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::SENSORLOGGINGRATE:
            return_value = sensorLoggingRate_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NOT_SET:
            return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
            break;

          default:
            return_value = skip_unknown_field(buffer, wire_type);
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_valveOpen();
      clear_sensorLoggingRate();

    }

#ifndef DISABLE_FIELD_NUMBER_TO_NAME 

    static char const* field_number_to_name(const FieldNumber fieldNumber)
    {
      char const* name = nullptr;
      switch(fieldNumber)
      {
        case FieldNumber::VALVEOPEN:
          name = VALVEOPEN_NAME;
          break;
        case FieldNumber::SENSORLOGGINGRATE:
          name = SENSORLOGGINGRATE_NAME;
          break;
        default:
          name = "Invalid FieldNumber";
          break;
      }
      return name;
    }

#endif

#ifdef MSG_TO_STRING

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str) const
    {
      return this->to_string(str, 0, nullptr, true);
    }

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str, const uint32_t indent_level, char const* name, const bool first_field) const override
    {
      ::EmbeddedProto::string_view left_chars = str;
      int32_t n_chars_used = 0;

      if(!first_field)
      {
        // Add a comma behind the previous field.
        n_chars_used = snprintf(left_chars.data, left_chars.size, ",\n");
        if(0 < n_chars_used)
        {
          // Update the character pointer and characters left in the array.
          left_chars.data += n_chars_used;
          left_chars.size -= n_chars_used;
        }
      }

      if(nullptr != name)
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "\"%s\": {\n", name);
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s\"%s\": {\n", indent_level, " ", name);
        }
      }
      else
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "{\n");
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s{\n", indent_level, " ");
        }
      }
      
      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      left_chars = valveOpen_.to_string(left_chars, indent_level + 2, VALVEOPEN_NAME, true);
      left_chars = sensorLoggingRate_.to_string(left_chars, indent_level + 2, SENSORLOGGINGRATE_NAME, false);
  
      if( 0 == indent_level) 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n}");
      }
      else 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n%*s}", indent_level, " ");
      }

      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      return left_chars;
    }

#endif // End of MSG_TO_STRING

  private:


      EmbeddedProto::boolean valveOpen_ = false;
      SensorLoggingRate sensorLoggingRate_;

};

class SensorData final: public ::EmbeddedProto::MessageInterface
{
  public:
    SensorData() = default;
    SensorData(const SensorData& rhs )
    {
      set_timestamp(rhs.get_timestamp());
      if(rhs.get_which_message() != which_message_)
      {
        // First delete the old object in the oneof.
        clear_message();
      }

      switch(rhs.get_which_message())
      {
        case FieldNumber::GPSMESSAGE:
          set_gpsMessage(rhs.get_gpsMessage());
          break;

        case FieldNumber::BAROMETERMESSAGE:
          set_barometerMessage(rhs.get_barometerMessage());
          break;

        case FieldNumber::IMUNINEAXISMESSAGE:
          set_imuNineAxisMessage(rhs.get_imuNineAxisMessage());
          break;

        case FieldNumber::IMUSIXAXISMESSAGE:
          set_imuSixAxisMessage(rhs.get_imuSixAxisMessage());
          break;

        case FieldNumber::BATTERYPACKMESSAGE:
          set_batteryPackMessage(rhs.get_batteryPackMessage());
          break;

        case FieldNumber::PRESSURETRANSDUCERMESSAGE:
          set_pressureTransducerMessage(rhs.get_pressureTransducerMessage());
          break;

        case FieldNumber::THERMOCOUPLEMESSAGE:
          set_thermocoupleMessage(rhs.get_thermocoupleMessage());
          break;

        case FieldNumber::LOADCELLMESSAGE:
          set_loadCellMessage(rhs.get_loadCellMessage());
          break;

        case FieldNumber::VALVESTATUSMESSAGE:
          set_valveStatusMessage(rhs.get_valveStatusMessage());
          break;

        case FieldNumber::RELAYSTATUSMESSAGE:
          set_relayStatusMessage(rhs.get_relayStatusMessage());
          break;

        default:
          break;
      }

    }

    SensorData(const SensorData&& rhs ) noexcept
    {
      set_timestamp(rhs.get_timestamp());
      if(rhs.get_which_message() != which_message_)
      {
        // First delete the old object in the oneof.
        clear_message();
      }

      switch(rhs.get_which_message())
      {
        case FieldNumber::GPSMESSAGE:
          set_gpsMessage(rhs.get_gpsMessage());
          break;

        case FieldNumber::BAROMETERMESSAGE:
          set_barometerMessage(rhs.get_barometerMessage());
          break;

        case FieldNumber::IMUNINEAXISMESSAGE:
          set_imuNineAxisMessage(rhs.get_imuNineAxisMessage());
          break;

        case FieldNumber::IMUSIXAXISMESSAGE:
          set_imuSixAxisMessage(rhs.get_imuSixAxisMessage());
          break;

        case FieldNumber::BATTERYPACKMESSAGE:
          set_batteryPackMessage(rhs.get_batteryPackMessage());
          break;

        case FieldNumber::PRESSURETRANSDUCERMESSAGE:
          set_pressureTransducerMessage(rhs.get_pressureTransducerMessage());
          break;

        case FieldNumber::THERMOCOUPLEMESSAGE:
          set_thermocoupleMessage(rhs.get_thermocoupleMessage());
          break;

        case FieldNumber::LOADCELLMESSAGE:
          set_loadCellMessage(rhs.get_loadCellMessage());
          break;

        case FieldNumber::VALVESTATUSMESSAGE:
          set_valveStatusMessage(rhs.get_valveStatusMessage());
          break;

        case FieldNumber::RELAYSTATUSMESSAGE:
          set_relayStatusMessage(rhs.get_relayStatusMessage());
          break;

        default:
          break;
      }

    }

    ~SensorData() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      TIMESTAMP = 1,
      GPSMESSAGE = 2,
      BAROMETERMESSAGE = 3,
      IMUNINEAXISMESSAGE = 4,
      IMUSIXAXISMESSAGE = 5,
      BATTERYPACKMESSAGE = 6,
      PRESSURETRANSDUCERMESSAGE = 7,
      THERMOCOUPLEMESSAGE = 8,
      LOADCELLMESSAGE = 9,
      VALVESTATUSMESSAGE = 10,
      RELAYSTATUSMESSAGE = 11
    };

    SensorData& operator=(const SensorData& rhs)
    {
      set_timestamp(rhs.get_timestamp());
      if(rhs.get_which_message() != which_message_)
      {
        // First delete the old object in the oneof.
        clear_message();
      }

      switch(rhs.get_which_message())
      {
        case FieldNumber::GPSMESSAGE:
          set_gpsMessage(rhs.get_gpsMessage());
          break;

        case FieldNumber::BAROMETERMESSAGE:
          set_barometerMessage(rhs.get_barometerMessage());
          break;

        case FieldNumber::IMUNINEAXISMESSAGE:
          set_imuNineAxisMessage(rhs.get_imuNineAxisMessage());
          break;

        case FieldNumber::IMUSIXAXISMESSAGE:
          set_imuSixAxisMessage(rhs.get_imuSixAxisMessage());
          break;

        case FieldNumber::BATTERYPACKMESSAGE:
          set_batteryPackMessage(rhs.get_batteryPackMessage());
          break;

        case FieldNumber::PRESSURETRANSDUCERMESSAGE:
          set_pressureTransducerMessage(rhs.get_pressureTransducerMessage());
          break;

        case FieldNumber::THERMOCOUPLEMESSAGE:
          set_thermocoupleMessage(rhs.get_thermocoupleMessage());
          break;

        case FieldNumber::LOADCELLMESSAGE:
          set_loadCellMessage(rhs.get_loadCellMessage());
          break;

        case FieldNumber::VALVESTATUSMESSAGE:
          set_valveStatusMessage(rhs.get_valveStatusMessage());
          break;

        case FieldNumber::RELAYSTATUSMESSAGE:
          set_relayStatusMessage(rhs.get_relayStatusMessage());
          break;

        default:
          break;
      }

      return *this;
    }

    SensorData& operator=(const SensorData&& rhs) noexcept
    {
      set_timestamp(rhs.get_timestamp());
      if(rhs.get_which_message() != which_message_)
      {
        // First delete the old object in the oneof.
        clear_message();
      }

      switch(rhs.get_which_message())
      {
        case FieldNumber::GPSMESSAGE:
          set_gpsMessage(rhs.get_gpsMessage());
          break;

        case FieldNumber::BAROMETERMESSAGE:
          set_barometerMessage(rhs.get_barometerMessage());
          break;

        case FieldNumber::IMUNINEAXISMESSAGE:
          set_imuNineAxisMessage(rhs.get_imuNineAxisMessage());
          break;

        case FieldNumber::IMUSIXAXISMESSAGE:
          set_imuSixAxisMessage(rhs.get_imuSixAxisMessage());
          break;

        case FieldNumber::BATTERYPACKMESSAGE:
          set_batteryPackMessage(rhs.get_batteryPackMessage());
          break;

        case FieldNumber::PRESSURETRANSDUCERMESSAGE:
          set_pressureTransducerMessage(rhs.get_pressureTransducerMessage());
          break;

        case FieldNumber::THERMOCOUPLEMESSAGE:
          set_thermocoupleMessage(rhs.get_thermocoupleMessage());
          break;

        case FieldNumber::LOADCELLMESSAGE:
          set_loadCellMessage(rhs.get_loadCellMessage());
          break;

        case FieldNumber::VALVESTATUSMESSAGE:
          set_valveStatusMessage(rhs.get_valveStatusMessage());
          break;

        case FieldNumber::RELAYSTATUSMESSAGE:
          set_relayStatusMessage(rhs.get_relayStatusMessage());
          break;

        default:
          break;
      }

      return *this;
    }

    static constexpr char const* TIMESTAMP_NAME = "timestamp";
    inline void clear_timestamp() { timestamp_.clear(); }
    inline void set_timestamp(const uint32_t& value) { timestamp_ = value; }
    inline void set_timestamp(const uint32_t&& value) { timestamp_ = value; }
    inline uint32_t& mutable_timestamp() { return timestamp_.get(); }
    inline const uint32_t& get_timestamp() const { return timestamp_.get(); }
    inline uint32_t timestamp() const { return timestamp_.get(); }

    FieldNumber get_which_message() const { return which_message_; }

    static constexpr char const* GPSMESSAGE_NAME = "gpsMessage";
    inline bool has_gpsMessage() const
    {
      return FieldNumber::GPSMESSAGE == which_message_;
    }
    inline void clear_gpsMessage()
    {
      if(FieldNumber::GPSMESSAGE == which_message_)
      {
        which_message_ = FieldNumber::NOT_SET;
        message_.gpsMessage_.~Gps();
      }
    }
    inline void set_gpsMessage(const Gps& value)
    {
      if(FieldNumber::GPSMESSAGE != which_message_)
      {
        init_message(FieldNumber::GPSMESSAGE);
      }
      message_.gpsMessage_ = value;
    }
    inline void set_gpsMessage(const Gps&& value)
    {
      if(FieldNumber::GPSMESSAGE != which_message_)
      {
        init_message(FieldNumber::GPSMESSAGE);
      }
      message_.gpsMessage_ = value;
    }
    inline Gps& mutable_gpsMessage()
    {
      if(FieldNumber::GPSMESSAGE != which_message_)
      {
        init_message(FieldNumber::GPSMESSAGE);
      }
      return message_.gpsMessage_;
    }
    inline const Gps& get_gpsMessage() const { return message_.gpsMessage_; }
    inline const Gps& gpsMessage() const { return message_.gpsMessage_; }

    static constexpr char const* BAROMETERMESSAGE_NAME = "barometerMessage";
    inline bool has_barometerMessage() const
    {
      return FieldNumber::BAROMETERMESSAGE == which_message_;
    }
    inline void clear_barometerMessage()
    {
      if(FieldNumber::BAROMETERMESSAGE == which_message_)
      {
        which_message_ = FieldNumber::NOT_SET;
        message_.barometerMessage_.~Barometer();
      }
    }
    inline void set_barometerMessage(const Barometer& value)
    {
      if(FieldNumber::BAROMETERMESSAGE != which_message_)
      {
        init_message(FieldNumber::BAROMETERMESSAGE);
      }
      message_.barometerMessage_ = value;
    }
    inline void set_barometerMessage(const Barometer&& value)
    {
      if(FieldNumber::BAROMETERMESSAGE != which_message_)
      {
        init_message(FieldNumber::BAROMETERMESSAGE);
      }
      message_.barometerMessage_ = value;
    }
    inline Barometer& mutable_barometerMessage()
    {
      if(FieldNumber::BAROMETERMESSAGE != which_message_)
      {
        init_message(FieldNumber::BAROMETERMESSAGE);
      }
      return message_.barometerMessage_;
    }
    inline const Barometer& get_barometerMessage() const { return message_.barometerMessage_; }
    inline const Barometer& barometerMessage() const { return message_.barometerMessage_; }

    static constexpr char const* IMUNINEAXISMESSAGE_NAME = "imuNineAxisMessage";
    inline bool has_imuNineAxisMessage() const
    {
      return FieldNumber::IMUNINEAXISMESSAGE == which_message_;
    }
    inline void clear_imuNineAxisMessage()
    {
      if(FieldNumber::IMUNINEAXISMESSAGE == which_message_)
      {
        which_message_ = FieldNumber::NOT_SET;
        message_.imuNineAxisMessage_.~ImuNineAxis();
      }
    }
    inline void set_imuNineAxisMessage(const ImuNineAxis& value)
    {
      if(FieldNumber::IMUNINEAXISMESSAGE != which_message_)
      {
        init_message(FieldNumber::IMUNINEAXISMESSAGE);
      }
      message_.imuNineAxisMessage_ = value;
    }
    inline void set_imuNineAxisMessage(const ImuNineAxis&& value)
    {
      if(FieldNumber::IMUNINEAXISMESSAGE != which_message_)
      {
        init_message(FieldNumber::IMUNINEAXISMESSAGE);
      }
      message_.imuNineAxisMessage_ = value;
    }
    inline ImuNineAxis& mutable_imuNineAxisMessage()
    {
      if(FieldNumber::IMUNINEAXISMESSAGE != which_message_)
      {
        init_message(FieldNumber::IMUNINEAXISMESSAGE);
      }
      return message_.imuNineAxisMessage_;
    }
    inline const ImuNineAxis& get_imuNineAxisMessage() const { return message_.imuNineAxisMessage_; }
    inline const ImuNineAxis& imuNineAxisMessage() const { return message_.imuNineAxisMessage_; }

    static constexpr char const* IMUSIXAXISMESSAGE_NAME = "imuSixAxisMessage";
    inline bool has_imuSixAxisMessage() const
    {
      return FieldNumber::IMUSIXAXISMESSAGE == which_message_;
    }
    inline void clear_imuSixAxisMessage()
    {
      if(FieldNumber::IMUSIXAXISMESSAGE == which_message_)
      {
        which_message_ = FieldNumber::NOT_SET;
        message_.imuSixAxisMessage_.~ImuSixAxis();
      }
    }
    inline void set_imuSixAxisMessage(const ImuSixAxis& value)
    {
      if(FieldNumber::IMUSIXAXISMESSAGE != which_message_)
      {
        init_message(FieldNumber::IMUSIXAXISMESSAGE);
      }
      message_.imuSixAxisMessage_ = value;
    }
    inline void set_imuSixAxisMessage(const ImuSixAxis&& value)
    {
      if(FieldNumber::IMUSIXAXISMESSAGE != which_message_)
      {
        init_message(FieldNumber::IMUSIXAXISMESSAGE);
      }
      message_.imuSixAxisMessage_ = value;
    }
    inline ImuSixAxis& mutable_imuSixAxisMessage()
    {
      if(FieldNumber::IMUSIXAXISMESSAGE != which_message_)
      {
        init_message(FieldNumber::IMUSIXAXISMESSAGE);
      }
      return message_.imuSixAxisMessage_;
    }
    inline const ImuSixAxis& get_imuSixAxisMessage() const { return message_.imuSixAxisMessage_; }
    inline const ImuSixAxis& imuSixAxisMessage() const { return message_.imuSixAxisMessage_; }

    static constexpr char const* BATTERYPACKMESSAGE_NAME = "batteryPackMessage";
    inline bool has_batteryPackMessage() const
    {
      return FieldNumber::BATTERYPACKMESSAGE == which_message_;
    }
    inline void clear_batteryPackMessage()
    {
      if(FieldNumber::BATTERYPACKMESSAGE == which_message_)
      {
        which_message_ = FieldNumber::NOT_SET;
        message_.batteryPackMessage_.~BatteryPack();
      }
    }
    inline void set_batteryPackMessage(const BatteryPack& value)
    {
      if(FieldNumber::BATTERYPACKMESSAGE != which_message_)
      {
        init_message(FieldNumber::BATTERYPACKMESSAGE);
      }
      message_.batteryPackMessage_ = value;
    }
    inline void set_batteryPackMessage(const BatteryPack&& value)
    {
      if(FieldNumber::BATTERYPACKMESSAGE != which_message_)
      {
        init_message(FieldNumber::BATTERYPACKMESSAGE);
      }
      message_.batteryPackMessage_ = value;
    }
    inline BatteryPack& mutable_batteryPackMessage()
    {
      if(FieldNumber::BATTERYPACKMESSAGE != which_message_)
      {
        init_message(FieldNumber::BATTERYPACKMESSAGE);
      }
      return message_.batteryPackMessage_;
    }
    inline const BatteryPack& get_batteryPackMessage() const { return message_.batteryPackMessage_; }
    inline const BatteryPack& batteryPackMessage() const { return message_.batteryPackMessage_; }

    static constexpr char const* PRESSURETRANSDUCERMESSAGE_NAME = "pressureTransducerMessage";
    inline bool has_pressureTransducerMessage() const
    {
      return FieldNumber::PRESSURETRANSDUCERMESSAGE == which_message_;
    }
    inline void clear_pressureTransducerMessage()
    {
      if(FieldNumber::PRESSURETRANSDUCERMESSAGE == which_message_)
      {
        which_message_ = FieldNumber::NOT_SET;
        message_.pressureTransducerMessage_.~PressureTansducer();
      }
    }
    inline void set_pressureTransducerMessage(const PressureTansducer& value)
    {
      if(FieldNumber::PRESSURETRANSDUCERMESSAGE != which_message_)
      {
        init_message(FieldNumber::PRESSURETRANSDUCERMESSAGE);
      }
      message_.pressureTransducerMessage_ = value;
    }
    inline void set_pressureTransducerMessage(const PressureTansducer&& value)
    {
      if(FieldNumber::PRESSURETRANSDUCERMESSAGE != which_message_)
      {
        init_message(FieldNumber::PRESSURETRANSDUCERMESSAGE);
      }
      message_.pressureTransducerMessage_ = value;
    }
    inline PressureTansducer& mutable_pressureTransducerMessage()
    {
      if(FieldNumber::PRESSURETRANSDUCERMESSAGE != which_message_)
      {
        init_message(FieldNumber::PRESSURETRANSDUCERMESSAGE);
      }
      return message_.pressureTransducerMessage_;
    }
    inline const PressureTansducer& get_pressureTransducerMessage() const { return message_.pressureTransducerMessage_; }
    inline const PressureTansducer& pressureTransducerMessage() const { return message_.pressureTransducerMessage_; }

    static constexpr char const* THERMOCOUPLEMESSAGE_NAME = "thermocoupleMessage";
    inline bool has_thermocoupleMessage() const
    {
      return FieldNumber::THERMOCOUPLEMESSAGE == which_message_;
    }
    inline void clear_thermocoupleMessage()
    {
      if(FieldNumber::THERMOCOUPLEMESSAGE == which_message_)
      {
        which_message_ = FieldNumber::NOT_SET;
        message_.thermocoupleMessage_.~Thermocouple();
      }
    }
    inline void set_thermocoupleMessage(const Thermocouple& value)
    {
      if(FieldNumber::THERMOCOUPLEMESSAGE != which_message_)
      {
        init_message(FieldNumber::THERMOCOUPLEMESSAGE);
      }
      message_.thermocoupleMessage_ = value;
    }
    inline void set_thermocoupleMessage(const Thermocouple&& value)
    {
      if(FieldNumber::THERMOCOUPLEMESSAGE != which_message_)
      {
        init_message(FieldNumber::THERMOCOUPLEMESSAGE);
      }
      message_.thermocoupleMessage_ = value;
    }
    inline Thermocouple& mutable_thermocoupleMessage()
    {
      if(FieldNumber::THERMOCOUPLEMESSAGE != which_message_)
      {
        init_message(FieldNumber::THERMOCOUPLEMESSAGE);
      }
      return message_.thermocoupleMessage_;
    }
    inline const Thermocouple& get_thermocoupleMessage() const { return message_.thermocoupleMessage_; }
    inline const Thermocouple& thermocoupleMessage() const { return message_.thermocoupleMessage_; }

    static constexpr char const* LOADCELLMESSAGE_NAME = "loadCellMessage";
    inline bool has_loadCellMessage() const
    {
      return FieldNumber::LOADCELLMESSAGE == which_message_;
    }
    inline void clear_loadCellMessage()
    {
      if(FieldNumber::LOADCELLMESSAGE == which_message_)
      {
        which_message_ = FieldNumber::NOT_SET;
        message_.loadCellMessage_.~LoadCell();
      }
    }
    inline void set_loadCellMessage(const LoadCell& value)
    {
      if(FieldNumber::LOADCELLMESSAGE != which_message_)
      {
        init_message(FieldNumber::LOADCELLMESSAGE);
      }
      message_.loadCellMessage_ = value;
    }
    inline void set_loadCellMessage(const LoadCell&& value)
    {
      if(FieldNumber::LOADCELLMESSAGE != which_message_)
      {
        init_message(FieldNumber::LOADCELLMESSAGE);
      }
      message_.loadCellMessage_ = value;
    }
    inline LoadCell& mutable_loadCellMessage()
    {
      if(FieldNumber::LOADCELLMESSAGE != which_message_)
      {
        init_message(FieldNumber::LOADCELLMESSAGE);
      }
      return message_.loadCellMessage_;
    }
    inline const LoadCell& get_loadCellMessage() const { return message_.loadCellMessage_; }
    inline const LoadCell& loadCellMessage() const { return message_.loadCellMessage_; }

    static constexpr char const* VALVESTATUSMESSAGE_NAME = "valveStatusMessage";
    inline bool has_valveStatusMessage() const
    {
      return FieldNumber::VALVESTATUSMESSAGE == which_message_;
    }
    inline void clear_valveStatusMessage()
    {
      if(FieldNumber::VALVESTATUSMESSAGE == which_message_)
      {
        which_message_ = FieldNumber::NOT_SET;
        message_.valveStatusMessage_.~ValveStatus();
      }
    }
    inline void set_valveStatusMessage(const ValveStatus& value)
    {
      if(FieldNumber::VALVESTATUSMESSAGE != which_message_)
      {
        init_message(FieldNumber::VALVESTATUSMESSAGE);
      }
      message_.valveStatusMessage_ = value;
    }
    inline void set_valveStatusMessage(const ValveStatus&& value)
    {
      if(FieldNumber::VALVESTATUSMESSAGE != which_message_)
      {
        init_message(FieldNumber::VALVESTATUSMESSAGE);
      }
      message_.valveStatusMessage_ = value;
    }
    inline ValveStatus& mutable_valveStatusMessage()
    {
      if(FieldNumber::VALVESTATUSMESSAGE != which_message_)
      {
        init_message(FieldNumber::VALVESTATUSMESSAGE);
      }
      return message_.valveStatusMessage_;
    }
    inline const ValveStatus& get_valveStatusMessage() const { return message_.valveStatusMessage_; }
    inline const ValveStatus& valveStatusMessage() const { return message_.valveStatusMessage_; }

    static constexpr char const* RELAYSTATUSMESSAGE_NAME = "relayStatusMessage";
    inline bool has_relayStatusMessage() const
    {
      return FieldNumber::RELAYSTATUSMESSAGE == which_message_;
    }
    inline void clear_relayStatusMessage()
    {
      if(FieldNumber::RELAYSTATUSMESSAGE == which_message_)
      {
        which_message_ = FieldNumber::NOT_SET;
        message_.relayStatusMessage_.~RelayStatus();
      }
    }
    inline void set_relayStatusMessage(const RelayStatus& value)
    {
      if(FieldNumber::RELAYSTATUSMESSAGE != which_message_)
      {
        init_message(FieldNumber::RELAYSTATUSMESSAGE);
      }
      message_.relayStatusMessage_ = value;
    }
    inline void set_relayStatusMessage(const RelayStatus&& value)
    {
      if(FieldNumber::RELAYSTATUSMESSAGE != which_message_)
      {
        init_message(FieldNumber::RELAYSTATUSMESSAGE);
      }
      message_.relayStatusMessage_ = value;
    }
    inline RelayStatus& mutable_relayStatusMessage()
    {
      if(FieldNumber::RELAYSTATUSMESSAGE != which_message_)
      {
        init_message(FieldNumber::RELAYSTATUSMESSAGE);
      }
      return message_.relayStatusMessage_;
    }
    inline const RelayStatus& get_relayStatusMessage() const { return message_.relayStatusMessage_; }
    inline const RelayStatus& relayStatusMessage() const { return message_.relayStatusMessage_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != timestamp_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = timestamp_.serialize_with_id(static_cast<uint32_t>(FieldNumber::TIMESTAMP), buffer, false);
      }

      switch(which_message_)
      {
        case FieldNumber::GPSMESSAGE:
          if(has_gpsMessage() && (::EmbeddedProto::Error::NO_ERRORS == return_value))
          {
            return_value = message_.gpsMessage_.serialize_with_id(static_cast<uint32_t>(FieldNumber::GPSMESSAGE), buffer, true);
          }
          break;

        case FieldNumber::BAROMETERMESSAGE:
          if(has_barometerMessage() && (::EmbeddedProto::Error::NO_ERRORS == return_value))
          {
            return_value = message_.barometerMessage_.serialize_with_id(static_cast<uint32_t>(FieldNumber::BAROMETERMESSAGE), buffer, true);
          }
          break;

        case FieldNumber::IMUNINEAXISMESSAGE:
          if(has_imuNineAxisMessage() && (::EmbeddedProto::Error::NO_ERRORS == return_value))
          {
            return_value = message_.imuNineAxisMessage_.serialize_with_id(static_cast<uint32_t>(FieldNumber::IMUNINEAXISMESSAGE), buffer, true);
          }
          break;

        case FieldNumber::IMUSIXAXISMESSAGE:
          if(has_imuSixAxisMessage() && (::EmbeddedProto::Error::NO_ERRORS == return_value))
          {
            return_value = message_.imuSixAxisMessage_.serialize_with_id(static_cast<uint32_t>(FieldNumber::IMUSIXAXISMESSAGE), buffer, true);
          }
          break;

        case FieldNumber::BATTERYPACKMESSAGE:
          if(has_batteryPackMessage() && (::EmbeddedProto::Error::NO_ERRORS == return_value))
          {
            return_value = message_.batteryPackMessage_.serialize_with_id(static_cast<uint32_t>(FieldNumber::BATTERYPACKMESSAGE), buffer, true);
          }
          break;

        case FieldNumber::PRESSURETRANSDUCERMESSAGE:
          if(has_pressureTransducerMessage() && (::EmbeddedProto::Error::NO_ERRORS == return_value))
          {
            return_value = message_.pressureTransducerMessage_.serialize_with_id(static_cast<uint32_t>(FieldNumber::PRESSURETRANSDUCERMESSAGE), buffer, true);
          }
          break;

        case FieldNumber::THERMOCOUPLEMESSAGE:
          if(has_thermocoupleMessage() && (::EmbeddedProto::Error::NO_ERRORS == return_value))
          {
            return_value = message_.thermocoupleMessage_.serialize_with_id(static_cast<uint32_t>(FieldNumber::THERMOCOUPLEMESSAGE), buffer, true);
          }
          break;

        case FieldNumber::LOADCELLMESSAGE:
          if(has_loadCellMessage() && (::EmbeddedProto::Error::NO_ERRORS == return_value))
          {
            return_value = message_.loadCellMessage_.serialize_with_id(static_cast<uint32_t>(FieldNumber::LOADCELLMESSAGE), buffer, true);
          }
          break;

        case FieldNumber::VALVESTATUSMESSAGE:
          if(has_valveStatusMessage() && (::EmbeddedProto::Error::NO_ERRORS == return_value))
          {
            return_value = message_.valveStatusMessage_.serialize_with_id(static_cast<uint32_t>(FieldNumber::VALVESTATUSMESSAGE), buffer, true);
          }
          break;

        case FieldNumber::RELAYSTATUSMESSAGE:
          if(has_relayStatusMessage() && (::EmbeddedProto::Error::NO_ERRORS == return_value))
          {
            return_value = message_.relayStatusMessage_.serialize_with_id(static_cast<uint32_t>(FieldNumber::RELAYSTATUSMESSAGE), buffer, true);
          }
          break;

        default:
          break;
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::TIMESTAMP:
            return_value = timestamp_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::GPSMESSAGE:
          case FieldNumber::BAROMETERMESSAGE:
          case FieldNumber::IMUNINEAXISMESSAGE:
          case FieldNumber::IMUSIXAXISMESSAGE:
          case FieldNumber::BATTERYPACKMESSAGE:
          case FieldNumber::PRESSURETRANSDUCERMESSAGE:
          case FieldNumber::THERMOCOUPLEMESSAGE:
          case FieldNumber::LOADCELLMESSAGE:
          case FieldNumber::VALVESTATUSMESSAGE:
          case FieldNumber::RELAYSTATUSMESSAGE:
            return_value = deserialize_message(id_tag, buffer, wire_type);
            break;

          case FieldNumber::NOT_SET:
            return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
            break;

          default:
            return_value = skip_unknown_field(buffer, wire_type);
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_timestamp();
      clear_message();

    }

#ifndef DISABLE_FIELD_NUMBER_TO_NAME 

    static char const* field_number_to_name(const FieldNumber fieldNumber)
    {
      char const* name = nullptr;
      switch(fieldNumber)
      {
        case FieldNumber::TIMESTAMP:
          name = TIMESTAMP_NAME;
          break;
        case FieldNumber::GPSMESSAGE:
          name = GPSMESSAGE_NAME;
          break;
        case FieldNumber::BAROMETERMESSAGE:
          name = BAROMETERMESSAGE_NAME;
          break;
        case FieldNumber::IMUNINEAXISMESSAGE:
          name = IMUNINEAXISMESSAGE_NAME;
          break;
        case FieldNumber::IMUSIXAXISMESSAGE:
          name = IMUSIXAXISMESSAGE_NAME;
          break;
        case FieldNumber::BATTERYPACKMESSAGE:
          name = BATTERYPACKMESSAGE_NAME;
          break;
        case FieldNumber::PRESSURETRANSDUCERMESSAGE:
          name = PRESSURETRANSDUCERMESSAGE_NAME;
          break;
        case FieldNumber::THERMOCOUPLEMESSAGE:
          name = THERMOCOUPLEMESSAGE_NAME;
          break;
        case FieldNumber::LOADCELLMESSAGE:
          name = LOADCELLMESSAGE_NAME;
          break;
        case FieldNumber::VALVESTATUSMESSAGE:
          name = VALVESTATUSMESSAGE_NAME;
          break;
        case FieldNumber::RELAYSTATUSMESSAGE:
          name = RELAYSTATUSMESSAGE_NAME;
          break;
        default:
          name = "Invalid FieldNumber";
          break;
      }
      return name;
    }

#endif

#ifdef MSG_TO_STRING

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str) const
    {
      return this->to_string(str, 0, nullptr, true);
    }

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str, const uint32_t indent_level, char const* name, const bool first_field) const override
    {
      ::EmbeddedProto::string_view left_chars = str;
      int32_t n_chars_used = 0;

      if(!first_field)
      {
        // Add a comma behind the previous field.
        n_chars_used = snprintf(left_chars.data, left_chars.size, ",\n");
        if(0 < n_chars_used)
        {
          // Update the character pointer and characters left in the array.
          left_chars.data += n_chars_used;
          left_chars.size -= n_chars_used;
        }
      }

      if(nullptr != name)
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "\"%s\": {\n", name);
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s\"%s\": {\n", indent_level, " ", name);
        }
      }
      else
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "{\n");
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s{\n", indent_level, " ");
        }
      }
      
      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      left_chars = timestamp_.to_string(left_chars, indent_level + 2, TIMESTAMP_NAME, true);
      left_chars = to_string_message(left_chars, indent_level + 2, false);
  
      if( 0 == indent_level) 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n}");
      }
      else 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n%*s}", indent_level, " ");
      }

      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      return left_chars;
    }

#endif // End of MSG_TO_STRING

  private:


      EmbeddedProto::uint32 timestamp_ = 0U;

      FieldNumber which_message_ = FieldNumber::NOT_SET;
      union message
      {
        message() {}
        ~message() {}
        Gps gpsMessage_;
        Barometer barometerMessage_;
        ImuNineAxis imuNineAxisMessage_;
        ImuSixAxis imuSixAxisMessage_;
        BatteryPack batteryPackMessage_;
        PressureTansducer pressureTransducerMessage_;
        Thermocouple thermocoupleMessage_;
        LoadCell loadCellMessage_;
        ValveStatus valveStatusMessage_;
        RelayStatus relayStatusMessage_;
      };
      message message_;

      void init_message(const FieldNumber field_id)
      {
        if(FieldNumber::NOT_SET != which_message_)
        {
          // First delete the old object in the oneof.
          clear_message();
        }

        // C++11 unions only support nontrivial members when you explicitly call the placement new statement.
        switch(field_id)
        {
          case FieldNumber::GPSMESSAGE:
            new(&message_.gpsMessage_) Gps;
            break;

          case FieldNumber::BAROMETERMESSAGE:
            new(&message_.barometerMessage_) Barometer;
            break;

          case FieldNumber::IMUNINEAXISMESSAGE:
            new(&message_.imuNineAxisMessage_) ImuNineAxis;
            break;

          case FieldNumber::IMUSIXAXISMESSAGE:
            new(&message_.imuSixAxisMessage_) ImuSixAxis;
            break;

          case FieldNumber::BATTERYPACKMESSAGE:
            new(&message_.batteryPackMessage_) BatteryPack;
            break;

          case FieldNumber::PRESSURETRANSDUCERMESSAGE:
            new(&message_.pressureTransducerMessage_) PressureTansducer;
            break;

          case FieldNumber::THERMOCOUPLEMESSAGE:
            new(&message_.thermocoupleMessage_) Thermocouple;
            break;

          case FieldNumber::LOADCELLMESSAGE:
            new(&message_.loadCellMessage_) LoadCell;
            break;

          case FieldNumber::VALVESTATUSMESSAGE:
            new(&message_.valveStatusMessage_) ValveStatus;
            break;

          case FieldNumber::RELAYSTATUSMESSAGE:
            new(&message_.relayStatusMessage_) RelayStatus;
            break;

          default:
            break;
         }

         which_message_ = field_id;
      }

      void clear_message()
      {
        switch(which_message_)
        {
          case FieldNumber::GPSMESSAGE:
            ::EmbeddedProto::destroy_at(&message_.gpsMessage_);
            break;
          case FieldNumber::BAROMETERMESSAGE:
            ::EmbeddedProto::destroy_at(&message_.barometerMessage_);
            break;
          case FieldNumber::IMUNINEAXISMESSAGE:
            ::EmbeddedProto::destroy_at(&message_.imuNineAxisMessage_);
            break;
          case FieldNumber::IMUSIXAXISMESSAGE:
            ::EmbeddedProto::destroy_at(&message_.imuSixAxisMessage_);
            break;
          case FieldNumber::BATTERYPACKMESSAGE:
            ::EmbeddedProto::destroy_at(&message_.batteryPackMessage_);
            break;
          case FieldNumber::PRESSURETRANSDUCERMESSAGE:
            ::EmbeddedProto::destroy_at(&message_.pressureTransducerMessage_);
            break;
          case FieldNumber::THERMOCOUPLEMESSAGE:
            ::EmbeddedProto::destroy_at(&message_.thermocoupleMessage_);
            break;
          case FieldNumber::LOADCELLMESSAGE:
            ::EmbeddedProto::destroy_at(&message_.loadCellMessage_);
            break;
          case FieldNumber::VALVESTATUSMESSAGE:
            ::EmbeddedProto::destroy_at(&message_.valveStatusMessage_);
            break;
          case FieldNumber::RELAYSTATUSMESSAGE:
            ::EmbeddedProto::destroy_at(&message_.relayStatusMessage_);
            break;
          default:
            break;
        }
        which_message_ = FieldNumber::NOT_SET;
      }

      ::EmbeddedProto::Error deserialize_message(const FieldNumber field_id, 
                                    ::EmbeddedProto::ReadBufferInterface& buffer,
                                    const ::EmbeddedProto::WireFormatter::WireType wire_type)
      {
        ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
        
        if(field_id != which_message_)
        {
          init_message(field_id);
        }

        switch(which_message_)
        {
          case FieldNumber::GPSMESSAGE:
            return_value = message_.gpsMessage_.deserialize_check_type(buffer, wire_type);
            break;
          case FieldNumber::BAROMETERMESSAGE:
            return_value = message_.barometerMessage_.deserialize_check_type(buffer, wire_type);
            break;
          case FieldNumber::IMUNINEAXISMESSAGE:
            return_value = message_.imuNineAxisMessage_.deserialize_check_type(buffer, wire_type);
            break;
          case FieldNumber::IMUSIXAXISMESSAGE:
            return_value = message_.imuSixAxisMessage_.deserialize_check_type(buffer, wire_type);
            break;
          case FieldNumber::BATTERYPACKMESSAGE:
            return_value = message_.batteryPackMessage_.deserialize_check_type(buffer, wire_type);
            break;
          case FieldNumber::PRESSURETRANSDUCERMESSAGE:
            return_value = message_.pressureTransducerMessage_.deserialize_check_type(buffer, wire_type);
            break;
          case FieldNumber::THERMOCOUPLEMESSAGE:
            return_value = message_.thermocoupleMessage_.deserialize_check_type(buffer, wire_type);
            break;
          case FieldNumber::LOADCELLMESSAGE:
            return_value = message_.loadCellMessage_.deserialize_check_type(buffer, wire_type);
            break;
          case FieldNumber::VALVESTATUSMESSAGE:
            return_value = message_.valveStatusMessage_.deserialize_check_type(buffer, wire_type);
            break;
          case FieldNumber::RELAYSTATUSMESSAGE:
            return_value = message_.relayStatusMessage_.deserialize_check_type(buffer, wire_type);
            break;
          default:
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS != return_value)
        {
          clear_message();
        }
        return return_value;
      }

#ifdef MSG_TO_STRING 
      ::EmbeddedProto::string_view to_string_message(::EmbeddedProto::string_view& str, const uint32_t indent_level, const bool first_field) const
      {
        ::EmbeddedProto::string_view left_chars = str;

        switch(which_message_)
        {
          case FieldNumber::GPSMESSAGE:
            left_chars = message_.gpsMessage_.to_string(left_chars, indent_level, GPSMESSAGE_NAME, first_field);
            break;
          case FieldNumber::BAROMETERMESSAGE:
            left_chars = message_.barometerMessage_.to_string(left_chars, indent_level, BAROMETERMESSAGE_NAME, first_field);
            break;
          case FieldNumber::IMUNINEAXISMESSAGE:
            left_chars = message_.imuNineAxisMessage_.to_string(left_chars, indent_level, IMUNINEAXISMESSAGE_NAME, first_field);
            break;
          case FieldNumber::IMUSIXAXISMESSAGE:
            left_chars = message_.imuSixAxisMessage_.to_string(left_chars, indent_level, IMUSIXAXISMESSAGE_NAME, first_field);
            break;
          case FieldNumber::BATTERYPACKMESSAGE:
            left_chars = message_.batteryPackMessage_.to_string(left_chars, indent_level, BATTERYPACKMESSAGE_NAME, first_field);
            break;
          case FieldNumber::PRESSURETRANSDUCERMESSAGE:
            left_chars = message_.pressureTransducerMessage_.to_string(left_chars, indent_level, PRESSURETRANSDUCERMESSAGE_NAME, first_field);
            break;
          case FieldNumber::THERMOCOUPLEMESSAGE:
            left_chars = message_.thermocoupleMessage_.to_string(left_chars, indent_level, THERMOCOUPLEMESSAGE_NAME, first_field);
            break;
          case FieldNumber::LOADCELLMESSAGE:
            left_chars = message_.loadCellMessage_.to_string(left_chars, indent_level, LOADCELLMESSAGE_NAME, first_field);
            break;
          case FieldNumber::VALVESTATUSMESSAGE:
            left_chars = message_.valveStatusMessage_.to_string(left_chars, indent_level, VALVESTATUSMESSAGE_NAME, first_field);
            break;
          case FieldNumber::RELAYSTATUSMESSAGE:
            left_chars = message_.relayStatusMessage_.to_string(left_chars, indent_level, RELAYSTATUSMESSAGE_NAME, first_field);
            break;
          default:
            break;
        }

        return left_chars;
      }

#endif // End of MSG_TO_STRING
};

} // End of namespace Proto
#endif // SENSORDATA_H