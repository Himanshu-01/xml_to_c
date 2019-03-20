#pragma once
#include"DataTypes.h"
#include"tag_block_assert.h"


namespace Blam
{
	namespace Cache
	{
		namespace Tags
		{
			namespace Gldf
			{
				struct Gldf
				{
					struct LightVariables
					{
						enum class ObjectsAffected : __int32
						{
							All = 0x0,
							Biped = 0x1,
							Vehicle = 0x2,
							Weapon = 0x3,
							Equipment = 0x4,
							Garbage = 0x5,
							Projectile = 0x6,
							Scenery = 0x7,
							Machine = 0x8,
							Control = 0x9,
							LightFixture = 0x10,
							SoundScenery = 0x11,
							Crate = 0x12,
							Creature = 0x13,
						};
						Blam::Cache::DataTypes::Bitfield32<ObjectsAffected> ObjectsAffected;//0x0
						float LightmapBrightnessOffset;//0x4
						PAD(0x1C);//0x8
						Blam::Cache::DataTypes::dataRef PrimaryLightFunction;//0x24
						float SecondaryMinLightmapColorR;//0x2C
						float SecondaryMinLightmapColorG;//0x30
						float SecondaryMinLightmapColorB;//0x34
						float SecondaryMaxLightmapColorR;//0x38
						float SecondaryMaxLightmapColorG;//0x3C
						float SecondaryMaxLightmapColorB;//0x40
						float SecondaryMinDiffuseSampleR;//0x44
						float SecondaryMinDiffuseSampleG;//0x48
						float SecondaryMinDiffuseSampleB;//0x4C
						float SecondaryMaxDiffuseSampleR;//0x50
						float SecondaryMaxDiffuseSampleG;//0x54
						float SecondaryMaxDiffuseSampleB;//0x58
						float SecondaryZAxsisRotation;//0x5C
						Blam::Cache::DataTypes::dataRef SecondaryLightFunction;//0x60
						float AmbientMinLightmapSampleR;//0x68
						float AmbientMinLightmapSampleG;//0x6C
						float AmbientMinLightmapSampleB;//0x70
						float AmbientMaxLightmapSampleR;//0x74
						float AmbientMaxLightmapSampleG;//0x78
						float AmbientMaxLightmapSampleB;//0x7C
						Blam::Cache::DataTypes::dataRef AmbientLightFunction;//0x80
						Blam::Cache::DataTypes::dataRef LightmapShadows;//0x88
					};
					TAG_BLOCK_SIZE_ASSERT(LightVariables, 0x90);
					Blam::Cache::DataTypes::Reflexive<LightVariables> LightVariables;//0x0
				};
				TAG_BLOCK_SIZE_ASSERT(Gldf, 0x8);
			}
		}
	}
}
