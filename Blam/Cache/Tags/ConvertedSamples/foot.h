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
struct Old Materials
{
Blam::Cache::DataTypes::tagRef Effect;//0x0
Blam::Cache::DataTypes::tagRef Sound;//0x8
Blam::Cache::DataTypes::StringID Material Name;//0x10
__int16 Global Material Index;//0x14
enum class Sweetener Mode : __int8
{
Sweetener Default = 0,
Sweetener Enabled = 1,
Sweetener Disabled = 2,
};
Sweetener Mode Sweetener Mode;//0x16
__int8 Unknown;//0x17
};
TAG_BLOCK_SIZE_ASSERT(Old Materials,0x18);
Blam::Cache::DataTypes::Reflexive<Old Materials> Old Materials;//0x0
struct Sounds
{
Blam::Cache::DataTypes::tagRef Tag;//0x0
Blam::Cache::DataTypes::tagRef Secondary Tag;//0x8
Blam::Cache::DataTypes::StringID Material Name;//0x10
__int16 Global Material Index;//0x14
enum class Sweetener Mode : __int8
{
Sweetener Default = 0,
Sweetener Enabled = 1,
Sweetener Disabled = 2,
};
Sweetener Mode Sweetener Mode;//0x16
__int8 Unknown;//0x17
};
TAG_BLOCK_SIZE_ASSERT(Sounds,0x18);
Blam::Cache::DataTypes::Reflexive<Sounds> Sounds;//0x8
struct Effects
{
Blam::Cache::DataTypes::tagRef Tag;//0x0
Blam::Cache::DataTypes::tagRef Secondary Tag;//0x8
Blam::Cache::DataTypes::StringID Material Name;//0x10
__int16 Global Material Index;//0x14
enum class Sweetener Mode : __int8
{
Sweetener Default = 0,
Sweetener Enabled = 1,
Sweetener Disabled = 2,
};
Sweetener Mode Sweetener Mode;//0x16
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
