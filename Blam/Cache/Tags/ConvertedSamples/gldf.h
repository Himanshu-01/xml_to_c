#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


namespace Blam
{
	namespace Cache
	{
		namespace Tags
		{
			/*********************************************************************
			* name:
			* group_tag : gldf
			* header size : 8
			* *********************************************************************/
			struct gldf
			{
				struct LightVariables
				{
					struct ObjectsAffected
					{
						unsigned char All : 1;
						unsigned char Biped : 1;
						unsigned char Vehicle : 1;
						unsigned char Weapon : 1;
						unsigned char Equipment : 1;
						unsigned char Garbage : 1;
						unsigned char Projectile : 1;
						unsigned char Scenery : 1;
						unsigned char Machine : 1;
						unsigned char Control : 1;
						unsigned char LightFixture : 1;
						unsigned char SoundScenery : 1;
						unsigned char Crate : 1;
						unsigned char Creature : 1;
						unsigned char bit14 : 1;
						unsigned char bit15 : 1;
						unsigned char bit16 : 1;
						unsigned char bit17 : 1;
						unsigned char bit18 : 1;
						unsigned char bit19 : 1;
						unsigned char bit20 : 1;
						unsigned char bit21 : 1;
						unsigned char bit22 : 1;
						unsigned char bit23 : 1;
						unsigned char bit24 : 1;
						unsigned char bit25 : 1;
						unsigned char bit26 : 1;
						unsigned char bit27 : 1;
						unsigned char bit28 : 1;
						unsigned char bit29 : 1;
						unsigned char bit30 : 1;
						unsigned char bit31 : 1;
					}ObjectsAffected;
					TAG_BLOCK_SIZE_ASSERT(ObjectsAffected, 0x4);
					//0x0
					float LightmapBrightnessOffset;//0x4
					Blam::Maths::Real::ColorRGB PrimaryMinLightmapColor;//0x8
					Blam::Maths::Real::ColorRGB PrimaryMaxLightmapColor;//0x14
					Blam::Maths::Real::Angle ExclusionAngleFromUp;//0x20
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
			TAG_BLOCK_SIZE_ASSERT(gldf, 0x8);
		}
	}
}
