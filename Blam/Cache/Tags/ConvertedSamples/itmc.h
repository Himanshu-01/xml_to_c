#pragma once
#include"DataTypes.h"
#include"tag_block_assert.h"


namespace Blam
{
namespace Cache
{
namespace Tags
{
namespace itmc
{
struct itmc
{
struct ItemPermutations
{
float Weight;//0x0
Blam::Cache::DataTypes::tagRef Item;//0x4
Blam::Cache::DataTypes::StringID VariantName;//0xc
};
TAG_BLOCK_SIZE_ASSERT(ItemPermutations,0x10);
Blam::Cache::DataTypes::Reflexive<ItemPermutations> ItemPermutations;//0x0
unsigned __int32 UnusedSpawnTime(inseconds,0=default);//0x8
};
TAG_BLOCK_SIZE_ASSERT(itmc,0xc);
}
}
}
}
