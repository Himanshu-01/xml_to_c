#pragma once
#include"DataTypes.h"
#include"tag_block_assert.h"


namespace Blam
{
namespace Cache
{
namespace Tags
{
namespace gldf
{
struct gldf
{
struct Light Variables
{
enum class Objects Affected : __int32
{
All = 0,
Biped = 1,
Vehicle = 2,
Weapon = 3,
Equipment = 4,
Garbage = 5,
Projectile = 6,
Scenery = 7,
Machine = 8,
Control = 9,
Light Fixture = 16,
Sound Scenery = 17,
Crate = 18,
Creature = 19,
};
Blam::Cache::DataTypes::Bitfield32<Objects Affected> Objects Affected;//0x0
float Lightmap Brightness Offset;//0x4
PAD(28);//0x8
Blam::Cache::DataTypes::dataRef Primary Light Function;//0x24
float Secondary Min Lightmap Color R;//0x2c
float Secondary Min Lightmap Color G;//0x30
float Secondary Min Lightmap Color B;//0x34
float Secondary Max Lightmap Color R;//0x38
float Secondary Max Lightmap Color G;//0x3c
float Secondary Max Lightmap Color B;//0x40
float Secondary Min Diffuse Sample R;//0x44
float Secondary Min Diffuse Sample G;//0x48
float Secondary Min Diffuse Sample B;//0x4c
float Secondary Max Diffuse Sample R;//0x50
float Secondary Max Diffuse Sample G;//0x54
float Secondary Max Diffuse Sample B;//0x58
float Secondary Z-Axsis Rotation;//0x5c
Blam::Cache::DataTypes::dataRef Secondary Light Function;//0x60
float Ambient Min Lightmap Sample R;//0x68
float Ambient Min Lightmap Sample G;//0x6c
float Ambient Min Lightmap Sample B;//0x70
float Ambient Max Lightmap Sample R;//0x74
float Ambient Max Lightmap Sample G;//0x78
float Ambient Max Lightmap Sample B;//0x7c
Blam::Cache::DataTypes::dataRef Ambient Light Function;//0x80
Blam::Cache::DataTypes::dataRef Lightmap Shadows;//0x88
};
TAG_BLOCK_SIZE_ASSERT(Light Variables,0x90);
Blam::Cache::DataTypes::Reflexive<Light Variables> Light Variables;//0x0
};
TAG_BLOCK_SIZE_ASSERT(gldf,0x8);
}
}
}
}
