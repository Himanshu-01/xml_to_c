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
struct Item Permutations
{
float Weight;//0x0
Blam::Cache::DataTypes::tagRef Item;//0x4
Blam::Cache::DataTypes::StringID Variant Name;//0xc
};
TAG_BLOCK_SIZE_ASSERT(Item Permutations,0x10);
Blam::Cache::DataTypes::Reflexive<Item Permutations> Item Permutations;//0x0
unsigned __int32 Unused Spawn Time   (in seconds, 0 = default);//0x8
};
TAG_BLOCK_SIZE_ASSERT(itmc,0xc);
}
}
}
}
