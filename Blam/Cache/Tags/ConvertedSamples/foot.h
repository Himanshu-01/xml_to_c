#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


/*********************************************************************
* name:
* group_tag : foot
* header size : 8
* *********************************************************************/
struct s_foot
{
	struct s_effects
	{
		struct s_old_materials
		{
			tag_reference effect;//0x0
			tag_reference sound;//0x8
			string_id material_name;//0x10
			__int16 global_material_index;//0x14
			enum class e_sweetener_mode : __int8
			{
				sweetener_default = 0,
				sweetener_enabled = 1,
				sweetener_disabled = 2,
			};
			e_sweetener_mode sweetener_mode;//0x16
			__int8 unknown;//0x17
		};
		TAG_BLOCK_SIZE_ASSERT(s_old_materials, 0x18);
		tag_block<s_old_materials> old_materials;//0x0
		struct s_sounds
		{
			tag_reference tag;//0x0
			tag_reference secondary_tag;//0x8
			string_id material_name;//0x10
			__int16 global_material_index;//0x14
			enum class e_sweetener_mode : __int8
			{
				sweetener_default = 0,
				sweetener_enabled = 1,
				sweetener_disabled = 2,
			};
			e_sweetener_mode sweetener_mode;//0x16
			__int8 unknown;//0x17
		};
		TAG_BLOCK_SIZE_ASSERT(s_sounds, 0x18);
		tag_block<s_sounds> sounds;//0x8
		struct s_effects
		{
			tag_reference tag;//0x0
			tag_reference secondary_tag;//0x8
			string_id material_name;//0x10
			__int16 global_material_index;//0x14
			enum class e_sweetener_mode : __int8
			{
				sweetener_default = 0,
				sweetener_enabled = 1,
				sweetener_disabled = 2,
			};
			e_sweetener_mode sweetener_mode;//0x16
			__int8 unknown;//0x17
		};
		TAG_BLOCK_SIZE_ASSERT(s_effects, 0x18);
		tag_block<s_effects> effects;//0x10
	};
	TAG_BLOCK_SIZE_ASSERT(s_effects, 0x18);
	tag_block<s_effects> effects;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_foot, 0x8);
