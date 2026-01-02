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

#ifndef SECURITYMODULEHOOK_H
#define SECURITYMODULEHOOK_H
#pragma once

//-----------------------------------------------------------------------------

// modfuncs_t g_modfuncs
struct g_modfuncs_MemoryHook final : public GenericMemoryHook<hl::modfuncs_t>
{
	bool install() override;
	void test_hook() override;
};

// cl_enginefunc_dst_t g_engdstAddrs
struct g_engdstAddrs_MemoryHook final : public GenericMemoryHook<hl::cl_enginefunc_dst_t>
{
    bool install() override;
};

//-----------------------------------------------------------------------------

class CSecurityModuleHook
{
public:
	DECL_BASIC_CLASS(CSecurityModuleHook);

public:
	bool install_hooks();
	void uninstall_hooks();

private:
	void fill_modfuncs_callback_table();
	void restore_modfuncs_callback_table();

	void fill_engdst_callback_table();

public:
	inline static auto& g_modfuncs() { static g_modfuncs_MemoryHook hook; return hook; };
    inline static auto& g_engdstAddrs() { static g_engdstAddrs_MemoryHook hook; return hook; }
private:
	bool m_initialized = false;
};

#endif // SECURITYMODULEHOOK_H
