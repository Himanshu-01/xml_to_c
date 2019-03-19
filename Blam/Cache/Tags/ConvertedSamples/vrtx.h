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
enum class PlatformType : __int8
{
PC = 0,
XBOX = 1,
};
PlatformType PlatformType;//0x0
PAD(3);//0x1
struct GeometryClassifications
{
__int32 Unknown;//0x0
Blam::Cache::DataTypes::dataRef Compiledshader;//0x4
Blam::Cache::DataTypes::dataRef Code;//0xc
};
TAG_BLOCK_SIZE_ASSERT(GeometryClassifications,14);
Blam::Cache::DataTypes::Reflexive<GeometryClassifications> GeometryClassifications;//0x1
__int32 outputswizzles;//0xc
};
TAG_BLOCK_SIZE_ASSERT(vrtx,10);
}
}
}
}
