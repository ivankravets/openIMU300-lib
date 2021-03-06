/** ***************************************************************************
 * @file extern_port.h functions for general external port interface
 *
 * THIS CODE AND INFORMATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
 * KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
 * PARTICULAR PURPOSE.
 *
 * @brief UCB (Unified Code Base) external serial interface
 *        external communication port structures
 *****************************************************************************/
/*******************************************************************************
Copyright 2018 ACEINNA, INC

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*******************************************************************************/

#ifndef EXTERN_PORT_H
#define EXTERN_PORT_H



// Leave in during compilation to enable N2 packet at 115.2 kbps
//#define PACKET_TYPE             0x4e32      // Nav2 U (N2) = 0x4E32
//#define BAUD_RATE_USER          BAUD_115200 // switches to 38400

#include "serial_port_def.h"
#include <stdint.h>
#include "ucb_packet_struct.h"
#include "GlobalConstants.h"
typedef uint16_t       ExternPortTypeEnum;

extern void   	ExternPortInit         (void);
extern BOOL     HandleUcbRx (UcbPacketStruct *ptrUcbPacket);
extern void     HandleUcbTx (int port, UcbPacketStruct *ptrUcbPacket);
extern void	 	ExternPortWaitOnTxIdle (void);

#endif
