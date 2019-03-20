#pragma once
#include"DataTypes.h"
#include"tag_block_assert.h"


namespace Blam
{
	namespace Cache
	{
		namespace Tags
		{
			namespace Itmc
			{
				/*********************************************************************
				* name:
				* group_tag : Itmc
				* header size : 12
				* *********************************************************************/
				struct Itmc
				{
					struct ItemPermutations
					{
						float Weight;//0x0
						Blam::Cache::DataTypes::tagRef Item;//0x4
						Blam::Cache::DataTypes::StringID VariantName;//0xC
					};
					TAG_BLOCK_SIZE_ASSERT(ItemPermutations, 0x10);
					Blam::Cache::DataTypes::Reflexive<ItemPermutations> ItemPermutations;//0x0
					unsigned __int32 UnusedSpawnTimeinSeconds0 = Default;//0x8
				};
				TAG_BLOCK_SIZE_ASSERT(Itmc, 0xC);
			}
		}
	}
}
