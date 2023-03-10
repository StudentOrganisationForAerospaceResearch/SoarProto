/*
 *  Copyright (C) 2020-2023 Embedded AMS B.V. - All Rights Reserved
 *
 *  This file is part of Embedded Proto.
 *
 *  Embedded Proto is open source software: you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License as published
 *  by the Free Software Foundation, version 3 of the license.
 *
 *  Embedded Proto  is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Embedded Proto. If not, see <https://www.gnu.org/licenses/>.
 *
 *  For commercial and closed source application please visit:
 *  <https://EmbeddedProto.com/license/>.
 *
 *  Embedded AMS B.V.
 *  Info:
 *    info at EmbeddedProto dot com
 *
 *  Postal address:
 *    Johan Huizingalaan 763a
 *    1066 VH, Amsterdam
 *    the Netherlands
 */

// This file is generated. Please do not edit!
#ifndef CORE_H
#define CORE_H

#include <cstdint>
// Include external proto definitions

namespace proto {

enum class Node : uint32_t
{
  NODE_INVALID = 0,
  NODE_ANY = 1,
  NODE_RCU = 2,
  NODE_DMB = 3,
  NODE_PBB = 4
};

enum class MessageID : uint32_t
{
  MSG_INVALID = 0,
  MSG_CONTROL = 1,
  MSG_COMMAND = 2,
  MSG_TELEMETRY = 3
};

enum class RocketState : uint32_t
{
  DMB_INVALID = 0,
  RS_PRELAUNCH = 1,
  RS_FILL = 2,
  RS_ARM = 3,
  RS_IGNITION = 4,
  RS_LAUNCH = 5,
  RS_BURN = 6,
  RS_COAST = 7,
  RS_DESCENT = 8,
  RS_RECOVERY = 9,
  RS_ABORT = 10,
  RS_NONE = 11
};

} // End of namespace proto
#endif // CORE_H