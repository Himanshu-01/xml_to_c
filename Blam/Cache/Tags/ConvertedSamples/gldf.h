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
				/*********************************************************************
				* name:
				* group_tag : Gldf
				* header size : 8
				* *********************************************************************/
				struct Gldf
				{
					struct LightVariables
					{
						enum class ObjectsAffected : __int32
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
							LightFixture = 10,
							SoundScenery = 11,
							Crate = 12,
							Creature = 13,
						};
						Blam::Cache::DataTypes::Bitfield32<ObjectsAffected> ObjectsAffected;//0x0
						float LightmapBrightnessOffset;//0x4
						Blam::Maths::Real::ColorRGB PrimaryMinLightmapColor;//0x8
						Blam::Maths::Real::ColorRGB PrimaryMaxLightmapColor;//0x14
						PAD(0x4);//0x20
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
