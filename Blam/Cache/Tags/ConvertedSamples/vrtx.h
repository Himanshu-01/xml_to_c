#pragma once
#include"DataTypes.h"
#include"tag_block_assert.h"


namespace Blam
{
namespace Cache
{
namespace Tags
{
namespace vrtx
{
struct vrtx
{
enum class Platform Type : __int8
{
PC = 0,
XBOX = 1,
};
Platform Type Platform Type;//0x0
PAD(3);//0x1
struct Geometry Classifications
{
__int32 Unknown;//0x0
Blam::Cache::DataTypes::dataRef Compiled shader;//0x4
Blam::Cache::DataTypes::dataRef Code;//0xc
};
TAG_BLOCK_SIZE_ASSERT(Geometry Classifications,0x14);
Blam::Cache::DataTypes::Reflexive<Geometry Classifications> Geometry Classifications;//0x4
__int32 output swizzles;//0xc
};
TAG_BLOCK_SIZE_ASSERT(vrtx,0x10);
}
}
}
}
