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
Blam::Cache::DataTypes::tagRef Effect;//0x8
Blam::Cache::DataTypes::tagRef Sound;//0x10
Blam::Cache::DataTypes::StringID MaterialName;//0x14
__int16 GlobalMaterialIndex;//0x16
enum class SweetenerMode : __int8
{
SweetenerDefault = 0,
SweetenerEnabled = 1,
SweetenerDisabled = 2,
};
SweetenerMode SweetenerMode;//0x17
__int8 Unknown;//0x18
};
TAG_BLOCK_SIZE_ASSERT(OldMaterials,18);
Blam::Cache::DataTypes::Reflexive<OldMaterials> OldMaterials;//0x8
struct Sounds
{
Blam::Cache::DataTypes::tagRef Tag;//0x8
Blam::Cache::DataTypes::tagRef SecondaryTag;//0x10
Blam::Cache::DataTypes::StringID MaterialName;//0x14
__int16 GlobalMaterialIndex;//0x16
enum class SweetenerMode : __int8
{
SweetenerDefault = 0,
SweetenerEnabled = 1,
SweetenerDisabled = 2,
};
SweetenerMode SweetenerMode;//0x17
__int8 Unknown;//0x18
};
TAG_BLOCK_SIZE_ASSERT(Sounds,18);
Blam::Cache::DataTypes::Reflexive<Sounds> Sounds;//0x10
struct Effects
{
Blam::Cache::DataTypes::tagRef Tag;//0x8
Blam::Cache::DataTypes::tagRef SecondaryTag;//0x10
Blam::Cache::DataTypes::StringID MaterialName;//0x14
__int16 GlobalMaterialIndex;//0x16
enum class SweetenerMode : __int8
{
SweetenerDefault = 0,
SweetenerEnabled = 1,
SweetenerDisabled = 2,
};
SweetenerMode SweetenerMode;//0x17
__int8 Unknown;//0x18
};
TAG_BLOCK_SIZE_ASSERT(Effects,18);
Blam::Cache::DataTypes::Reflexive<Effects> Effects;//0x18
};
TAG_BLOCK_SIZE_ASSERT(effects,18);
Blam::Cache::DataTypes::Reflexive<effects> effects;//0x0
};
TAG_BLOCK_SIZE_ASSERT(foot,8);
}
}
}
}
