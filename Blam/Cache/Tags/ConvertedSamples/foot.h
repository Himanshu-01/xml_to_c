#pragma once
#include"DataTypes.h"
#include"tag_block_assert.h"


namespace Blam
{
namespace Cache
{
namespace Tags
{
namespace foot
{
struct foot
{
struct effects
{
struct OldMaterials
{
Blam::Cache::DataTypes::tagRef Effect;//0x0
Blam::Cache::DataTypes::tagRef Sound;//0x8
Blam::Cache::DataTypes::StringID MaterialName;//0x10
__int16 GlobalMaterialIndex;//0x14
enum class SweetenerMode : __int8
{
SweetenerDefault = 0,
SweetenerEnabled = 1,
SweetenerDisabled = 2,
};
SweetenerMode SweetenerMode;//0x16
__int8 Unknown;//0x17
};
TAG_BLOCK_SIZE_ASSERT(OldMaterials,0x18);
Blam::Cache::DataTypes::Reflexive<OldMaterials> OldMaterials;//0x0
struct Sounds
{
Blam::Cache::DataTypes::tagRef Tag;//0x0
Blam::Cache::DataTypes::tagRef SecondaryTag;//0x8
Blam::Cache::DataTypes::StringID MaterialName;//0x10
__int16 GlobalMaterialIndex;//0x14
enum class SweetenerMode : __int8
{
SweetenerDefault = 0,
SweetenerEnabled = 1,
SweetenerDisabled = 2,
};
SweetenerMode SweetenerMode;//0x16
__int8 Unknown;//0x17
};
TAG_BLOCK_SIZE_ASSERT(Sounds,0x18);
Blam::Cache::DataTypes::Reflexive<Sounds> Sounds;//0x8
struct Effects
{
Blam::Cache::DataTypes::tagRef Tag;//0x0
Blam::Cache::DataTypes::tagRef SecondaryTag;//0x8
Blam::Cache::DataTypes::StringID MaterialName;//0x10
__int16 GlobalMaterialIndex;//0x14
enum class SweetenerMode : __int8
{
SweetenerDefault = 0,
SweetenerEnabled = 1,
SweetenerDisabled = 2,
};
SweetenerMode SweetenerMode;//0x16
__int8 Unknown;//0x17
};
TAG_BLOCK_SIZE_ASSERT(Effects,0x18);
Blam::Cache::DataTypes::Reflexive<Effects> Effects;//0x10
};
TAG_BLOCK_SIZE_ASSERT(effects,0x18);
Blam::Cache::DataTypes::Reflexive<effects> effects;//0x0
};
TAG_BLOCK_SIZE_ASSERT(foot,0x8);
}
}
}
}
