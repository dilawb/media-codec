/*
* Cedarx framework.
* Copyright (c) 2008-2015 Allwinner Technology Co. Ltd.
* Copyright (c) 2014 Ning Fang <fangning@allwinnertech.com>
*
* This file is part of Cedarx.
*
* Cedarx is free software; you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public
* License as published by the Free Software Foundation; either
* version 2.1 of the License, or (at your option) any later version.
*
* This program is distributed "as is" WITHOUT ANY WARRANTY of any
* kind, whether express or implied; without even the implied warranty
* of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU Lesser General Public License for more details.
*/
/*============================================================================
                            O p e n M A X   w r a p p e r s
                             O p e n  M A X   C o r e

 This module contains the definitions of the OpenMAX core.

*//*========================================================================*/

#ifndef AW_OMX_CORE_H
#define AW_OMX_CORE_H

#include "aw_omx_common.h"        // OMX API
#include <string.h>

#define OMX_COMP_MAX_INST 4

typedef struct _omx_core_cb_type
{
	const char*                   name;							// Component name
	create_aw_omx_component fn_ptr;							// create instance fn ptr
	void*                   inst[OMX_COMP_MAX_INST];		// Instance handle
    void*                   so_lib_handle;					// So Library handle
	const char*                   so_lib_name;					// so directory
	const char*                   roles[OMX_CORE_MAX_CMP_ROLES];	// roles played
}omx_core_cb_type;

typedef struct
{
    OMX_U32 width;
    OMX_U32 height;
    OMX_U32 profile;
    OMX_U32 level;
}VideoOMXConfigParserOutputs;


typedef struct
{
    OMX_U8* inPtr;             	//pointer to codec configuration header
    OMX_U32 inBytes;           	//length of codec configuration header
    OMX_STRING cComponentRole; 	//OMX component codec type
    OMX_STRING cComponentName;  //OMX component name
}OMXConfigParserInputs;

#endif

