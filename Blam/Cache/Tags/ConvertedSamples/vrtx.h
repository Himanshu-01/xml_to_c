#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


/*********************************************************************
* name:
* group_tag : vrtx
* header size : 16
* *********************************************************************/
struct s_vrtx
{
	enum class e_platform_type : __int8
	{
		pc = 0,
		xbox = 1,
	};
	e_platform_type platform_type;//0x0
	PAD(0x3);//0x1
	struct s_geometry_classifications
	{
		__int32 unknown;//0x0
		data_block compiled_shader;//0x4
		data_block code;//0xC
	};
	TAG_BLOCK_SIZE_ASSERT(s_geometry_classifications, 0x14);
	tag_block<s_geometry_classifications> geometry_classifications;//0x4
	__int32 output_swizzles;//0xC
};
TAG_BLOCK_SIZE_ASSERT(s_vrtx, 0x10);
