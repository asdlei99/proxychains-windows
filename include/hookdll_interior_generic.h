// SPDX-License-Identifier: GPL-2.0-or-later
/* hookdll_interior_generic.h
 * Copyright (C) 2020 Feng Shun.
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License version 2 as 
 *   published by the Free Software Foundation, either version 3 of the
 *   License, or (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include "defines_win32.h"
#include "ipc_win32.h"

extern PXCH_INJECT_REMOTE_DATA* g_pRemoteData;
PXCH_UINT32 IpcCommunicateWithServer(const PXCH_IPC_MSGBUF sendMessage, PXCH_UINT32 cbSendMessageSize, PXCH_IPC_MSGBUF responseMessage, PXCH_UINT32* pcbResponseMessageSize);
