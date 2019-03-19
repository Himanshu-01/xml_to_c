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
//0
struct ItemPermutations
{//0
float32 Weight;
//4
Blam::Cache::DataTypes::tagRef Item;
//12
Blam::Cache::DataTypes::StringID VariantName;
};
TAG_BLOCK_SIZE_ASSERT(ItemPermutations,16);
Blam::Cache::DataTypes::Reflexive<ItemPermutations> ItemPermutations;
//8
unsigned __int32 UnusedSpawnTime(inseconds,0=default);
};
TAG_BLOCK_SIZE_ASSERT(itmc,12);
}
}
}
}
