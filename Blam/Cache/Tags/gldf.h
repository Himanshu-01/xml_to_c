#pragma once
#include"..\DataTypes\DataTypes.h"
#include"..\tag_block_assert.h"

namespace Blam
{
	namespace Cache
	{
		namespace Tags
		{
			namespace gldf
			{
				enum class Objects_Affected :__int32
				{
					All = 0x0,
					Biped = 0x1,
					Vehicle = 0x2,
					Weapon = 0x3,
					Equipment = 0x4,
					Garbage = 0x5,
					Projectile = 0x6,
					Scenery = 0x7,
					Machine = 0x8,
					Control = 0x9,
					Light_Fixture = 0xA,
					Sound_Scenery = 0xB,
					Crate = 0xC,
					Creature = 0xD,
				};
				struct Light_Variables
				{
					Blam::Cache::DataTypes::Bitfield32<Objects_Affected> Objects_Affected;
					
				};
			}
		}
	}
}
