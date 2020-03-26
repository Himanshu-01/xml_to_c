#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


/*********************************************************************
* name:
* group_tag : itmc
* header size : 12
* *********************************************************************/
struct s_itmc
{
	struct s_item_permutations
	{
		float weight;//0x0
		tag_reference item;//0x4
		string_id variant_name;//0xC
	};
	TAG_BLOCK_SIZE_ASSERT(s_item_permutations, 0x10);
	tag_block<s_item_permutations> item_permutations;//0x0
	unsigned __int32 unused_spawn_time___in_seconds_0_ = _default;//0x8
};
TAG_BLOCK_SIZE_ASSERT(s_itmc, 0xC);
