/*
** adi_initialize.c source file generated on April 20, 2016 at 14:21:01.
**
** Copyright (C) 2000-2016 Analog Devices Inc., All Rights Reserved.
**
** This file is generated automatically. You should not modify this source file,
** as your changes will be lost if this source file is re-generated.
*/

#include <sys/platform.h>
#include <services/int/adi_gic.h>

#include "adi_initialize.h"


int32_t adi_initComponents(void)
{
	int32_t result = 0;

	result = adi_gic_Init();


	return result;
}

