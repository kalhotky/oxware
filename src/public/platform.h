/*
*	OXWARE developed by oxiKKK
*	Copyright (c) 2023
* 
*	This program is licensed under the MIT license. By downloading, copying, 
*	installing or using this software you agree to this license.
*
*	License Agreement
*
*	Permission is hereby granted, free of charge, to any person obtaining a 
*	copy of this software and associated documentation files (the "Software"), 
*	to deal in the Software without restriction, including without limitation 
*	the rights to use, copy, modify, merge, publish, distribute, sublicense, 
*	and/or sell copies of the Software, and to permit persons to whom the 
*	Software is furnished to do so, subject to the following conditions:
*
*	The above copyright notice and this permission notice shall be included 
*	in all copies or substantial portions of the Software. 
*
*	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS 
*	OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
*	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL 
*	THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
*	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
*	FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS 
*	IN THE SOFTWARE.
*/

//
// platform.h -- Platform-specific lowlevel declarations.
//

#ifndef PLATFORM_H
#define PLATFORM_H
#pragma once

#include "version.h"

// Disable that stupid warning
#define _CRT_SECURE_NO_WARNINGS

#define DLLEXPORT						__declspec(dllexport)
#define C_DLLEXPORT			extern "C"	__declspec(dllexport)

//---------------------------------------------------------------------------------
// PHNT, thank you guys
// 
//	https://github.com/processhacker/phnt
//---------------------------------------------------------------------------------

//#define PHNT_WINDOWS_ANCIENT 0
//#define PHNT_WINDOWS_XP 51 // August, 2001
//#define PHNT_WINDOWS_SERVER_2003 52 // April, 2003
//#define PHNT_WINDOWS_VISTA 60 // November, 2006
//#define PHNT_WINDOWS_7 61 // July, 2009
//#define PHNT_WINDOWS_8 62 // August, 2012
//#define PHNT_WINDOWS_8_1 63 // August, 2013
//#define PHNT_WINDOWS_10 100 // July, 2015            // Version 1507, Build 10240
//#define PHNT_WINDOWS_10_TH2 101 // November, 2015    // Version 1511, Build 10586
//#define PHNT_WINDOWS_10_RS1 102 // August, 2016      // Version 1607, Build 14393
//#define PHNT_WINDOWS_10_RS2 103 // April, 2017       // Version 1703, Build 15063
//#define PHNT_WINDOWS_10_RS3 104 // October, 2017     // Version 1709, Build 16299
//#define PHNT_WINDOWS_10_RS4 105 // April, 2018       // Version 1803, Build 17134
//#define PHNT_WINDOWS_10_RS5 106 // November, 2018    // Version 1809, Build 17763
//#define PHNT_WINDOWS_10_19H1 107 // May, 2019        // Version 1903, Build 18362
//#define PHNT_WINDOWS_10_19H2 108 // November, 2019   // Version 1909, Build 18363
//#define PHNT_WINDOWS_10_20H1 109 // May, 2020        // Version 2004, Build 19041
//#define PHNT_WINDOWS_10_20H2 110 // October, 2020    // Build 19042
//#define PHNT_WINDOWS_10_21H1 111 // May, 2021        // Build 19043
//#define PHNT_WINDOWS_10_21H2 112 // November, 2021   // Build 19044
//#define PHNT_WINDOWS_10_22H2 113 // October, 2022    // Build 19045
//#define PHNT_WINDOWS_11 114 // October, 2021         // Build 22000
//#define PHNT_WINDOWS_11_22H2 115 // September, 2022  // Build 22621
//#define PHNT_WINDOWS_11_23H2 116 // October, 2023    // Build 22631
//#define PHNT_WINDOWS_11_24H2 117 // October, 2024    // Build 26100
//#define PHNT_WINDOWS_NEW ULONG_MAX
#define PHNT_VERSION PHNT_WINDOWS_10_RS2 // TODO(kalhotky): Fix phnt's redefinitions and use PHNT_WINDOWS_10

//#define NOGDI
#define NOMINMAX // FUCK YOU

#include <phnt/phnt_windows.h>
#include <phnt/phnt.h>

#include <winsock.h>
#include <knownfolders.h>

#ifdef small
#undef small // bruh
#endif

//---------------------------------------------------------------------------------

// Bypass the POSIX deprecation errors
#define stricmp _stricmp
#define strnicmp _strnicmp
#define wcsicmp _wcsicmp

#include "basetypes.h"

#include "custom_format.h"

#include <chrono>
using namespace std::chrono_literals;

// nlohmann json
#include "json.h"

#endif // PLATFORM_H