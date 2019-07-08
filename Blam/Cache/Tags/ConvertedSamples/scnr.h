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
			* group_tag : scnr
			* header size : 992
			* *********************************************************************/
			struct scnr
			{
				Blam::Cache::DataTypes::tagRef DoNotUse;//0x0
				struct Skies
				{
					Blam::Cache::DataTypes::tagRef Sky;//0x0
				};
				TAG_BLOCK_SIZE_ASSERT(Skies, 0x8);
				Blam::Cache::DataTypes::Reflexive<Skies> Skies;//0x8
				enum class MapType : __int16
				{
					SinglePlayer = 0,
					Multiplayer = 1,
					MainMenu = 2,
					Shared = 3,
					SinglePlayerShared = 4,
				};
				MapType MapType;//0x10
				struct Flags
				{
					unsigned char CortanaHack : 1;
					unsigned char AlwaysDrawSky : 1;
					unsigned char DontStripPathfinding : 1;
					unsigned char SymmetricMultiplayerMap : 1;
					unsigned char QuickLoadingCinematicOnlyScenario : 1;
					unsigned char CharactersUsePreviousMissionWeapons : 1;
					unsigned char LightmapsSmoothPalettesWithNeighbors : 1;
					unsigned char SnapToWhiteAtStart : 1;
					unsigned char bit8 : 1;
					unsigned char bit9 : 1;
					unsigned char bit10 : 1;
					unsigned char bit11 : 1;
					unsigned char bit12 : 1;
					unsigned char bit13 : 1;
					unsigned char bit14 : 1;
					unsigned char bit15 : 1;
				}Flags;
				TAG_BLOCK_SIZE_ASSERT(Flags, 0x2);
				//0x12
				PAD(0x8);//0x14
				Blam::Maths::Real::Angle LocalNorth;//0x1C
				struct PredictedResource
				{
					enum class Type : __int16
					{
						Bitmap = 0,
						Sound = 1,
						RenderModelGeometry = 2,
						ClusterGeometry = 3,
						ClusterInstancedGeometry = 4,
						LightmapGeometryObjectBuckets = 5,
						LightmapGeometryInstanceBuckets = 6,
						LightmapClusterBitmaps = 7,
						LightmapInstanceBitmaps = 8,
					};
					Type Type;//0x0
					__int16 ResourceIndex;//0x2
					Blam::Cache::DataTypes::tagRefN TagIndex;//0x4
				};
				TAG_BLOCK_SIZE_ASSERT(PredictedResource, 0x8);
				Blam::Cache::DataTypes::Reflexive<PredictedResource> PredictedResource;//0x20
				PAD(0x8);//0x28
				Blam::Cache::DataTypes::dataRef EditorScenarioData;//0x30
				struct Comments
				{
					float PositionX;//0x0
					float PositionY;//0x4
					float PositionZ;//0x8
					enum class Type : __int32
					{
						Generic = 0,
					};
					Type Type;//0xC
					Blam::Cache::DataTypes::String32 Name;//0x10
					Blam::Cache::DataTypes::String256 Comment;//0x30
				};
				TAG_BLOCK_SIZE_ASSERT(Comments, 0x130);
				Blam::Cache::DataTypes::Reflexive<Comments> Comments;//0x38
				PAD(0x8);//0x40
				struct ObjectNames
				{
					Blam::Cache::DataTypes::String32 Name;//0x0
					enum class Type : __int16
					{
						Null = 65535,
						Biped = 0,
						Vehicle = 1,
						Weapon = 2,
						Equipment = 3,
						Garbage = 4,
						Projectile = 5,
						Scenery = 6,
						Machine = 7,
						Control = 8,
						LightFixture = 9,
						SoundScenery = 10,
						Crate = 11,
						Creature = 12,
					};
					Type Type;//0x20
					__int16 PlacementIndex;//0x22
				};
				TAG_BLOCK_SIZE_ASSERT(ObjectNames, 0x24);
				Blam::Cache::DataTypes::Reflexive<ObjectNames> ObjectNames;//0x48
				struct Scenery
				{
					__int16 PaletteIndex;//0x0
					__int16 NameIndex;//0x2
					struct PlacementFlags
					{
						unsigned char NotAutomatically : 1;
						unsigned char NotOnEasy : 1;
						unsigned char NotOnNormal : 1;
						unsigned char NotOnHard : 1;
						unsigned char LockTypeToEnvObject : 1;
						unsigned char LockTransformToEnvObject : 1;
						unsigned char NeverPlaced : 1;
						unsigned char LockNameToEnvObject : 1;
						unsigned char CreateAtRest : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}PlacementFlags;
					TAG_BLOCK_SIZE_ASSERT(PlacementFlags, 0x4);
					//0x4
					float PositionX;//0x8
					float PositionY;//0xC
					float PositionZ;//0x10
					Blam::Maths::Real::Angle RotationI;//0x14
					Blam::Maths::Real::Angle RotationJ;//0x18
					Blam::Maths::Real::Angle RotationK;//0x1C
					float Scale;//0x20
					struct TransformFlags
					{
						unsigned char Mirrored : 1;
						unsigned char bit1 : 1;
						unsigned char bit2 : 1;
						unsigned char bit3 : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
						unsigned char bit14 : 1;
						unsigned char bit15 : 1;
					}TransformFlags;
					TAG_BLOCK_SIZE_ASSERT(TransformFlags, 0x2);
					//0x24
					struct ManualBSPFlags
					{
						unsigned char BSP0 : 1;
						unsigned char BSP1 : 1;
						unsigned char BSP2 : 1;
						unsigned char BSP3 : 1;
						unsigned char BSP4 : 1;
						unsigned char BSP5 : 1;
						unsigned char BSP6 : 1;
						unsigned char BSP7 : 1;
						unsigned char BSP8 : 1;
						unsigned char BSP9 : 1;
						unsigned char BSP10 : 1;
						unsigned char BSP11 : 1;
						unsigned char BSP12 : 1;
						unsigned char BSP13 : 1;
						unsigned char BSP14 : 1;
						unsigned char BSP15 : 1;
					}ManualBSPFlags;
					TAG_BLOCK_SIZE_ASSERT(ManualBSPFlags, 0x2);
					//0x26
					unsigned __int16 UniqueIDIndex;//0x28
					unsigned __int16 UniqueIDSalt;//0x2A
					__int16 OriginBSPIndex;//0x2C
					enum class Type : __int8
					{
						Biped = 0,
						Vehicle = 1,
						Weapon = 2,
						Equipment = 3,
						Garbage = 4,
						Projectile = 5,
						Scenery = 6,
						Machine = 7,
						Control = 8,
						LightFixture = 9,
						SoundScenery = 10,
						Crate = 11,
						Creature = 12,
					};
					Type Type;//0x2E
					enum class Source : __int8
					{
						Structure = 0,
						Editor = 1,
						Dynamic = 2,
						Legacy = 3,
					};
					Source Source;//0x2F
					enum class BSPPolicy : __int8
					{
						Default = 0,
						AlwaysPlaces = 1,
						ManualBSPPlacement = 2,
					};
					BSPPolicy BSPPolicy;//0x30
					__int8 Unknown;//0x31
					__int16 EditorFolder;//0x32
					Blam::Cache::DataTypes::StringID VariantName;//0x34
					struct ActiveChangeColors
					{
						unsigned char Primary : 1;
						unsigned char Secondary : 1;
						unsigned char Tertiary : 1;
						unsigned char Quaternary : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}ActiveChangeColors;
					TAG_BLOCK_SIZE_ASSERT(ActiveChangeColors, 0x4);
					//0x38
					PAD(0x10);//0x3C
					enum class PathfindingPolicy : __int16
					{
						TagDefault = 0,
						Dynamic = 1,
						CutOut = 2,
						Static = 3,
						None = 4,
					};
					PathfindingPolicy PathfindingPolicy;//0x4C
					enum class LightmappingPolicy : __int16
					{
						TagDefault = 0,
						Dynamic = 1,
						PerVertex = 2,
					};
					LightmappingPolicy LightmappingPolicy;//0x4E
					struct PathfindingReferences
					{
						__int16 BSPIndex;//0x0
						__int16 PathfindingObjectIndex;//0x2
					};
					TAG_BLOCK_SIZE_ASSERT(PathfindingReferences, 0x4);
					Blam::Cache::DataTypes::Reflexive<PathfindingReferences> PathfindingReferences;//0x50
					struct ValidMultiplayerGames
					{
						unsigned char CaptureTheFlag : 1;
						unsigned char Slayer : 1;
						unsigned char Oddball : 1;
						unsigned char KingOfTheHill : 1;
						unsigned char Juggernaut : 1;
						unsigned char Territories : 1;
						unsigned char Assault : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
						unsigned char bit14 : 1;
						unsigned char bit15 : 1;
					}ValidMultiplayerGames;
					TAG_BLOCK_SIZE_ASSERT(ValidMultiplayerGames, 0x2);
					//0x58
					__int16 Unknown;//0x5A
				};
				TAG_BLOCK_SIZE_ASSERT(Scenery, 0x5C);
				Blam::Cache::DataTypes::Reflexive<Scenery> Scenery;//0x50
				struct SceneryPalette
				{
					Blam::Cache::DataTypes::tagRef Scenery;//0x0
					PAD(0x20);//0x8
				};
				TAG_BLOCK_SIZE_ASSERT(SceneryPalette, 0x28);
				Blam::Cache::DataTypes::Reflexive<SceneryPalette> SceneryPalette;//0x58
				struct Bipeds
				{
					__int16 PaletteIndex;//0x0
					__int16 NameIndex;//0x2
					struct PlacementFlags
					{
						unsigned char NotAutomatically : 1;
						unsigned char NotOnEasy : 1;
						unsigned char NotOnNormal : 1;
						unsigned char NotOnHard : 1;
						unsigned char LockTypeToEnvObject : 1;
						unsigned char LockTransformToEnvObject : 1;
						unsigned char NeverPlaced : 1;
						unsigned char LockNameToEnvObject : 1;
						unsigned char CreateAtRest : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}PlacementFlags;
					TAG_BLOCK_SIZE_ASSERT(PlacementFlags, 0x4);
					//0x4
					float PositionX;//0x8
					float PositionY;//0xC
					float PositionZ;//0x10
					Blam::Maths::Real::Angle RotationI;//0x14
					Blam::Maths::Real::Angle RotationJ;//0x18
					Blam::Maths::Real::Angle RotationK;//0x1C
					float Scale;//0x20
					struct TransformFlags
					{
						unsigned char Mirrored : 1;
						unsigned char bit1 : 1;
						unsigned char bit2 : 1;
						unsigned char bit3 : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
						unsigned char bit14 : 1;
						unsigned char bit15 : 1;
					}TransformFlags;
					TAG_BLOCK_SIZE_ASSERT(TransformFlags, 0x2);
					//0x24
					struct ManualBSPFlags
					{
						unsigned char BSP0 : 1;
						unsigned char BSP1 : 1;
						unsigned char BSP2 : 1;
						unsigned char BSP3 : 1;
						unsigned char BSP4 : 1;
						unsigned char BSP5 : 1;
						unsigned char BSP6 : 1;
						unsigned char BSP7 : 1;
						unsigned char BSP8 : 1;
						unsigned char BSP9 : 1;
						unsigned char BSP10 : 1;
						unsigned char BSP11 : 1;
						unsigned char BSP12 : 1;
						unsigned char BSP13 : 1;
						unsigned char BSP14 : 1;
						unsigned char BSP15 : 1;
					}ManualBSPFlags;
					TAG_BLOCK_SIZE_ASSERT(ManualBSPFlags, 0x2);
					//0x26
					unsigned __int16 UniqueIDIndex;//0x28
					unsigned __int16 UniqueIDSalt;//0x2A
					__int16 OriginBSPIndex;//0x2C
					enum class Type : __int8
					{
						Biped = 0,
						Vehicle = 1,
						Weapon = 2,
						Equipment = 3,
						Garbage = 4,
						Projectile = 5,
						Scenery = 6,
						Machine = 7,
						Control = 8,
						LightFixture = 9,
						SoundScenery = 10,
						Crate = 11,
						Creature = 12,
					};
					Type Type;//0x2E
					enum class Source : __int8
					{
						Structure = 0,
						Editor = 1,
						Dynamic = 2,
						Legacy = 3,
					};
					Source Source;//0x2F
					enum class BSPPolicy : __int8
					{
						Default = 0,
						AlwaysPlaces = 1,
						ManualBSPPlacement = 2,
					};
					BSPPolicy BSPPolicy;//0x30
					__int8 Unknown;//0x31
					__int16 EditorFolder;//0x32
					Blam::Cache::DataTypes::StringID VariantName;//0x34
					struct ActiveChangeColors
					{
						unsigned char Primary : 1;
						unsigned char Secondary : 1;
						unsigned char Tertiary : 1;
						unsigned char Quaternary : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}ActiveChangeColors;
					TAG_BLOCK_SIZE_ASSERT(ActiveChangeColors, 0x4);
					//0x38
					PAD(0x10);//0x3C
					float BodyVitality;//0x4C
					struct Flags
					{
						unsigned char Dead : 1;
						unsigned char Closed : 1;
						unsigned char NotEnterableByPlayer : 1;
						unsigned char bit3 : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}Flags;
					TAG_BLOCK_SIZE_ASSERT(Flags, 0x4);
					//0x50
				};
				TAG_BLOCK_SIZE_ASSERT(Bipeds, 0x54);
				Blam::Cache::DataTypes::Reflexive<Bipeds> Bipeds;//0x60
				struct BipedPalette
				{
					Blam::Cache::DataTypes::tagRef Biped;//0x0
					PAD(0x20);//0x8
				};
				TAG_BLOCK_SIZE_ASSERT(BipedPalette, 0x28);
				Blam::Cache::DataTypes::Reflexive<BipedPalette> BipedPalette;//0x68
				struct Vehicles
				{
					__int16 PaletteIndex;//0x0
					__int16 NameIndex;//0x2
					struct PlacementFlags
					{
						unsigned char NotAutomatically : 1;
						unsigned char NotOnEasy : 1;
						unsigned char NotOnNormal : 1;
						unsigned char NotOnHard : 1;
						unsigned char LockTypeToEnvObject : 1;
						unsigned char LockTransformToEnvObject : 1;
						unsigned char NeverPlaced : 1;
						unsigned char LockNameToEnvObject : 1;
						unsigned char CreateAtRest : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}PlacementFlags;
					TAG_BLOCK_SIZE_ASSERT(PlacementFlags, 0x4);
					//0x4
					float PositionX;//0x8
					float PositionY;//0xC
					float PositionZ;//0x10
					Blam::Maths::Real::Angle RotationI;//0x14
					Blam::Maths::Real::Angle RotationJ;//0x18
					Blam::Maths::Real::Angle RotationK;//0x1C
					float Scale;//0x20
					struct TransformFlags
					{
						unsigned char Mirrored : 1;
						unsigned char bit1 : 1;
						unsigned char bit2 : 1;
						unsigned char bit3 : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
						unsigned char bit14 : 1;
						unsigned char bit15 : 1;
					}TransformFlags;
					TAG_BLOCK_SIZE_ASSERT(TransformFlags, 0x2);
					//0x24
					struct ManualBSPFlags
					{
						unsigned char BSP0 : 1;
						unsigned char BSP1 : 1;
						unsigned char BSP2 : 1;
						unsigned char BSP3 : 1;
						unsigned char BSP4 : 1;
						unsigned char BSP5 : 1;
						unsigned char BSP6 : 1;
						unsigned char BSP7 : 1;
						unsigned char BSP8 : 1;
						unsigned char BSP9 : 1;
						unsigned char BSP10 : 1;
						unsigned char BSP11 : 1;
						unsigned char BSP12 : 1;
						unsigned char BSP13 : 1;
						unsigned char BSP14 : 1;
						unsigned char BSP15 : 1;
					}ManualBSPFlags;
					TAG_BLOCK_SIZE_ASSERT(ManualBSPFlags, 0x2);
					//0x26
					unsigned __int16 UniqueIDIndex;//0x28
					unsigned __int16 UniqueIDSalt;//0x2A
					__int16 OriginBSPIndex;//0x2C
					enum class Type : __int8
					{
						Biped = 0,
						Vehicle = 1,
						Weapon = 2,
						Equipment = 3,
						Garbage = 4,
						Projectile = 5,
						Scenery = 6,
						Machine = 7,
						Control = 8,
						LightFixture = 9,
						SoundScenery = 10,
						Crate = 11,
						Creature = 12,
					};
					Type Type;//0x2E
					enum class Source : __int8
					{
						Structure = 0,
						Editor = 1,
						Dynamic = 2,
						Legacy = 3,
					};
					Source Source;//0x2F
					enum class BSPPolicy : __int8
					{
						Default = 0,
						AlwaysPlaces = 1,
						ManualBSPPlacement = 2,
					};
					BSPPolicy BSPPolicy;//0x30
					__int8 Unknown;//0x31
					__int16 EditorFolder;//0x32
					Blam::Cache::DataTypes::StringID VariantName;//0x34
					struct ActiveChangeColors
					{
						unsigned char Primary : 1;
						unsigned char Secondary : 1;
						unsigned char Tertiary : 1;
						unsigned char Quaternary : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}ActiveChangeColors;
					TAG_BLOCK_SIZE_ASSERT(ActiveChangeColors, 0x4);
					//0x38
					PAD(0x10);//0x3C
					float BodyVitality;//0x4C
					struct Flags
					{
						unsigned char Dead : 1;
						unsigned char Closed : 1;
						unsigned char NotEnterableByPlayer : 1;
						unsigned char bit3 : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}Flags;
					TAG_BLOCK_SIZE_ASSERT(Flags, 0x4);
					//0x50
				};
				TAG_BLOCK_SIZE_ASSERT(Vehicles, 0x54);
				Blam::Cache::DataTypes::Reflexive<Vehicles> Vehicles;//0x70
				struct VehiclePalette
				{
					Blam::Cache::DataTypes::tagRef Vehicle;//0x0
					PAD(0x20);//0x8
				};
				TAG_BLOCK_SIZE_ASSERT(VehiclePalette, 0x28);
				Blam::Cache::DataTypes::Reflexive<VehiclePalette> VehiclePalette;//0x78
				struct Equipment
				{
					__int16 PaletteIndex;//0x0
					__int16 NameIndex;//0x2
					struct PlacementFlags
					{
						unsigned char NotAutomatically : 1;
						unsigned char NotOnEasy : 1;
						unsigned char NotOnNormal : 1;
						unsigned char NotOnHard : 1;
						unsigned char LockTypeToEnvObject : 1;
						unsigned char LockTransformToEnvObject : 1;
						unsigned char NeverPlaced : 1;
						unsigned char LockNameToEnvObject : 1;
						unsigned char CreateAtRest : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}PlacementFlags;
					TAG_BLOCK_SIZE_ASSERT(PlacementFlags, 0x4);
					//0x4
					float PositionX;//0x8
					float PositionY;//0xC
					float PositionZ;//0x10
					Blam::Maths::Real::Angle RotationI;//0x14
					Blam::Maths::Real::Angle RotationJ;//0x18
					Blam::Maths::Real::Angle RotationK;//0x1C
					float Scale;//0x20
					struct TransformFlags
					{
						unsigned char Mirrored : 1;
						unsigned char bit1 : 1;
						unsigned char bit2 : 1;
						unsigned char bit3 : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
						unsigned char bit14 : 1;
						unsigned char bit15 : 1;
					}TransformFlags;
					TAG_BLOCK_SIZE_ASSERT(TransformFlags, 0x2);
					//0x24
					struct ManualBSPFlags
					{
						unsigned char BSP0 : 1;
						unsigned char BSP1 : 1;
						unsigned char BSP2 : 1;
						unsigned char BSP3 : 1;
						unsigned char BSP4 : 1;
						unsigned char BSP5 : 1;
						unsigned char BSP6 : 1;
						unsigned char BSP7 : 1;
						unsigned char BSP8 : 1;
						unsigned char BSP9 : 1;
						unsigned char BSP10 : 1;
						unsigned char BSP11 : 1;
						unsigned char BSP12 : 1;
						unsigned char BSP13 : 1;
						unsigned char BSP14 : 1;
						unsigned char BSP15 : 1;
					}ManualBSPFlags;
					TAG_BLOCK_SIZE_ASSERT(ManualBSPFlags, 0x2);
					//0x26
					unsigned __int16 UniqueIDIndex;//0x28
					unsigned __int16 UniqueIDSalt;//0x2A
					__int16 OriginBSPIndex;//0x2C
					enum class Type : __int8
					{
						Biped = 0,
						Vehicle = 1,
						Weapon = 2,
						Equipment = 3,
						Garbage = 4,
						Projectile = 5,
						Scenery = 6,
						Machine = 7,
						Control = 8,
						LightFixture = 9,
						SoundScenery = 10,
						Crate = 11,
						Creature = 12,
					};
					Type Type;//0x2E
					enum class Source : __int8
					{
						Structure = 0,
						Editor = 1,
						Dynamic = 2,
						Legacy = 3,
					};
					Source Source;//0x2F
					enum class BSPPolicy : __int8
					{
						Default = 0,
						AlwaysPlaces = 1,
						ManualBSPPlacement = 2,
					};
					BSPPolicy BSPPolicy;//0x30
					__int8 Unknown;//0x31
					__int16 EditorFolder;//0x32
					struct EquipmentFlags
					{
						unsigned char InitiallyAtRestDoesNotFall : 1;
						unsigned char Bit1 : 1;
						unsigned char DoesAccelerateMovesDueToExplosions : 1;
						unsigned char bit3 : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}EquipmentFlags;
					TAG_BLOCK_SIZE_ASSERT(EquipmentFlags, 0x4);
					//0x34
				};
				TAG_BLOCK_SIZE_ASSERT(Equipment, 0x38);
				Blam::Cache::DataTypes::Reflexive<Equipment> Equipment;//0x80
				struct EquipmentPalette
				{
					Blam::Cache::DataTypes::tagRef Equipment;//0x0
					PAD(0x20);//0x8
				};
				TAG_BLOCK_SIZE_ASSERT(EquipmentPalette, 0x28);
				Blam::Cache::DataTypes::Reflexive<EquipmentPalette> EquipmentPalette;//0x88
				struct Weapons
				{
					__int16 PaletteIndex;//0x0
					__int16 NameIndex;//0x2
					struct PlacementFlags
					{
						unsigned char NotAutomatically : 1;
						unsigned char NotOnEasy : 1;
						unsigned char NotOnNormal : 1;
						unsigned char NotOnHard : 1;
						unsigned char LockTypeToEnvObject : 1;
						unsigned char LockTransformToEnvObject : 1;
						unsigned char NeverPlaced : 1;
						unsigned char LockNameToEnvObject : 1;
						unsigned char CreateAtRest : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}PlacementFlags;
					TAG_BLOCK_SIZE_ASSERT(PlacementFlags, 0x4);
					//0x4
					float PositionX;//0x8
					float PositionY;//0xC
					float PositionZ;//0x10
					Blam::Maths::Real::Angle RotationI;//0x14
					Blam::Maths::Real::Angle RotationJ;//0x18
					Blam::Maths::Real::Angle RotationK;//0x1C
					float Scale;//0x20
					struct TransformFlags
					{
						unsigned char Mirrored : 1;
						unsigned char bit1 : 1;
						unsigned char bit2 : 1;
						unsigned char bit3 : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
						unsigned char bit14 : 1;
						unsigned char bit15 : 1;
					}TransformFlags;
					TAG_BLOCK_SIZE_ASSERT(TransformFlags, 0x2);
					//0x24
					struct ManualBSPFlags
					{
						unsigned char BSP0 : 1;
						unsigned char BSP1 : 1;
						unsigned char BSP2 : 1;
						unsigned char BSP3 : 1;
						unsigned char BSP4 : 1;
						unsigned char BSP5 : 1;
						unsigned char BSP6 : 1;
						unsigned char BSP7 : 1;
						unsigned char BSP8 : 1;
						unsigned char BSP9 : 1;
						unsigned char BSP10 : 1;
						unsigned char BSP11 : 1;
						unsigned char BSP12 : 1;
						unsigned char BSP13 : 1;
						unsigned char BSP14 : 1;
						unsigned char BSP15 : 1;
					}ManualBSPFlags;
					TAG_BLOCK_SIZE_ASSERT(ManualBSPFlags, 0x2);
					//0x26
					unsigned __int16 UniqueIDIndex;//0x28
					unsigned __int16 UniqueIDSalt;//0x2A
					__int16 OriginBSPIndex;//0x2C
					enum class Type : __int8
					{
						Biped = 0,
						Vehicle = 1,
						Weapon = 2,
						Equipment = 3,
						Garbage = 4,
						Projectile = 5,
						Scenery = 6,
						Machine = 7,
						Control = 8,
						LightFixture = 9,
						SoundScenery = 10,
						Crate = 11,
						Creature = 12,
					};
					Type Type;//0x2E
					enum class Source : __int8
					{
						Structure = 0,
						Editor = 1,
						Dynamic = 2,
						Legacy = 3,
					};
					Source Source;//0x2F
					enum class BSPPolicy : __int8
					{
						Default = 0,
						AlwaysPlaces = 1,
						ManualBSPPlacement = 2,
					};
					BSPPolicy BSPPolicy;//0x30
					__int8 Unknown;//0x31
					__int16 EditorFolder;//0x32
					Blam::Cache::DataTypes::StringID VariantName;//0x34
					struct ActiveChangeColors
					{
						unsigned char Primary : 1;
						unsigned char Secondary : 1;
						unsigned char Tertiary : 1;
						unsigned char Quaternary : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}ActiveChangeColors;
					TAG_BLOCK_SIZE_ASSERT(ActiveChangeColors, 0x4);
					//0x38
					PAD(0x10);//0x3C
					__int16 RoundsLeft;//0x4C
					__int16 RoundsLoaded;//0x4E
					struct Flags
					{
						unsigned char InitiallyAtRestDoesNotFall : 1;
						unsigned char Bit1 : 1;
						unsigned char DoesAccelerateMovesDueToExplosions : 1;
						unsigned char bit3 : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}Flags;
					TAG_BLOCK_SIZE_ASSERT(Flags, 0x4);
					//0x50
				};
				TAG_BLOCK_SIZE_ASSERT(Weapons, 0x54);
				Blam::Cache::DataTypes::Reflexive<Weapons> Weapons;//0x90
				struct WeaponPalette
				{
					Blam::Cache::DataTypes::tagRef Weapon;//0x0
					PAD(0x20);//0x8
				};
				TAG_BLOCK_SIZE_ASSERT(WeaponPalette, 0x28);
				Blam::Cache::DataTypes::Reflexive<WeaponPalette> WeaponPalette;//0x98
				struct DeviceGroups
				{
					Blam::Cache::DataTypes::String32 Name;//0x0
					float InitalValue;//0x20
					struct Flags
					{
						unsigned char CanChangeOnlyOnce : 1;
						unsigned char bit1 : 1;
						unsigned char bit2 : 1;
						unsigned char bit3 : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}Flags;
					TAG_BLOCK_SIZE_ASSERT(Flags, 0x4);
					//0x24
				};
				TAG_BLOCK_SIZE_ASSERT(DeviceGroups, 0x28);
				Blam::Cache::DataTypes::Reflexive<DeviceGroups> DeviceGroups;//0xA0
				struct Machines
				{
					__int16 PaletteIndex;//0x0
					__int16 NameIndex;//0x2
					struct PlacementFlags
					{
						unsigned char NotAutomatically : 1;
						unsigned char NotOnEasy : 1;
						unsigned char NotOnNormal : 1;
						unsigned char NotOnHard : 1;
						unsigned char LockTypeToEnvObject : 1;
						unsigned char LockTransformToEnvObject : 1;
						unsigned char NeverPlaced : 1;
						unsigned char LockNameToEnvObject : 1;
						unsigned char CreateAtRest : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}PlacementFlags;
					TAG_BLOCK_SIZE_ASSERT(PlacementFlags, 0x4);
					//0x4
					float PositionX;//0x8
					float PositionY;//0xC
					float PositionZ;//0x10
					Blam::Maths::Real::Angle RotationI;//0x14
					Blam::Maths::Real::Angle RotationJ;//0x18
					Blam::Maths::Real::Angle RotationK;//0x1C
					float Scale;//0x20
					struct TransformFlags
					{
						unsigned char Mirrored : 1;
						unsigned char bit1 : 1;
						unsigned char bit2 : 1;
						unsigned char bit3 : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
						unsigned char bit14 : 1;
						unsigned char bit15 : 1;
					}TransformFlags;
					TAG_BLOCK_SIZE_ASSERT(TransformFlags, 0x2);
					//0x24
					struct ManualBSPFlags
					{
						unsigned char BSP0 : 1;
						unsigned char BSP1 : 1;
						unsigned char BSP2 : 1;
						unsigned char BSP3 : 1;
						unsigned char BSP4 : 1;
						unsigned char BSP5 : 1;
						unsigned char BSP6 : 1;
						unsigned char BSP7 : 1;
						unsigned char BSP8 : 1;
						unsigned char BSP9 : 1;
						unsigned char BSP10 : 1;
						unsigned char BSP11 : 1;
						unsigned char BSP12 : 1;
						unsigned char BSP13 : 1;
						unsigned char BSP14 : 1;
						unsigned char BSP15 : 1;
					}ManualBSPFlags;
					TAG_BLOCK_SIZE_ASSERT(ManualBSPFlags, 0x2);
					//0x26
					unsigned __int16 UniqueIDIndex;//0x28
					unsigned __int16 UniqueIDSalt;//0x2A
					__int16 OriginBSPIndex;//0x2C
					enum class Type : __int8
					{
						Biped = 0,
						Vehicle = 1,
						Weapon = 2,
						Equipment = 3,
						Garbage = 4,
						Projectile = 5,
						Scenery = 6,
						Machine = 7,
						Control = 8,
						LightFixture = 9,
						SoundScenery = 10,
						Crate = 11,
						Creature = 12,
					};
					Type Type;//0x2E
					enum class Source : __int8
					{
						Structure = 0,
						Editor = 1,
						Dynamic = 2,
						Legacy = 3,
					};
					Source Source;//0x2F
					enum class BSPPolicy : __int8
					{
						Default = 0,
						AlwaysPlaces = 1,
						ManualBSPPlacement = 2,
					};
					BSPPolicy BSPPolicy;//0x30
					__int8 Unknown;//0x31
					__int16 EditorFolder;//0x32
					__int16 PowerGroup;//0x34
					__int16 PositionGroup;//0x36
					struct Flags
					{
						unsigned char InitiallyOpen10 : 1;
						unsigned char InitiallyOff00 : 1;
						unsigned char CanChangeOnlyOnce : 1;
						unsigned char PositionReversed : 1;
						unsigned char NotUsableFromAnySide : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}Flags;
					TAG_BLOCK_SIZE_ASSERT(Flags, 0x4);
					//0x38
					struct Flags
					{
						unsigned char DoesNotOperateAutomatically : 1;
						unsigned char OneSided : 1;
						unsigned char NeverAppearsLocked : 1;
						unsigned char OpenedByMeleeAttack : 1;
						unsigned char OneSidedForPlayer : 1;
						unsigned char DoesNotCloseAutomatically : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}Flags;
					TAG_BLOCK_SIZE_ASSERT(Flags, 0x4);
					//0x3C
					struct PathfindingReferences
					{
						__int16 BSPIndex;//0x0
						__int16 PathfindingObjectIndex;//0x2
					};
					TAG_BLOCK_SIZE_ASSERT(PathfindingReferences, 0x4);
					Blam::Cache::DataTypes::Reflexive<PathfindingReferences> PathfindingReferences;//0x40
				};
				TAG_BLOCK_SIZE_ASSERT(Machines, 0x48);
				Blam::Cache::DataTypes::Reflexive<Machines> Machines;//0xA8
				struct MachinePalette
				{
					Blam::Cache::DataTypes::tagRef Machine;//0x0
					PAD(0x20);//0x8
				};
				TAG_BLOCK_SIZE_ASSERT(MachinePalette, 0x28);
				Blam::Cache::DataTypes::Reflexive<MachinePalette> MachinePalette;//0xB0
				struct Controls
				{
					__int16 PaletteIndex;//0x0
					__int16 NameIndex;//0x2
					struct PlacementFlags
					{
						unsigned char NotAutomatically : 1;
						unsigned char NotOnEasy : 1;
						unsigned char NotOnNormal : 1;
						unsigned char NotOnHard : 1;
						unsigned char LockTypeToEnvObject : 1;
						unsigned char LockTransformToEnvObject : 1;
						unsigned char NeverPlaced : 1;
						unsigned char LockNameToEnvObject : 1;
						unsigned char CreateAtRest : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}PlacementFlags;
					TAG_BLOCK_SIZE_ASSERT(PlacementFlags, 0x4);
					//0x4
					float PositionX;//0x8
					float PositionY;//0xC
					float PositionZ;//0x10
					Blam::Maths::Real::Angle RotationI;//0x14
					Blam::Maths::Real::Angle RotationJ;//0x18
					Blam::Maths::Real::Angle RotationK;//0x1C
					float Scale;//0x20
					struct TransformFlags
					{
						unsigned char Mirrored : 1;
						unsigned char bit1 : 1;
						unsigned char bit2 : 1;
						unsigned char bit3 : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
						unsigned char bit14 : 1;
						unsigned char bit15 : 1;
					}TransformFlags;
					TAG_BLOCK_SIZE_ASSERT(TransformFlags, 0x2);
					//0x24
					struct ManualBSPFlags
					{
						unsigned char BSP0 : 1;
						unsigned char BSP1 : 1;
						unsigned char BSP2 : 1;
						unsigned char BSP3 : 1;
						unsigned char BSP4 : 1;
						unsigned char BSP5 : 1;
						unsigned char BSP6 : 1;
						unsigned char BSP7 : 1;
						unsigned char BSP8 : 1;
						unsigned char BSP9 : 1;
						unsigned char BSP10 : 1;
						unsigned char BSP11 : 1;
						unsigned char BSP12 : 1;
						unsigned char BSP13 : 1;
						unsigned char BSP14 : 1;
						unsigned char BSP15 : 1;
					}ManualBSPFlags;
					TAG_BLOCK_SIZE_ASSERT(ManualBSPFlags, 0x2);
					//0x26
					unsigned __int16 UniqueIDIndex;//0x28
					unsigned __int16 UniqueIDSalt;//0x2A
					__int16 OriginBSPIndex;//0x2C
					enum class Type : __int8
					{
						Biped = 0,
						Vehicle = 1,
						Weapon = 2,
						Equipment = 3,
						Garbage = 4,
						Projectile = 5,
						Scenery = 6,
						Machine = 7,
						Control = 8,
						LightFixture = 9,
						SoundScenery = 10,
						Crate = 11,
						Creature = 12,
					};
					Type Type;//0x2E
					enum class Source : __int8
					{
						Structure = 0,
						Editor = 1,
						Dynamic = 2,
						Legacy = 3,
					};
					Source Source;//0x2F
					enum class BSPPolicy : __int8
					{
						Default = 0,
						AlwaysPlaces = 1,
						ManualBSPPlacement = 2,
					};
					BSPPolicy BSPPolicy;//0x30
					__int8 Unknown;//0x31
					__int16 EditorFolder;//0x32
					__int16 PowerGroup;//0x34
					__int16 PositionGroup;//0x36
					struct Flags
					{
						unsigned char InitiallyOpen10 : 1;
						unsigned char InitiallyOff00 : 1;
						unsigned char CanChangeOnlyOnce : 1;
						unsigned char PositionReversed : 1;
						unsigned char NotUsableFromAnySide : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}Flags;
					TAG_BLOCK_SIZE_ASSERT(Flags, 0x4);
					//0x38
					struct Flags
					{
						unsigned char UsableFromBothSides : 1;
						unsigned char bit1 : 1;
						unsigned char bit2 : 1;
						unsigned char bit3 : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}Flags;
					TAG_BLOCK_SIZE_ASSERT(Flags, 0x4);
					//0x3C
					__int16 DontTouchThis;//0x40
					__int16 Unknown;//0x42
				};
				TAG_BLOCK_SIZE_ASSERT(Controls, 0x44);
				Blam::Cache::DataTypes::Reflexive<Controls> Controls;//0xB8
				struct ControlPalette
				{
					Blam::Cache::DataTypes::tagRef Control;//0x0
					PAD(0x20);//0x8
				};
				TAG_BLOCK_SIZE_ASSERT(ControlPalette, 0x28);
				Blam::Cache::DataTypes::Reflexive<ControlPalette> ControlPalette;//0xC0
				struct LightFixtures
				{
					__int16 PaletteIndex;//0x0
					__int16 NameIndex;//0x2
					struct PlacementFlags
					{
						unsigned char NotAutomatically : 1;
						unsigned char NotOnEasy : 1;
						unsigned char NotOnNormal : 1;
						unsigned char NotOnHard : 1;
						unsigned char LockTypeToEnvObject : 1;
						unsigned char LockTransformToEnvObject : 1;
						unsigned char NeverPlaced : 1;
						unsigned char LockNameToEnvObject : 1;
						unsigned char CreateAtRest : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}PlacementFlags;
					TAG_BLOCK_SIZE_ASSERT(PlacementFlags, 0x4);
					//0x4
					float PositionX;//0x8
					float PositionY;//0xC
					float PositionZ;//0x10
					Blam::Maths::Real::Angle RotationI;//0x14
					Blam::Maths::Real::Angle RotationJ;//0x18
					Blam::Maths::Real::Angle RotationK;//0x1C
					float Scale;//0x20
					struct TransformFlags
					{
						unsigned char Mirrored : 1;
						unsigned char bit1 : 1;
						unsigned char bit2 : 1;
						unsigned char bit3 : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
						unsigned char bit14 : 1;
						unsigned char bit15 : 1;
					}TransformFlags;
					TAG_BLOCK_SIZE_ASSERT(TransformFlags, 0x2);
					//0x24
					struct ManualBSPFlags
					{
						unsigned char BSP0 : 1;
						unsigned char BSP1 : 1;
						unsigned char BSP2 : 1;
						unsigned char BSP3 : 1;
						unsigned char BSP4 : 1;
						unsigned char BSP5 : 1;
						unsigned char BSP6 : 1;
						unsigned char BSP7 : 1;
						unsigned char BSP8 : 1;
						unsigned char BSP9 : 1;
						unsigned char BSP10 : 1;
						unsigned char BSP11 : 1;
						unsigned char BSP12 : 1;
						unsigned char BSP13 : 1;
						unsigned char BSP14 : 1;
						unsigned char BSP15 : 1;
					}ManualBSPFlags;
					TAG_BLOCK_SIZE_ASSERT(ManualBSPFlags, 0x2);
					//0x26
					unsigned __int16 UniqueIDIndex;//0x28
					unsigned __int16 UniqueIDSalt;//0x2A
					__int16 OriginBSPIndex;//0x2C
					enum class Type : __int8
					{
						Biped = 0,
						Vehicle = 1,
						Weapon = 2,
						Equipment = 3,
						Garbage = 4,
						Projectile = 5,
						Scenery = 6,
						Machine = 7,
						Control = 8,
						LightFixture = 9,
						SoundScenery = 10,
						Crate = 11,
						Creature = 12,
					};
					Type Type;//0x2E
					enum class Source : __int8
					{
						Structure = 0,
						Editor = 1,
						Dynamic = 2,
						Legacy = 3,
					};
					Source Source;//0x2F
					enum class BSPPolicy : __int8
					{
						Default = 0,
						AlwaysPlaces = 1,
						ManualBSPPlacement = 2,
					};
					BSPPolicy BSPPolicy;//0x30
					__int8 Unknown;//0x31
					__int16 EditorFolder;//0x32
					__int16 PowerGroup;//0x34
					__int16 PositionGroup;//0x36
					struct Flags
					{
						unsigned char InitiallyOpen10 : 1;
						unsigned char InitiallyOff00 : 1;
						unsigned char CanChangeOnlyOnce : 1;
						unsigned char PositionReversed : 1;
						unsigned char NotUsableFromAnySide : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}Flags;
					TAG_BLOCK_SIZE_ASSERT(Flags, 0x4);
					//0x38
					float ColorRed;//0x3C
					float ColorGreen;//0x40
					float ColorBlue;//0x44
					float Intensity;//0x48
					Blam::Maths::Real::Angle FalloffAngle;//0x4C
					Blam::Maths::Real::Angle CutoffAngle;//0x50
				};
				TAG_BLOCK_SIZE_ASSERT(LightFixtures, 0x54);
				Blam::Cache::DataTypes::Reflexive<LightFixtures> LightFixtures;//0xC8
				struct LightFixturesPalette
				{
					Blam::Cache::DataTypes::tagRef LightFixture;//0x0
					PAD(0x20);//0x8
				};
				TAG_BLOCK_SIZE_ASSERT(LightFixturesPalette, 0x28);
				Blam::Cache::DataTypes::Reflexive<LightFixturesPalette> LightFixturesPalette;//0xD0
				struct SoundScenery
				{
					__int16 PaletteIndex;//0x0
					__int16 NameIndex;//0x2
					struct PlacementFlags
					{
						unsigned char NotAutomatically : 1;
						unsigned char NotOnEasy : 1;
						unsigned char NotOnNormal : 1;
						unsigned char NotOnHard : 1;
						unsigned char LockTypeToEnvObject : 1;
						unsigned char LockTransformToEnvObject : 1;
						unsigned char NeverPlaced : 1;
						unsigned char LockNameToEnvObject : 1;
						unsigned char CreateAtRest : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}PlacementFlags;
					TAG_BLOCK_SIZE_ASSERT(PlacementFlags, 0x4);
					//0x4
					float PositionX;//0x8
					float PositionY;//0xC
					float PositionZ;//0x10
					Blam::Maths::Real::Angle RotationI;//0x14
					Blam::Maths::Real::Angle RotationJ;//0x18
					Blam::Maths::Real::Angle RotationK;//0x1C
					float Scale;//0x20
					struct TransformFlags
					{
						unsigned char Mirrored : 1;
						unsigned char bit1 : 1;
						unsigned char bit2 : 1;
						unsigned char bit3 : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
						unsigned char bit14 : 1;
						unsigned char bit15 : 1;
					}TransformFlags;
					TAG_BLOCK_SIZE_ASSERT(TransformFlags, 0x2);
					//0x24
					struct ManualBSPFlags
					{
						unsigned char BSP0 : 1;
						unsigned char BSP1 : 1;
						unsigned char BSP2 : 1;
						unsigned char BSP3 : 1;
						unsigned char BSP4 : 1;
						unsigned char BSP5 : 1;
						unsigned char BSP6 : 1;
						unsigned char BSP7 : 1;
						unsigned char BSP8 : 1;
						unsigned char BSP9 : 1;
						unsigned char BSP10 : 1;
						unsigned char BSP11 : 1;
						unsigned char BSP12 : 1;
						unsigned char BSP13 : 1;
						unsigned char BSP14 : 1;
						unsigned char BSP15 : 1;
					}ManualBSPFlags;
					TAG_BLOCK_SIZE_ASSERT(ManualBSPFlags, 0x2);
					//0x26
					unsigned __int16 UniqueIDIndex;//0x28
					unsigned __int16 UniqueIDSalt;//0x2A
					__int16 OriginBSPIndex;//0x2C
					enum class Type : __int8
					{
						Biped = 0,
						Vehicle = 1,
						Weapon = 2,
						Equipment = 3,
						Garbage = 4,
						Projectile = 5,
						Scenery = 6,
						Machine = 7,
						Control = 8,
						LightFixture = 9,
						SoundScenery = 10,
						Crate = 11,
						Creature = 12,
					};
					Type Type;//0x2E
					enum class Source : __int8
					{
						Structure = 0,
						Editor = 1,
						Dynamic = 2,
						Legacy = 3,
					};
					Source Source;//0x2F
					enum class BSPPolicy : __int8
					{
						Default = 0,
						AlwaysPlaces = 1,
						ManualBSPPlacement = 2,
					};
					BSPPolicy BSPPolicy;//0x30
					__int8 Unknown;//0x31
					__int16 EditorFolder;//0x32
					enum class VolumeType : __int32
					{
						Sphere = 0,
						VerticalCylinder = 1,
					};
					VolumeType VolumeType;//0x34
					float Height;//0x38
					float OverrideDistanceBoundsMin;//0x3C
					float OverrideDistanceBoundsMax;//0x40
					Blam::Maths::Real::Angle OverrideConeAngleBoundsMin;//0x44
					Blam::Maths::Real::Angle OverrideConeAngleBoundsMax;//0x48
					float OverrideOuterConeGain;//0x4C
				};
				TAG_BLOCK_SIZE_ASSERT(SoundScenery, 0x50);
				Blam::Cache::DataTypes::Reflexive<SoundScenery> SoundScenery;//0xD8
				struct SoundSceneryPalette
				{
					Blam::Cache::DataTypes::tagRef SoundScenery;//0x0
					PAD(0x20);//0x8
				};
				TAG_BLOCK_SIZE_ASSERT(SoundSceneryPalette, 0x28);
				Blam::Cache::DataTypes::Reflexive<SoundSceneryPalette> SoundSceneryPalette;//0xE0
				struct LightVolumes
				{
					__int16 PaletteIndex;//0x0
					__int16 NameIndex;//0x2
					struct PlacementFlags
					{
						unsigned char NotAutomatically : 1;
						unsigned char NotOnEasy : 1;
						unsigned char NotOnNormal : 1;
						unsigned char NotOnHard : 1;
						unsigned char LockTypeToEnvObject : 1;
						unsigned char LockTransformToEnvObject : 1;
						unsigned char NeverPlaced : 1;
						unsigned char LockNameToEnvObject : 1;
						unsigned char CreateAtRest : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}PlacementFlags;
					TAG_BLOCK_SIZE_ASSERT(PlacementFlags, 0x4);
					//0x4
					float PositionX;//0x8
					float PositionY;//0xC
					float PositionZ;//0x10
					Blam::Maths::Real::Angle RotationI;//0x14
					Blam::Maths::Real::Angle RotationJ;//0x18
					Blam::Maths::Real::Angle RotationK;//0x1C
					float Scale;//0x20
					struct TransformFlags
					{
						unsigned char Mirrored : 1;
						unsigned char bit1 : 1;
						unsigned char bit2 : 1;
						unsigned char bit3 : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
						unsigned char bit14 : 1;
						unsigned char bit15 : 1;
					}TransformFlags;
					TAG_BLOCK_SIZE_ASSERT(TransformFlags, 0x2);
					//0x24
					struct ManualBSPFlags
					{
						unsigned char BSP0 : 1;
						unsigned char BSP1 : 1;
						unsigned char BSP2 : 1;
						unsigned char BSP3 : 1;
						unsigned char BSP4 : 1;
						unsigned char BSP5 : 1;
						unsigned char BSP6 : 1;
						unsigned char BSP7 : 1;
						unsigned char BSP8 : 1;
						unsigned char BSP9 : 1;
						unsigned char BSP10 : 1;
						unsigned char BSP11 : 1;
						unsigned char BSP12 : 1;
						unsigned char BSP13 : 1;
						unsigned char BSP14 : 1;
						unsigned char BSP15 : 1;
					}ManualBSPFlags;
					TAG_BLOCK_SIZE_ASSERT(ManualBSPFlags, 0x2);
					//0x26
					unsigned __int16 UniqueIDIndex;//0x28
					unsigned __int16 UniqueIDSalt;//0x2A
					__int16 OriginBSPIndex;//0x2C
					enum class Type : __int8
					{
						Biped = 0,
						Vehicle = 1,
						Weapon = 2,
						Equipment = 3,
						Garbage = 4,
						Projectile = 5,
						Scenery = 6,
						Machine = 7,
						Control = 8,
						LightFixture = 9,
						SoundScenery = 10,
						Crate = 11,
						Creature = 12,
					};
					Type Type;//0x2E
					enum class Source : __int8
					{
						Structure = 0,
						Editor = 1,
						Dynamic = 2,
						Legacy = 3,
					};
					Source Source;//0x2F
					enum class BSPPolicy : __int8
					{
						Default = 0,
						AlwaysPlaces = 1,
						ManualBSPPlacement = 2,
					};
					BSPPolicy BSPPolicy;//0x30
					__int8 Unknown;//0x31
					__int16 EditorFolder;//0x32
					__int16 PowerGroup;//0x34
					__int16 PositionGroup;//0x36
					struct Flags
					{
						unsigned char InitiallyOpen10 : 1;
						unsigned char InitiallyOff00 : 1;
						unsigned char CanChangeOnlyOnce : 1;
						unsigned char PositionReversed : 1;
						unsigned char NotUsableFromAnySide : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}Flags;
					TAG_BLOCK_SIZE_ASSERT(Flags, 0x4);
					//0x38
					enum class Type : __int16
					{
						Sphere = 0,
						Orthogonal = 1,
						Projective = 2,
						Pyramid = 3,
					};
					Type Type;//0x3C
					struct Flags
					{
						unsigned char CustomGeometry : 1;
						unsigned char Bit1 : 1;
						unsigned char CinematicOnly : 1;
						unsigned char bit3 : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
						unsigned char bit14 : 1;
						unsigned char bit15 : 1;
					}Flags;
					TAG_BLOCK_SIZE_ASSERT(Flags, 0x2);
					//0x3E
					enum class LightmapType : __int16
					{
						UseLightTagSetting = 0,
						DynamicOnly = 1,
						DynamicWithLightmaps = 2,
						LightmapsOnly = 3,
					};
					LightmapType LightmapType;//0x40
					struct LightmapFlags
					{
						unsigned char Bit0 : 1;
						unsigned char bit1 : 1;
						unsigned char bit2 : 1;
						unsigned char bit3 : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
						unsigned char bit14 : 1;
						unsigned char bit15 : 1;
					}LightmapFlags;
					TAG_BLOCK_SIZE_ASSERT(LightmapFlags, 0x2);
					//0x42
					float LightmapHalfLife;//0x44
					float LightmapLightScale;//0x48
					float TargetPointX;//0x4C
					float TargetPointY;//0x50
					float TargetPointZ;//0x54
					float Width;//0x58
					float HeightScale;//0x5C
					Blam::Maths::Real::Angle FieldOfView;//0x60
					float FalloffDistance;//0x64
					float CutoffDistance;//0x68
				};
				TAG_BLOCK_SIZE_ASSERT(LightVolumes, 0x6C);
				Blam::Cache::DataTypes::Reflexive<LightVolumes> LightVolumes;//0xE8
				struct LightVolumesPalette
				{
					Blam::Cache::DataTypes::tagRef LightVolume;//0x0
					PAD(0x20);//0x8
				};
				TAG_BLOCK_SIZE_ASSERT(LightVolumesPalette, 0x28);
				Blam::Cache::DataTypes::Reflexive<LightVolumesPalette> LightVolumesPalette;//0xF0
				struct PlayerStartingProfile
				{
					Blam::Cache::DataTypes::String32 Name;//0x0
					float StartingHealthDamage;//0x20
					float StartingShieldDamage;//0x24
					Blam::Cache::DataTypes::tagRef PrimaryWeapon;//0x28
					__int16 RoundsLoaded;//0x30
					__int16 RoundsTotal;//0x32
					Blam::Cache::DataTypes::tagRef SecondaryWeapon;//0x34
					__int16 RoundsLoaded;//0x3C
					__int16 RoundsTotal;//0x3E
					unsigned __int8 StartingFragGrenadeCount;//0x40
					unsigned __int8 StartingPlasmaGrenadeCount;//0x41
					unsigned __int8 StartingUnusedGrenadeCount;//0x42
					unsigned __int8 StartingUnusedGrenadeCount;//0x43
				};
				TAG_BLOCK_SIZE_ASSERT(PlayerStartingProfile, 0x44);
				Blam::Cache::DataTypes::Reflexive<PlayerStartingProfile> PlayerStartingProfile;//0xF8
				struct PlayerStartingLocations
				{
					float PositionX;//0x0
					float PositionY;//0x4
					float PositionZ;//0x8
					Blam::Maths::Real::Angle Facing;//0xC
					enum class TeamDesignator : __int16
					{
						Red = 0,
						Blue = 1,
						Yellow = 2,
						Green = 3,
						Purple = 4,
						Orange = 5,
						Brown = 6,
						Pink = 7,
						Neutral = 8,
					};
					TeamDesignator TeamDesignator;//0x10
					__int16 BSPIndex;//0x12
					enum class GameType1 : __int16
					{
						None = 0,
						CaptureTheFlag = 1,
						Slayer = 2,
						Oddball = 3,
						KingOfTheHill = 4,
						Race = 5,
						Juggernaut = 6,
						Territories = 7,
						Assault = 8,
						Ignored3 = 9,
						Ignored4 = 10,
						AllGameTypes = 11,
						AllExceptCTF = 12,
						AllExceptCTFAndRace = 13,
					};
					GameType1 GameType1;//0x14
					enum class GameType2 : __int16
					{
						None = 0,
						CaptureTheFlag = 1,
						Slayer = 2,
						Oddball = 3,
						KingOfTheHill = 4,
						Race = 5,
						Juggernaut = 6,
						Territories = 7,
						Assault = 8,
						Ignored3 = 9,
						Ignored4 = 10,
						AllGameTypes = 11,
						AllExceptCTF = 12,
						AllExceptCTFAndRace = 13,
					};
					GameType2 GameType2;//0x16
					enum class GameType3 : __int16
					{
						None = 0,
						CaptureTheFlag = 1,
						Slayer = 2,
						Oddball = 3,
						KingOfTheHill = 4,
						Race = 5,
						Juggernaut = 6,
						Territories = 7,
						Assault = 8,
						Ignored3 = 9,
						Ignored4 = 10,
						AllGameTypes = 11,
						AllExceptCTF = 12,
						AllExceptCTFAndRace = 13,
					};
					GameType3 GameType3;//0x18
					enum class GameType4 : __int16
					{
						None = 0,
						CaptureTheFlag = 1,
						Slayer = 2,
						Oddball = 3,
						KingOfTheHill = 4,
						Race = 5,
						Juggernaut = 6,
						Territories = 7,
						Assault = 8,
						Ignored3 = 9,
						Ignored4 = 10,
						AllGameTypes = 11,
						AllExceptCTF = 12,
						AllExceptCTFAndRace = 13,
					};
					GameType4 GameType4;//0x1A
					enum class SpawnType1 : __int16
					{
						Both = 0,
						InitialSpawnOnly = 1,
						RespawnOnly = 2,
					};
					SpawnType1 SpawnType1;//0x1C
					enum class SpawnType2 : __int16
					{
						Both = 0,
						InitialSpawnOnly = 1,
						RespawnOnly = 2,
					};
					SpawnType2 SpawnType2;//0x1E
					enum class SpawnType3 : __int16
					{
						Both = 0,
						InitialSpawnOnly = 1,
						RespawnOnly = 2,
					};
					SpawnType3 SpawnType3;//0x20
					enum class SpawnType4 : __int16
					{
						Both = 0,
						InitialSpawnOnly = 1,
						RespawnOnly = 2,
					};
					SpawnType4 SpawnType4;//0x22
					Blam::Cache::DataTypes::StringID Unknown;//0x24
					Blam::Cache::DataTypes::StringID Unknown;//0x28
					enum class CampaignPlayerType : __int16
					{
						Masterchief = 0,
						Dervish = 1,
						ChiefMultiplayer = 2,
						EliteMultiplayer = 3,
					};
					CampaignPlayerType CampaignPlayerType;//0x2C
					__int16 Unknown;//0x2E
					PAD(0x4);//0x30
				};
				TAG_BLOCK_SIZE_ASSERT(PlayerStartingLocations, 0x34);
				Blam::Cache::DataTypes::Reflexive<PlayerStartingLocations> PlayerStartingLocations;//0x100
				struct TriggerVolumes
				{
					Blam::Cache::DataTypes::StringID Name;//0x0
					__int16 ObjectName;//0x4
					__int16 Unknown;//0x6
					Blam::Cache::DataTypes::StringID NodeName;//0x8
					float Unknown;//0xC
					float Unknown;//0x10
					float Unknown;//0x14
					float Unknown;//0x18
					float Unknown;//0x1C
					float Unknown;//0x20
					float Unknown;//0x24
					float PositionX;//0x28
					float PositionY;//0x2C
					float PositionZ;//0x30
					float ExtentsX;//0x34
					float ExtentsY;//0x38
					float ExtentsZ;//0x3C
					__int16 KillVolume;//0x40
					__int16 Unknown;//0x42
				};
				TAG_BLOCK_SIZE_ASSERT(TriggerVolumes, 0x44);
				Blam::Cache::DataTypes::Reflexive<TriggerVolumes> TriggerVolumes;//0x108
				PAD(0x8);//0x110
				struct NetgameFlags
				{
					float PositionX;//0x0
					float PositionY;//0x4
					float PositionZ;//0x8
					Blam::Maths::Real::Angle Facing;//0xC
					enum class Type : __int16
					{
						CTFFlagSpawn = 0,
						CTFFlagReturn = 1,
						AssaultBombSpawn = 2,
						AssaultBombReturn = 3,
						OddballSpawn = 4,
						Unused = 5,
						RaceCheckpoint = 6,
						TeleporterSource = 7,
						TeleporterDestination = 8,
						HeadhunterBin = 9,
						TerritoriesFlag = 10,
						KingHill0 = 11,
						KingHill1 = 12,
						KingHill2 = 13,
						KingHill3 = 14,
						KingHill4 = 15,
						KingHill5 = 16,
						KingHill6 = 17,
						KingHill7 = 18,
					};
					Type Type;//0x10
					enum class TeamDesignator : __int16
					{
						Red = 0,
						Blue = 1,
						Yellow = 2,
						Green = 3,
						Purple = 4,
						Orange = 5,
						Brown = 6,
						Pink = 7,
						Neutral = 8,
					};
					TeamDesignator TeamDesignator;//0x12
					__int16 Identifier;//0x14
					struct Flags
					{
						unsigned char MultipleFlagBomb : 1;
						unsigned char SingleFlagBomb : 1;
						unsigned char NeutralFlagBomb : 1;
						unsigned char bit3 : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
						unsigned char bit14 : 1;
						unsigned char bit15 : 1;
					}Flags;
					TAG_BLOCK_SIZE_ASSERT(Flags, 0x2);
					//0x16
					Blam::Cache::DataTypes::StringID Unknown;//0x18
					Blam::Cache::DataTypes::StringID Unknown;//0x1C
				};
				TAG_BLOCK_SIZE_ASSERT(NetgameFlags, 0x20);
				Blam::Cache::DataTypes::Reflexive<NetgameFlags> NetgameFlags;//0x118
				struct NetgameEquipment
				{
					struct Flags
					{
						unsigned char Levitate : 1;
						unsigned char DestroyExistingOnNewSpawn : 1;
						unsigned char bit2 : 1;
						unsigned char bit3 : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}Flags;
					TAG_BLOCK_SIZE_ASSERT(Flags, 0x4);
					//0x0
					enum class GameType1 : __int16
					{
						None = 0,
						CaptureTheFlag = 1,
						Slayer = 2,
						Oddball = 3,
						KingOfTheHill = 4,
						Race = 5,
						Juggernaut = 6,
						Territories = 7,
						Assault = 8,
						Ignored3 = 9,
						Ignored4 = 10,
						AllGameTypes = 11,
						AllExceptCTF = 12,
						AllExceptCTFAndRace = 13,
					};
					GameType1 GameType1;//0x4
					enum class GameType2 : __int16
					{
						None = 0,
						CaptureTheFlag = 1,
						Slayer = 2,
						Oddball = 3,
						KingOfTheHill = 4,
						Race = 5,
						Juggernaut = 6,
						Territories = 7,
						Assault = 8,
						Ignored3 = 9,
						Ignored4 = 10,
						AllGameTypes = 11,
						AllExceptCTF = 12,
						AllExceptCTFAndRace = 13,
					};
					GameType2 GameType2;//0x6
					enum class GameType3 : __int16
					{
						None = 0,
						CaptureTheFlag = 1,
						Slayer = 2,
						Oddball = 3,
						KingOfTheHill = 4,
						Race = 5,
						Juggernaut = 6,
						Territories = 7,
						Assault = 8,
						Ignored3 = 9,
						Ignored4 = 10,
						AllGameTypes = 11,
						AllExceptCTF = 12,
						AllExceptCTFAndRace = 13,
					};
					GameType3 GameType3;//0x8
					enum class GameType4 : __int16
					{
						None = 0,
						CaptureTheFlag = 1,
						Slayer = 2,
						Oddball = 3,
						KingOfTheHill = 4,
						Race = 5,
						Juggernaut = 6,
						Territories = 7,
						Assault = 8,
						Ignored3 = 9,
						Ignored4 = 10,
						AllGameTypes = 11,
						AllExceptCTF = 12,
						AllExceptCTFAndRace = 13,
					};
					GameType4 GameType4;//0xA
					__int16 TeamIndex;//0xC
					__int16 SpawnTime;//0xE
					__int16 RespawnOnEmptyTime;//0x10
					enum class RespawnTimerStarts : __int16
					{
						OnPickUp = 0,
						OnBodyDepletion = 1,
					};
					RespawnTimerStarts RespawnTimerStarts;//0x12
					enum class Classification : __int8
					{
						Weapon = 0,
						PrimaryLightLand = 1,
						SecondaryLightLand = 2,
						PrimaryHeavyLand = 3,
						PrimaryFlying = 4,
						SeconaryHeavyLand = 5,
						PrimaryTurret = 6,
						SecondaryTurret = 7,
						Grenade = 8,
						Powerup = 9,
					};
					Classification Classification;//0x14
					__int8 Unknown;//0x15
					__int8 Unknown;//0x16
					__int8 Unknown;//0x17
					PAD(0x28);//0x18
					float PositionX;//0x40
					float PositionY;//0x44
					float PositionZ;//0x48
					Blam::Maths::Real::Angle OrientationI;//0x4C
					Blam::Maths::Real::Angle OrientationJ;//0x50
					Blam::Maths::Real::Angle OrientationK;//0x54
					Blam::Cache::DataTypes::tagRef ItemVehicleCollection;//0x58
					PAD(0x30);//0x60
				};
				TAG_BLOCK_SIZE_ASSERT(NetgameEquipment, 0x90);
				Blam::Cache::DataTypes::Reflexive<NetgameEquipment> NetgameEquipment;//0x120
				struct StartingEquipment
				{
					struct StartingGrenades
					{
						unsigned char NoGrenades : 1;
						unsigned char PlasmaGrenades : 1;
						unsigned char bit2 : 1;
						unsigned char bit3 : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}StartingGrenades;
					TAG_BLOCK_SIZE_ASSERT(StartingGrenades, 0x4);
					//0x0
					enum class GameType1 : __int16
					{
						None = 0,
						CaptureTheFlag = 1,
						Slayer = 2,
						Oddball = 3,
						KingOfTheHill = 4,
						Race = 5,
						Juggernaut = 6,
						Territories = 7,
						Assault = 8,
						Ignored3 = 9,
						Ignored4 = 10,
						AllGameTypes = 11,
						AllExceptCTF = 12,
						AllExceptCTFAndRace = 13,
					};
					GameType1 GameType1;//0x4
					enum class GameType2 : __int16
					{
						None = 0,
						CaptureTheFlag = 1,
						Slayer = 2,
						Oddball = 3,
						KingOfTheHill = 4,
						Race = 5,
						Juggernaut = 6,
						Territories = 7,
						Assault = 8,
						Ignored3 = 9,
						Ignored4 = 10,
						AllGameTypes = 11,
						AllExceptCTF = 12,
						AllExceptCTFAndRace = 13,
					};
					GameType2 GameType2;//0x6
					enum class GameType3 : __int16
					{
						None = 0,
						CaptureTheFlag = 1,
						Slayer = 2,
						Oddball = 3,
						KingOfTheHill = 4,
						Race = 5,
						Juggernaut = 6,
						Territories = 7,
						Assault = 8,
						Ignored3 = 9,
						Ignored4 = 10,
						AllGameTypes = 11,
						AllExceptCTF = 12,
						AllExceptCTFAndRace = 13,
					};
					GameType3 GameType3;//0x8
					enum class GameType4 : __int16
					{
						None = 0,
						CaptureTheFlag = 1,
						Slayer = 2,
						Oddball = 3,
						KingOfTheHill = 4,
						Race = 5,
						Juggernaut = 6,
						Territories = 7,
						Assault = 8,
						Ignored3 = 9,
						Ignored4 = 10,
						AllGameTypes = 11,
						AllExceptCTF = 12,
						AllExceptCTFAndRace = 13,
					};
					GameType4 GameType4;//0xA
					PAD(0x30);//0xC
					Blam::Cache::DataTypes::tagRef ItemCollection1;//0x3C
					Blam::Cache::DataTypes::tagRef ItemCollection2;//0x44
					Blam::Cache::DataTypes::tagRef ItemCollection3;//0x4C
					Blam::Cache::DataTypes::tagRef ItemCollection4;//0x54
					Blam::Cache::DataTypes::tagRef ItemCollection5;//0x5C
					Blam::Cache::DataTypes::tagRef ItemCollection6;//0x64
					PAD(0x30);//0x6C
				};
				TAG_BLOCK_SIZE_ASSERT(StartingEquipment, 0x9C);
				Blam::Cache::DataTypes::Reflexive<StartingEquipment> StartingEquipment;//0x128
				struct BSPSwitchTriggerVolumes
				{
					__int16 TriggerVolume;//0x0
					__int16 SourceBSP;//0x2
					__int16 DestinationBSP;//0x4
					__int16 Unknown;//0x6
					__int16 Unknown;//0x8
					__int16 Unknown;//0xA
					__int16 Unknown;//0xC
				};
				TAG_BLOCK_SIZE_ASSERT(BSPSwitchTriggerVolumes, 0xE);
				Blam::Cache::DataTypes::Reflexive<BSPSwitchTriggerVolumes> BSPSwitchTriggerVolumes;//0x130
				struct Decals
				{
					__int16 PaletteIndex;//0x0
					__int8 Yaw;//0x2
					__int8 Pitch;//0x3
					float PositionX;//0x4
					float PositionY;//0x8
					float PositionZ;//0xC
				};
				TAG_BLOCK_SIZE_ASSERT(Decals, 0x10);
				Blam::Cache::DataTypes::Reflexive<Decals> Decals;//0x138
				struct DecalPalette
				{
					Blam::Cache::DataTypes::tagRef Decal;//0x0
				};
				TAG_BLOCK_SIZE_ASSERT(DecalPalette, 0x8);
				Blam::Cache::DataTypes::Reflexive<DecalPalette> DecalPalette;//0x140
				struct DetailObjectCollectionPalette
				{
					Blam::Cache::DataTypes::tagRef DetailObjectCollection;//0x0
				};
				TAG_BLOCK_SIZE_ASSERT(DetailObjectCollectionPalette, 0x8);
				Blam::Cache::DataTypes::Reflexive<DetailObjectCollectionPalette> DetailObjectCollectionPalette;//0x148
				struct StylePalette
				{
					Blam::Cache::DataTypes::tagRef Style;//0x0
				};
				TAG_BLOCK_SIZE_ASSERT(StylePalette, 0x8);
				Blam::Cache::DataTypes::Reflexive<StylePalette> StylePalette;//0x150
				struct SquadGroups
				{
					Blam::Cache::DataTypes::String32 SquadType;//0x0
					__int16 Parent;//0x20
					__int16 InitialOrder;//0x22
				};
				TAG_BLOCK_SIZE_ASSERT(SquadGroups, 0x24);
				Blam::Cache::DataTypes::Reflexive<SquadGroups> SquadGroups;//0x158
				struct Squads
				{
					Blam::Cache::DataTypes::String32 Name;//0x0
					struct Flags
					{
						unsigned char Bit0 : 1;
						unsigned char NeverSearch : 1;
						unsigned char StartTimerImmediately : 1;
						unsigned char NoTimerDelayForever : 1;
						unsigned char MagicSightAfterTimer : 1;
						unsigned char AutomaticMigration : 1;
						unsigned char Bit6 : 1;
						unsigned char RespawnEnabled : 1;
						unsigned char Blind : 1;
						unsigned char Deaf : 1;
						unsigned char Braindead : 1;
						unsigned char NUM_3DFiringPositions : 1;
						unsigned char InitiallyPlaced : 1;
						unsigned char UnitsNotEnterableByPlayer : 1;
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
					}Flags;
					TAG_BLOCK_SIZE_ASSERT(Flags, 0x4);
					//0x20
					enum class Team : __int16
					{
						Default = 0,
						Player = 1,
						Human = 2,
						Covenant = 3,
						Flood = 4,
						Sentinel = 5,
						Heretic = 6,
						Prophet = 7,
						Unused8 = 8,
						Unused9 = 9,
						Unused10 = 10,
						Unused11 = 11,
						Unused12 = 12,
						Unused13 = 13,
						Unused14 = 14,
						Unused15 = 15,
					};
					Team Team;//0x24
					__int16 ParentSquadGroup;//0x26
					float SquadDelayTime;//0x28
					__int16 NormalDifficultyCount;//0x2C
					__int16 LegendaryDifficultyCount;//0x2E
					enum class MajorUpgrade : __int16
					{
						Normal = 0,
						Few = 1,
						Many = 2,
						None = 3,
						All = 4,
					};
					MajorUpgrade MajorUpgrade;//0x30
					__int16 Unknown;//0x32
					__int16 VehicleIndex;//0x34
					__int16 CharacterIndex;//0x36
					__int16 InitialZone;//0x38
					__int16 Unknown;//0x3A
					__int16 PrimaryWeaponIndex;//0x3C
					__int16 SecondaryWeaponIndex;//0x3E
					enum class GrenadeType : __int16
					{
						None = 0,
						HumanFragmentation = 1,
						CovenantPlasma = 2,
					};
					GrenadeType GrenadeType;//0x40
					__int16 InitialOrder;//0x42
					Blam::Cache::DataTypes::StringID VehicleVariant;//0x44
					struct StartingLoctations
					{
						Blam::Cache::DataTypes::StringID Name;//0x0
						float PositionX;//0x4
						float PositionY;//0x8
						float PositionZ;//0xC
						__int16 ReferenceFrame;//0x10
						__int16 Unknown;//0x12
						Blam::Maths::Real::Angle FacingY;//0x14
						Blam::Maths::Real::Angle FacingP;//0x18
						struct Flags
						{
							unsigned char InitiallyAsleep : 1;
							unsigned char InfectionFormExplode : 1;
							unsigned char Bit2 : 1;
							unsigned char AlwaysPlace : 1;
							unsigned char InitiallyHidden : 1;
							unsigned char bit5 : 1;
							unsigned char bit6 : 1;
							unsigned char bit7 : 1;
							unsigned char bit8 : 1;
							unsigned char bit9 : 1;
							unsigned char bit10 : 1;
							unsigned char bit11 : 1;
							unsigned char bit12 : 1;
							unsigned char bit13 : 1;
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
						}Flags;
						TAG_BLOCK_SIZE_ASSERT(Flags, 0x4);
						//0x1C
						__int16 CharacterIndex;//0x20
						__int16 PrimaryWeaponIndex;//0x22
						__int16 SecondaryWeaponIndex;//0x24
						__int16 Unknown;//0x26
						__int16 VehicleIndex;//0x28
						enum class SeatType : __int16
						{
							Default = 0,
							Passenger = 1,
							Gunner = 2,
							Driver = 3,
							SmallCargo = 4,
							LargeCargo = 5,
							NoDriver = 6,
							NoVehicle = 7,
						};
						SeatType SeatType;//0x2A
						enum class GrenadeType : __int16
						{
							None = 0,
							HumanFragmentation = 1,
							CovenantPlasma = 2,
						};
						GrenadeType GrenadeType;//0x2C
						__int16 SwarmCount;//0x2E
						Blam::Cache::DataTypes::StringID ActorVariant;//0x30
						Blam::Cache::DataTypes::StringID VehicleVariant;//0x34
						float InitialMovementDistance;//0x38
						__int16 EmitterVehicleIndex;//0x3C
						enum class InitialMovementMode : __int16
						{
							Default = 0,
							Climbing = 1,
							Flying = 2,
						};
						InitialMovementMode InitialMovementMode;//0x3E
						Blam::Cache::DataTypes::String32 PlacementScript;//0x40
						__int16 ScriptIndex;//0x60
						__int16 Unknown;//0x62
					};
					TAG_BLOCK_SIZE_ASSERT(StartingLoctations, 0x64);
					Blam::Cache::DataTypes::Reflexive<StartingLoctations> StartingLoctations;//0x48
					Blam::Cache::DataTypes::String32 PlacementScript;//0x50
					__int16 ScriptIndex;//0x70
					__int16 Unknown;//0x72
				};
				TAG_BLOCK_SIZE_ASSERT(Squads, 0x74);
				Blam::Cache::DataTypes::Reflexive<Squads> Squads;//0x160
				struct Zones
				{
					Blam::Cache::DataTypes::String32 Name;//0x0
					struct Flags
					{
						unsigned char ManualBSPIndex : 1;
						unsigned char bit1 : 1;
						unsigned char bit2 : 1;
						unsigned char bit3 : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}Flags;
					TAG_BLOCK_SIZE_ASSERT(Flags, 0x4);
					//0x20
					__int16 ManualBSPIndex;//0x24
					__int16 Unknown;//0x26
					struct FiringPositions
					{
						float PositionX;//0x0
						float PositionY;//0x4
						float PositionZ;//0x8
						__int16 ReferenceFrame;//0xC
						struct Flags
						{
							unsigned char Open : 1;
							unsigned char Partial : 1;
							unsigned char Closed : 1;
							unsigned char Mobile : 1;
							unsigned char WallLean : 1;
							unsigned char Perch : 1;
							unsigned char GroundPoint : 1;
							unsigned char DynamicCoverPoint : 1;
							unsigned char bit8 : 1;
							unsigned char bit9 : 1;
							unsigned char bit10 : 1;
							unsigned char bit11 : 1;
							unsigned char bit12 : 1;
							unsigned char bit13 : 1;
							unsigned char bit14 : 1;
							unsigned char bit15 : 1;
						}Flags;
						TAG_BLOCK_SIZE_ASSERT(Flags, 0x2);
						//0xE
						__int16 AreaIndex;//0x10
						__int16 ClusterIndex;//0x12
						__int16 Unknown;//0x14
						__int16 Unknown;//0x16
						Blam::Maths::Real::Angle NormalY;//0x18
						Blam::Maths::Real::Angle NormalP;//0x1C
					};
					TAG_BLOCK_SIZE_ASSERT(FiringPositions, 0x20);
					Blam::Cache::DataTypes::Reflexive<FiringPositions> FiringPositions;//0x28
					struct Areas
					{
						Blam::Cache::DataTypes::String32 Name;//0x0
						struct AreaFlags
						{
							unsigned char VehicleArea : 1;
							unsigned char Perch : 1;
							unsigned char ManualReferenceFrame : 1;
							unsigned char bit3 : 1;
							unsigned char bit4 : 1;
							unsigned char bit5 : 1;
							unsigned char bit6 : 1;
							unsigned char bit7 : 1;
							unsigned char bit8 : 1;
							unsigned char bit9 : 1;
							unsigned char bit10 : 1;
							unsigned char bit11 : 1;
							unsigned char bit12 : 1;
							unsigned char bit13 : 1;
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
						}AreaFlags;
						TAG_BLOCK_SIZE_ASSERT(AreaFlags, 0x4);
						//0x20
						float PositionX;//0x24
						float PositionY;//0x28
						float PositionZ;//0x2C
						__int16 Unknown;//0x30
						__int16 Unknown;//0x32
						float Unknown;//0x34
						__int16 FiringPositionStartIndex;//0x38
						__int16 FiringPositionCount;//0x3A
						__int16 Unknown;//0x3C
						__int16 Unknown;//0x3E
						PAD(0x4);//0x40
						__int8 Unknown;//0x44
						__int8 Unknown;//0x45
						__int8 Unknown;//0x46
						__int8 Unknown;//0x47
						__int16 Unknown;//0x48
						__int16 Unknown;//0x4A
						PAD(0x4);//0x4C
						float Unknown;//0x50
						float Unknown;//0x54
						float Unknown;//0x58
						float Unknown;//0x5C
						float Unknown;//0x60
						float Unknown;//0x64
						float Unknown;//0x68
						float Unknown;//0x6C
						float Unknown;//0x70
						float Unknown;//0x74
						float Unknown;//0x78
						__int16 ManualReferenceFrame;//0x7C
						__int16 Unknown;//0x7E
						struct FlightHints
						{
							__int16 FlightHintIndex;//0x0
							__int16 PoitIndex;//0x2
						};
						TAG_BLOCK_SIZE_ASSERT(FlightHints, 0x4);
						Blam::Cache::DataTypes::Reflexive<FlightHints> FlightHints;//0x80
					};
					TAG_BLOCK_SIZE_ASSERT(Areas, 0x88);
					Blam::Cache::DataTypes::Reflexive<Areas> Areas;//0x30
				};
				TAG_BLOCK_SIZE_ASSERT(Zones, 0x38);
				Blam::Cache::DataTypes::Reflexive<Zones> Zones;//0x168
				struct MissionScenes
				{
					Blam::Cache::DataTypes::StringID Name;//0x0
					struct Flags
					{
						unsigned char SceneCanPlayMultipleTimes : 1;
						unsigned char EnableCombatDialogue : 1;
						unsigned char bit2 : 1;
						unsigned char bit3 : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}Flags;
					TAG_BLOCK_SIZE_ASSERT(Flags, 0x4);
					//0x4
					struct TriggerConditions
					{
						enum class CombinationRule : __int16
						{
							Or = 0,
							And = 1,
						};
						CombinationRule CombinationRule;//0x0
						__int16 Unknown;//0x2
						struct Triggers
						{
							struct TriggerFlags
							{
								unsigned char Not : 1;
								unsigned char bit1 : 1;
								unsigned char bit2 : 1;
								unsigned char bit3 : 1;
								unsigned char bit4 : 1;
								unsigned char bit5 : 1;
								unsigned char bit6 : 1;
								unsigned char bit7 : 1;
								unsigned char bit8 : 1;
								unsigned char bit9 : 1;
								unsigned char bit10 : 1;
								unsigned char bit11 : 1;
								unsigned char bit12 : 1;
								unsigned char bit13 : 1;
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
							}TriggerFlags;
							TAG_BLOCK_SIZE_ASSERT(TriggerFlags, 0x4);
							//0x0
							__int16 TriggerIndex;//0x4
							__int16 Unknown;//0x6
						};
						TAG_BLOCK_SIZE_ASSERT(Triggers, 0x8);
						Blam::Cache::DataTypes::Reflexive<Triggers> Triggers;//0x4
					};
					TAG_BLOCK_SIZE_ASSERT(TriggerConditions, 0xC);
					Blam::Cache::DataTypes::Reflexive<TriggerConditions> TriggerConditions;//0x8
					struct Roles
					{
						Blam::Cache::DataTypes::StringID Name;//0x0
						enum class Group : __int16
						{
							Group1 = 0,
							Group2 = 1,
							Group3 = 2,
						};
						Group Group;//0x4
						__int16 Unknown;//0x6
						struct RoleVariants
						{
							Blam::Cache::DataTypes::StringID VariantDesignation;//0x0
						};
						TAG_BLOCK_SIZE_ASSERT(RoleVariants, 0x4);
						Blam::Cache::DataTypes::Reflexive<RoleVariants> RoleVariants;//0x8
					};
					TAG_BLOCK_SIZE_ASSERT(Roles, 0x10);
					Blam::Cache::DataTypes::Reflexive<Roles> Roles;//0x10
				};
				TAG_BLOCK_SIZE_ASSERT(MissionScenes, 0x18);
				Blam::Cache::DataTypes::Reflexive<MissionScenes> MissionScenes;//0x170
				struct CharacterPalette
				{
					Blam::Cache::DataTypes::tagRef Character;//0x0
				};
				TAG_BLOCK_SIZE_ASSERT(CharacterPalette, 0x8);
				Blam::Cache::DataTypes::Reflexive<CharacterPalette> CharacterPalette;//0x178
				PAD(0x28);//0x180
				Blam::Cache::DataTypes::dataRef ScriptSyntaxData;//0x1A8
				Blam::Cache::DataTypes::dataRef ScriptStringData;//0x1B0
				struct Scripts
				{
					Blam::Cache::DataTypes::String32 Name;//0x0
					enum class ScriptType : __int16
					{
						Startup = 0,
						Dormant = 1,
						Continuous = 2,
						Static = 3,
						Stub = 4,
					};
					ScriptType ScriptType;//0x20
					enum class ReturnType : __int16
					{
						Unparsed = 0,
						SpecialForm = 1,
						FunctionName = 2,
						Passthrough = 3,
						Void = 4,
						Boolean = 5,
						Real = 6,
						Short = 7,
						Long = 8,
						String = 9,
						Script = 10,
						String_id = 11,
						Unit_seat_mapping = 12,
						Trigger_volume = 13,
						Cutscene_flag = 14,
						Cutscene_camera_point = 15,
						Cutscene_title = 16,
						Cutscene_recording = 17,
						Device_group = 18,
						Ai = 19,
						Ai_command_list = 20,
						Ai_command_script = 21,
						Ai_behavior = 22,
						Ai_orders = 23,
						Starting_profile = 24,
						Conversation = 25,
						Structure_bsp = 26,
						Navpoint = 27,
						PointReference = 28,
						Style = 29,
						Hud_message = 30,
						Object_list = 31,
						Sound = 32,
						Effect = 33,
						Damage = 34,
						Looping_sound = 35,
						Animation_graph = 36,
						Damage_effect = 37,
						Object_definition = 38,
						Bitmap = 39,
						Shader = 40,
						RenderModel = 41,
						StructureDefinition = 42,
						LightmapDefinition = 43,
						Game_difficulty = 44,
						Team = 45,
						Actor_type = 46,
						Hud_corner = 47,
						Model_state = 48,
						Network_event = 49,
						Object = 50,
						Unit = 51,
						Vehicle = 52,
						Weapon = 53,
						Device = 54,
						Scenery = 55,
						Object_name = 56,
						Unit_name = 57,
						Vehicle_name = 58,
						Weapon_name = 59,
						Device_name = 60,
						Scenery_name = 61,
					};
					ReturnType ReturnType;//0x22
					__int16 RootExpressionIndex;//0x24
					__int16 RootExpressionSalt;//0x26
				};
				TAG_BLOCK_SIZE_ASSERT(Scripts, 0x28);
				Blam::Cache::DataTypes::Reflexive<Scripts> Scripts;//0x1B8
				struct Globals
				{
					Blam::Cache::DataTypes::String32 Name;//0x0
					enum class Type : __int16
					{
						Unparsed = 0,
						SpecialForm = 1,
						FunctionName = 2,
						Passthrough = 3,
						Void = 4,
						Boolean = 5,
						Real = 6,
						Short = 7,
						Long = 8,
						String = 9,
						Script = 10,
						String_id = 11,
						Unit_seat_mapping = 12,
						Trigger_volume = 13,
						Cutscene_flag = 14,
						Cutscene_camera_point = 15,
						Cutscene_title = 16,
						Cutscene_recording = 17,
						Device_group = 18,
						Ai = 19,
						Ai_command_list = 20,
						Ai_command_script = 21,
						Ai_behavior = 22,
						Ai_orders = 23,
						Starting_profile = 24,
						Conversation = 25,
						Structure_bsp = 26,
						Navpoint = 27,
						PointReference = 28,
						Style = 29,
						Hud_message = 30,
						Object_list = 31,
						Sound = 32,
						Effect = 33,
						Damage = 34,
						Looping_sound = 35,
						Animation_graph = 36,
						Damage_effect = 37,
						Object_definition = 38,
						Bitmap = 39,
						Shader = 40,
						RenderModel = 41,
						StructureDefinition = 42,
						LightmapDefinition = 43,
						Game_difficulty = 44,
						Team = 45,
						Actor_type = 46,
						Hud_corner = 47,
						Model_state = 48,
						Network_event = 49,
						Object = 50,
						Unit = 51,
						Vehicle = 52,
						Weapon = 53,
						Device = 54,
						Scenery = 55,
						Object_name = 56,
						Unit_name = 57,
						Vehicle_name = 58,
						Weapon_name = 59,
						Device_name = 60,
						Scenery_name = 61,
					};
					Type Type;//0x20
					__int16 Unknown;//0x22
					__int16 InitializationExpressionIndex;//0x24
					__int16 InitializationExpressionSalt;//0x26
				};
				TAG_BLOCK_SIZE_ASSERT(Globals, 0x28);
				Blam::Cache::DataTypes::Reflexive<Globals> Globals;//0x1C0
				struct ScriptReferences
				{
					Blam::Cache::DataTypes::tagRef Reference;//0x0
				};
				TAG_BLOCK_SIZE_ASSERT(ScriptReferences, 0x8);
				Blam::Cache::DataTypes::Reflexive<ScriptReferences> ScriptReferences;//0x1C8
				PAD(0x8);//0x1D0
				struct ScriptingData
				{
					struct PointSets
					{
						Blam::Cache::DataTypes::String32 Name;//0x0
						struct Points
						{
							Blam::Cache::DataTypes::String32 Name;//0x0
							float PositionX;//0x20
							float PositionY;//0x24
							float PositionZ;//0x28
							__int16 ReferenceFrame;//0x2C
							__int16 Unknown;//0x2E
							__int32 SurfaceIndex;//0x30
							float FacingDirectionY;//0x34
							float FacingDirectionP;//0x38
						};
						TAG_BLOCK_SIZE_ASSERT(Points, 0x3C);
						Blam::Cache::DataTypes::Reflexive<Points> Points;//0x20
						__int16 BSPIndex;//0x28
						__int16 ManualReferenceFrame;//0x2A
						struct Flags
						{
							unsigned char ManualReferenceFrame : 1;
							unsigned char TurretDeployment : 1;
							unsigned char bit2 : 1;
							unsigned char bit3 : 1;
							unsigned char bit4 : 1;
							unsigned char bit5 : 1;
							unsigned char bit6 : 1;
							unsigned char bit7 : 1;
							unsigned char bit8 : 1;
							unsigned char bit9 : 1;
							unsigned char bit10 : 1;
							unsigned char bit11 : 1;
							unsigned char bit12 : 1;
							unsigned char bit13 : 1;
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
						}Flags;
						TAG_BLOCK_SIZE_ASSERT(Flags, 0x4);
						//0x2C
					};
					TAG_BLOCK_SIZE_ASSERT(PointSets, 0x30);
					Blam::Cache::DataTypes::Reflexive<PointSets> PointSets;//0x0
					PAD(0x78);//0x8
				};
				TAG_BLOCK_SIZE_ASSERT(ScriptingData, 0x80);
				Blam::Cache::DataTypes::Reflexive<ScriptingData> ScriptingData;//0x1D8
				struct CutsceneFlags
				{
					PAD(0x4);//0x0
					Blam::Cache::DataTypes::String32 Name;//0x4
					float PositionX;//0x24
					float PositionY;//0x28
					float PositionZ;//0x2C
					Blam::Maths::Real::Angle FacingY;//0x30
					Blam::Maths::Real::Angle FacingP;//0x34
				};
				TAG_BLOCK_SIZE_ASSERT(CutsceneFlags, 0x38);
				Blam::Cache::DataTypes::Reflexive<CutsceneFlags> CutsceneFlags;//0x1E0
				struct CutsceneCameraPoints
				{
					struct Flags
					{
						unsigned char EditAsRelative : 1;
						unsigned char bit1 : 1;
						unsigned char bit2 : 1;
						unsigned char bit3 : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
						unsigned char bit14 : 1;
						unsigned char bit15 : 1;
					}Flags;
					TAG_BLOCK_SIZE_ASSERT(Flags, 0x2);
					//0x0
					enum class Type : __int16
					{
						Normal = 0,
						IgnoreTargetOrientation = 1,
						Dolly = 2,
						IgnoreTargetUpdates = 3,
					};
					Type Type;//0x2
					Blam::Cache::DataTypes::String32 Name;//0x4
					float PositionX;//0x24
					float PositionY;//0x28
					float PositionZ;//0x2C
					Blam::Maths::Real::Angle OrientationY;//0x30
					Blam::Maths::Real::Angle OrientationP;//0x34
					Blam::Maths::Real::Angle OrientationR;//0x38
					float Unknown;//0x3C
				};
				TAG_BLOCK_SIZE_ASSERT(CutsceneCameraPoints, 0x40);
				Blam::Cache::DataTypes::Reflexive<CutsceneCameraPoints> CutsceneCameraPoints;//0x1E8
				struct CutsceneTitles
				{
					Blam::Cache::DataTypes::StringID Name;//0x0
					__int16 TextBoundsTop;//0x4
					__int16 TextBoundsLeft;//0x6
					__int16 TextBoundsBottom;//0x8
					__int16 TextBoundsRight;//0xA
					enum class Justification : __int8
					{
						Left = 0,
						Right = 1,
						Center = 2,
						CustomTextEntry = 3,
					};
					Justification Justification;//0xC
					PAD(0x1);//0xD
					enum class Font : __int16
					{
						TerminalFont = 0,
						BodyTextFont = 1,
						TitleFont = 2,
						SuperLargeFont = 3,
						LargeBodyTextFont = 4,
						SplitScreenHudMessageFont = 5,
						FullScreenHudMessageFont = 6,
						EnglishBodyTextFont = 7,
						HudNumberFont = 8,
						SubtitleFont = 9,
						MainMenuFont = 10,
						TextChatFont = 11,
					};
					Font Font;//0xE
					PAD(0x8);//0x10
					float FadeInTime;//0x18
					float UpTime;//0x1C
					float FadeOutTime;//0x20
				};
				TAG_BLOCK_SIZE_ASSERT(CutsceneTitles, 0x24);
				Blam::Cache::DataTypes::Reflexive<CutsceneTitles> CutsceneTitles;//0x1F0
				Blam::Cache::DataTypes::tagRef CustomObjectNames;//0x1F8
				Blam::Cache::DataTypes::tagRef ChapterTitleText;//0x200
				Blam::Cache::DataTypes::tagRef HUDMessages;//0x208
				struct StructureBSPs
				{
					unsigned __int32 StructureBSPOffset;//0x0
					unsigned __int32 StructureBSPSize;//0x4
					unsigned __int32 PrimaryMagicMetaOffset;//0x8
					PAD(0x4);//0xC
					Blam::Cache::DataTypes::tagRef StructureBSP;//0x10
					Blam::Cache::DataTypes::tagRef StructureLightmap;//0x18
					PAD(0x4);//0x20
					float UnusedRadianceEstimatedSearchDistance;//0x24
					PAD(0x4);//0x28
					float UnusedLuminelsPerWorldUnit;//0x2C
					float UnusedOutputWhiteReference;//0x30
					PAD(0x8);//0x34
					struct Flags
					{
						unsigned char DefaultSkyEnabled : 1;
						unsigned char bit1 : 1;
						unsigned char bit2 : 1;
						unsigned char bit3 : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
						unsigned char bit14 : 1;
						unsigned char bit15 : 1;
					}Flags;
					TAG_BLOCK_SIZE_ASSERT(Flags, 0x2);
					//0x3C
					__int16 Unknown;//0x3E
					__int16 DefaultSky;//0x40
					__int16 Unknown;//0x42
				};
				TAG_BLOCK_SIZE_ASSERT(StructureBSPs, 0x44);
				Blam::Cache::DataTypes::Reflexive<StructureBSPs> StructureBSPs;//0x210
				struct ScenarioResources
				{
					struct References
					{
						Blam::Cache::DataTypes::tagRef Reference;//0x0
					};
					TAG_BLOCK_SIZE_ASSERT(References, 0x8);
					Blam::Cache::DataTypes::Reflexive<References> References;//0x0
					struct ScriptSource
					{
						Blam::Cache::DataTypes::tagRef Reference;//0x0
					};
					TAG_BLOCK_SIZE_ASSERT(ScriptSource, 0x8);
					Blam::Cache::DataTypes::Reflexive<ScriptSource> ScriptSource;//0x8
					struct AIResources
					{
						Blam::Cache::DataTypes::tagRef Reference;//0x0
					};
					TAG_BLOCK_SIZE_ASSERT(AIResources, 0x8);
					Blam::Cache::DataTypes::Reflexive<AIResources> AIResources;//0x10
				};
				TAG_BLOCK_SIZE_ASSERT(ScenarioResources, 0x18);
				Blam::Cache::DataTypes::Reflexive<ScenarioResources> ScenarioResources;//0x218
				struct StructurePhysics
				{
					Blam::Cache::DataTypes::dataRef MOPPCode;//0x0
					struct EnvironmentObjectIdentifiers
					{
						unsigned __int16 UniqueIDIndex;//0x0
						unsigned __int16 UniqueIDSalt;//0x2
						__int16 OriginBSPIndex;//0x4
						enum class Type : __int8
						{
							Biped = 0,
							Vehicle = 1,
							Weapon = 2,
							Equipment = 3,
							Garbage = 4,
							Projectile = 5,
							Scenery = 6,
							Machine = 7,
							Control = 8,
							LightFixture = 9,
							SoundScenery = 10,
							Crate = 11,
							Creature = 12,
						};
						Type Type;//0x6
						enum class Source : __int8
						{
							Structure = 0,
							Editor = 1,
							Dynamic = 2,
							Legacy = 3,
						};
						Source Source;//0x7
					};
					TAG_BLOCK_SIZE_ASSERT(EnvironmentObjectIdentifiers, 0x8);
					Blam::Cache::DataTypes::Reflexive<EnvironmentObjectIdentifiers> EnvironmentObjectIdentifiers;//0x8
					PAD(0x4);//0x10
					float MOPPBoundsMinX;//0x14
					float MOPPBoundsMinY;//0x18
					float MOPPBoundsMinZ;//0x1C
					float MOPPBoundsMaxX;//0x20
					float MOPPBoundsMaxY;//0x24
					float MOPPBoundsMaxZ;//0x28
				};
				TAG_BLOCK_SIZE_ASSERT(StructurePhysics, 0x2C);
				Blam::Cache::DataTypes::Reflexive<StructurePhysics> StructurePhysics;//0x220
				struct UnitSeatsMapping
				{
					Blam::Cache::DataTypes::tagRefN Unit;//0x0
					struct Seats
					{
						unsigned char Seat0 : 1;
						unsigned char Seat1 : 1;
						unsigned char Seat2 : 1;
						unsigned char Seat3 : 1;
						unsigned char Seat4 : 1;
						unsigned char Seat5 : 1;
						unsigned char Seat6 : 1;
						unsigned char Seat7 : 1;
						unsigned char Seat8 : 1;
						unsigned char Seat9 : 1;
						unsigned char Seat10 : 1;
						unsigned char Seat11 : 1;
						unsigned char Seat12 : 1;
						unsigned char Seat13 : 1;
						unsigned char Seat14 : 1;
						unsigned char Seat15 : 1;
						unsigned char Seat16 : 1;
						unsigned char Seat17 : 1;
						unsigned char Seat18 : 1;
						unsigned char Seat19 : 1;
						unsigned char Seat20 : 1;
						unsigned char Seat21 : 1;
						unsigned char Seat22 : 1;
						unsigned char Seat23 : 1;
						unsigned char Seat24 : 1;
						unsigned char Seat25 : 1;
						unsigned char Seat26 : 1;
						unsigned char Seat27 : 1;
						unsigned char Seat28 : 1;
						unsigned char Seat29 : 1;
						unsigned char Seat30 : 1;
						unsigned char Seat31 : 1;
					}Seats;
					TAG_BLOCK_SIZE_ASSERT(Seats, 0x4);
					//0x4
				};
				TAG_BLOCK_SIZE_ASSERT(UnitSeatsMapping, 0x8);
				Blam::Cache::DataTypes::Reflexive<UnitSeatsMapping> UnitSeatsMapping;//0x228
				struct ScenarioKillTriggers
				{
					__int16 TriggerVolume;//0x0
				};
				TAG_BLOCK_SIZE_ASSERT(ScenarioKillTriggers, 0x2);
				Blam::Cache::DataTypes::Reflexive<ScenarioKillTriggers> ScenarioKillTriggers;//0x230
				struct ScriptExpressions
				{
					__int16 DatumHeader;//0x0
					__int16 ScriptIndexFunctionIndexConstantTypeUnion;//0x2
					enum class Type : __int16
					{
						Unparsed = 0,
						SpecialForm = 1,
						FunctionName = 2,
						Passthrough = 3,
						Viod = 4,
						Boolean = 5,
						Real = 6,
						Short = 7,
						Long = 8,
						String = 9,
						Script = 10,
						TriggerVolume = 11,
						CutsceneFlag = 12,
						CutsceneCameraPoint = 13,
						CutsceneTitle = 14,
						CutsceneRecording = 15,
						DeviceGroup = 16,
						AI = 17,
						AICommandList = 18,
						StartingProfile = 19,
						Conversation = 20,
						Navpoint = 21,
						HudMessage = 22,
						ObjectList = 23,
						Sound = 24,
						Effect = 25,
						Damage = 26,
						LoopingSound = 27,
						AnimationGraph = 28,
						ActorVariant = 29,
						DammgeEffect = 30,
						ObjectDefinition = 31,
						GameDifficulty = 32,
						Team = 33,
						AIDefaultState = 34,
						ActorType = 35,
						HudCorner = 36,
						Object = 37,
						Unit = 38,
						Vehicle = 39,
						Weapon = 40,
						Device = 41,
						Scenery = 42,
						ObjectName = 43,
						UnitName = 44,
						VehicleName = 45,
						WeaponName = 46,
						DeviceName = 47,
						SceneryName = 48,
					};
					Type Type;//0x4
					__int16 Flags;//0x6
					unsigned __int16 NextNodeIndex;//0x8
					unsigned __int16 NextNodeSalt;//0xA
					__int32 Data;//0xC
					unsigned __int16 SourceOffsetIndex;//0x10
					unsigned __int16 SourceOffsetSalt;//0x12
				};
				TAG_BLOCK_SIZE_ASSERT(ScriptExpressions, 0x14);
				Blam::Cache::DataTypes::Reflexive<ScriptExpressions> ScriptExpressions;//0x238
				struct Orders
				{
					Blam::Cache::DataTypes::String32 Name;//0x0
					__int16 StyleIndex;//0x20
					__int16 Unknown;//0x22
					struct Flags
					{
						unsigned char Locked : 1;
						unsigned char AlwaysActive : 1;
						unsigned char DebugOn : 1;
						unsigned char StrictAreaDef : 1;
						unsigned char FollowClosestPlayer : 1;
						unsigned char FollowSquad : 1;
						unsigned char ActiveCamo : 1;
						unsigned char SuppressCombatUntilEngaged : 1;
						unsigned char InhibitVehicleUse : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}Flags;
					TAG_BLOCK_SIZE_ASSERT(Flags, 0x4);
					//0x24
					enum class ForceCombatStatus : __int16
					{
						None = 0,
						Asleep = 1,
						Idle = 2,
						Alert = 3,
						Combat = 4,
					};
					ForceCombatStatus ForceCombatStatus;//0x28
					__int16 Unknown;//0x2A
					Blam::Cache::DataTypes::String32 EntryScript;//0x2C
					__int16 ScriptIndex;//0x4C
					__int16 FollowSquadIndex;//0x4E
					float FollowRadius;//0x50
					struct PrimaryAreaSet
					{
						enum class AreaType : __int16
						{
							Default = 0,
							Search = 1,
							Goal = 2,
						};
						AreaType AreaType;//0x0
						__int16 Unknown;//0x2
						__int16 ZoneIndex;//0x4
						__int16 AreaIndex;//0x6
					};
					TAG_BLOCK_SIZE_ASSERT(PrimaryAreaSet, 0x8);
					Blam::Cache::DataTypes::Reflexive<PrimaryAreaSet> PrimaryAreaSet;//0x54
					struct SecondaryAreaSet
					{
						enum class AreaType : __int16
						{
							Default = 0,
							Search = 1,
							Goal = 2,
						};
						AreaType AreaType;//0x0
						__int16 Unknown;//0x2
						__int16 ZoneIndex;//0x4
						__int16 AreaIndex;//0x6
					};
					TAG_BLOCK_SIZE_ASSERT(SecondaryAreaSet, 0x8);
					Blam::Cache::DataTypes::Reflexive<SecondaryAreaSet> SecondaryAreaSet;//0x5C
					struct SecondarySetTrigger
					{
						enum class CombinationRule : __int16
						{
							Or = 0,
							And = 1,
						};
						CombinationRule CombinationRule;//0x0
						enum class DialogueType : __int16
						{
							None = 0,
							Advance = 1,
							Charge = 2,
							FallBack = 3,
							Retreat = 4,
							Moveone = 5,
							Arrival = 6,
							EnterVehicle = 7,
							ExitVehicle = 8,
							FollowPlayer = 9,
							LeavePlayer = 10,
							Support = 11,
						};
						DialogueType DialogueType;//0x2
						struct Triggers
						{
							struct TriggerFlags
							{
								unsigned char Not : 1;
								unsigned char bit1 : 1;
								unsigned char bit2 : 1;
								unsigned char bit3 : 1;
								unsigned char bit4 : 1;
								unsigned char bit5 : 1;
								unsigned char bit6 : 1;
								unsigned char bit7 : 1;
								unsigned char bit8 : 1;
								unsigned char bit9 : 1;
								unsigned char bit10 : 1;
								unsigned char bit11 : 1;
								unsigned char bit12 : 1;
								unsigned char bit13 : 1;
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
							}TriggerFlags;
							TAG_BLOCK_SIZE_ASSERT(TriggerFlags, 0x4);
							//0x0
							__int16 TriggerIndex;//0x4
							__int16 Unknown;//0x6
						};
						TAG_BLOCK_SIZE_ASSERT(Triggers, 0x8);
						Blam::Cache::DataTypes::Reflexive<Triggers> Triggers;//0x4
					};
					TAG_BLOCK_SIZE_ASSERT(SecondarySetTrigger, 0xC);
					Blam::Cache::DataTypes::Reflexive<SecondarySetTrigger> SecondarySetTrigger;//0x64
					struct SpecialMovement
					{
						struct SpecialMovement1
						{
							unsigned char Jump : 1;
							unsigned char Climb : 1;
							unsigned char Vault : 1;
							unsigned char Mount : 1;
							unsigned char Hoist : 1;
							unsigned char WallJump : 1;
							unsigned char Bit6 : 1;
							unsigned char bit7 : 1;
							unsigned char bit8 : 1;
							unsigned char bit9 : 1;
							unsigned char bit10 : 1;
							unsigned char bit11 : 1;
							unsigned char bit12 : 1;
							unsigned char bit13 : 1;
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
						}SpecialMovement1;
						TAG_BLOCK_SIZE_ASSERT(SpecialMovement1, 0x4);
						//0x0
					};
					TAG_BLOCK_SIZE_ASSERT(SpecialMovement, 0x4);
					Blam::Cache::DataTypes::Reflexive<SpecialMovement> SpecialMovement;//0x6C
					struct OrderEndings
					{
						__int16 NextOrderIndex;//0x0
						enum class CombinationRule : __int16
						{
							Or = 0,
							And = 1,
						};
						CombinationRule CombinationRule;//0x2
						float DelayTime;//0x4
						enum class DialogueType : __int16
						{
							None = 0,
							Advance = 1,
							Charge = 2,
							FallBack = 3,
							Retreat = 4,
							Moveone = 5,
							Arrival = 6,
							EnterVehicle = 7,
							ExitVehicle = 8,
							FollowPlayer = 9,
							LeavePlayer = 10,
							Support = 11,
						};
						DialogueType DialogueType;//0x8
						__int16 Unknown;//0xA
						struct Triggers
						{
							struct TriggerFlags
							{
								unsigned char Not : 1;
								unsigned char bit1 : 1;
								unsigned char bit2 : 1;
								unsigned char bit3 : 1;
								unsigned char bit4 : 1;
								unsigned char bit5 : 1;
								unsigned char bit6 : 1;
								unsigned char bit7 : 1;
								unsigned char bit8 : 1;
								unsigned char bit9 : 1;
								unsigned char bit10 : 1;
								unsigned char bit11 : 1;
								unsigned char bit12 : 1;
								unsigned char bit13 : 1;
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
							}TriggerFlags;
							TAG_BLOCK_SIZE_ASSERT(TriggerFlags, 0x4);
							//0x0
							__int16 TriggerIndex;//0x4
							__int16 Unknown;//0x6
						};
						TAG_BLOCK_SIZE_ASSERT(Triggers, 0x8);
						Blam::Cache::DataTypes::Reflexive<Triggers> Triggers;//0xC
					};
					TAG_BLOCK_SIZE_ASSERT(OrderEndings, 0x14);
					Blam::Cache::DataTypes::Reflexive<OrderEndings> OrderEndings;//0x74
				};
				TAG_BLOCK_SIZE_ASSERT(Orders, 0x7C);
				Blam::Cache::DataTypes::Reflexive<Orders> Orders;//0x240
				struct AITriggers
				{
					Blam::Cache::DataTypes::String32 Name;//0x0
					struct TriggerFlags
					{
						unsigned char LatchOnWhenTriggered : 1;
						unsigned char bit1 : 1;
						unsigned char bit2 : 1;
						unsigned char bit3 : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}TriggerFlags;
					TAG_BLOCK_SIZE_ASSERT(TriggerFlags, 0x4);
					//0x20
					enum class CombinationRule : __int16
					{
						Or = 0,
						And = 1,
					};
					CombinationRule CombinationRule;//0x24
					__int16 Unknown;//0x26
					struct Conditions
					{
						enum class RuleType : __int16
						{
							AOrGreaterAlive = 0,
							AOrFewerAlive = 1,
							XOrGreaterStrength = 2,
							XOrLessStrength = 3,
							IfEnemySighted = 4,
							AfterATicks = 5,
							IfAlertedBySquadA = 6,
							ScriptReferenceTrue = 7,
							ScriptReferenceFalse = 8,
							IfPlayerInTriggerVolume = 9,
							IfAllPlayersInTriggerVolume = 10,
							CombatStatusAOrMore = 11,
							CombatStatusAOrLess = 12,
							Arrived = 13,
							InVehicle = 14,
							SightedPlayer = 15,
							AOrGreaterFighting = 16,
							AOrFewerFighting = 17,
							PlayerWithinXWorldUnits = 18,
							PlayerShotMoreThanXSecondsAgo = 19,
							GameSafeToSave = 20,
						};
						RuleType RuleType;//0x0
						__int16 Squad;//0x2
						__int16 SquadGroup;//0x4
						__int16 A;//0x6
						float X;//0x8
						__int16 TriggerVolume;//0xC
						__int16 Unknown;//0xE
						Blam::Cache::DataTypes::String32 ExitConditionScript;//0x10
						__int16 ExitConditionScriptIndex;//0x30
						__int16 Unknown;//0x32
						struct Flags
						{
							unsigned char Not : 1;
							unsigned char bit1 : 1;
							unsigned char bit2 : 1;
							unsigned char bit3 : 1;
							unsigned char bit4 : 1;
							unsigned char bit5 : 1;
							unsigned char bit6 : 1;
							unsigned char bit7 : 1;
							unsigned char bit8 : 1;
							unsigned char bit9 : 1;
							unsigned char bit10 : 1;
							unsigned char bit11 : 1;
							unsigned char bit12 : 1;
							unsigned char bit13 : 1;
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
						}Flags;
						TAG_BLOCK_SIZE_ASSERT(Flags, 0x4);
						//0x34
					};
					TAG_BLOCK_SIZE_ASSERT(Conditions, 0x38);
					Blam::Cache::DataTypes::Reflexive<Conditions> Conditions;//0x28
				};
				TAG_BLOCK_SIZE_ASSERT(AITriggers, 0x30);
				Blam::Cache::DataTypes::Reflexive<AITriggers> AITriggers;//0x248
				struct BackgroundSoundPalette
				{
					Blam::Cache::DataTypes::String32 Name;//0x0
					Blam::Cache::DataTypes::tagRef BackgroundSound;//0x20
					Blam::Cache::DataTypes::tagRef InsideClusterSound;//0x28
					PAD(0x14);//0x30
					float CutoffDistance;//0x44
					struct ScaleFlags
					{
						unsigned char OverrideDefaultScale : 1;
						unsigned char UseAdjacentClusterAsPortalScale : 1;
						unsigned char UseAdjacentClusterAsExteriorScale : 1;
						unsigned char ScaleWithWeatherIntensity : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}ScaleFlags;
					TAG_BLOCK_SIZE_ASSERT(ScaleFlags, 0x4);
					//0x48
					float InteriorScale;//0x4C
					float PortalScale;//0x50
					float ExteriorScale;//0x54
					float InterpolationSpeed;//0x58
					PAD(0x8);//0x5C
				};
				TAG_BLOCK_SIZE_ASSERT(BackgroundSoundPalette, 0x64);
				Blam::Cache::DataTypes::Reflexive<BackgroundSoundPalette> BackgroundSoundPalette;//0x250
				struct SoundEnvironmentPalette
				{
					Blam::Cache::DataTypes::String32 Name;//0x0
					Blam::Cache::DataTypes::tagRef SoundEnvironment;//0x20
					float CutoffDistance;//0x28
					float InterpolationSpeed;//0x2C
					PAD(0x18);//0x30
				};
				TAG_BLOCK_SIZE_ASSERT(SoundEnvironmentPalette, 0x48);
				Blam::Cache::DataTypes::Reflexive<SoundEnvironmentPalette> SoundEnvironmentPalette;//0x258
				struct WeatherPalette
				{
					Blam::Cache::DataTypes::String32 Name;//0x0
					Blam::Cache::DataTypes::tagRef WeatherSystem;//0x20
					__int16 Unknown;//0x28
					__int16 Unknown;//0x2A
					PAD(0x20);//0x2C
					Blam::Cache::DataTypes::tagRef Wind;//0x4C
					Blam::Maths::Real::Angle WindDirectionI;//0x54
					Blam::Maths::Real::Angle WindDirectionJ;//0x58
					Blam::Maths::Real::Angle WindDirectionK;//0x5C
					float WindMagnitude;//0x60
					PAD(0x4);//0x64
					Blam::Cache::DataTypes::String32 WindScaleFunction;//0x68
				};
				TAG_BLOCK_SIZE_ASSERT(WeatherPalette, 0x88);
				Blam::Cache::DataTypes::Reflexive<WeatherPalette> WeatherPalette;//0x260
				PAD(0x28);//0x268
				struct ScenarioClusterData
				{
					Blam::Cache::DataTypes::tagRef BSP;//0x0
					struct BackgroundSounds
					{
						__int16 PaletteIndex;//0x0
						__int16 Unknown;//0x2
					};
					TAG_BLOCK_SIZE_ASSERT(BackgroundSounds, 0x4);
					Blam::Cache::DataTypes::Reflexive<BackgroundSounds> BackgroundSounds;//0x8
					struct SoundEnvironments
					{
						__int16 PaletteIndex;//0x0
						__int16 Unknown;//0x2
					};
					TAG_BLOCK_SIZE_ASSERT(SoundEnvironments, 0x4);
					Blam::Cache::DataTypes::Reflexive<SoundEnvironments> SoundEnvironments;//0x10
					__int32 BSPChecksum;//0x18
					struct ClusterCentroids
					{
						float CentroidX;//0x0
						float CentroidY;//0x4
						float CentroidZ;//0x8
					};
					TAG_BLOCK_SIZE_ASSERT(ClusterCentroids, 0xC);
					Blam::Cache::DataTypes::Reflexive<ClusterCentroids> ClusterCentroids;//0x1C
					struct WeatherProperties
					{
						__int16 PaletteIndex;//0x0
						__int16 Unknown;//0x2
					};
					TAG_BLOCK_SIZE_ASSERT(WeatherProperties, 0x4);
					Blam::Cache::DataTypes::Reflexive<WeatherProperties> WeatherProperties;//0x24
					struct AtmosphericFogProperties
					{
						__int16 PaletteIndex;//0x0
						__int16 Unknown;//0x2
					};
					TAG_BLOCK_SIZE_ASSERT(AtmosphericFogProperties, 0x4);
					Blam::Cache::DataTypes::Reflexive<AtmosphericFogProperties> AtmosphericFogProperties;//0x2C
				};
				TAG_BLOCK_SIZE_ASSERT(ScenarioClusterData, 0x34);
				Blam::Cache::DataTypes::Reflexive<ScenarioClusterData> ScenarioClusterData;//0x290
				__int32 ObjectSalts1;//0x298
				__int32 ObjectSalts2;//0x29C
				__int32 ObjectSalts3;//0x2A0
				__int32 ObjectSalts4;//0x2A4
				__int32 ObjectSalts5;//0x2A8
				__int32 ObjectSalts6;//0x2AC
				__int32 ObjectSalts7;//0x2B0
				__int32 ObjectSalts8;//0x2B4
				__int32 ObjectSalts9;//0x2B8
				__int32 ObjectSalts10;//0x2BC
				__int32 ObjectSalts11;//0x2C0
				__int32 ObjectSalts12;//0x2C4
				__int32 ObjectSalts13;//0x2C8
				__int32 ObjectSalts14;//0x2CC
				__int32 ObjectSalts15;//0x2D0
				__int32 ObjectSalts16;//0x2D4
				__int32 ObjectSalts17;//0x2D8
				__int32 ObjectSalts18;//0x2DC
				__int32 ObjectSalts19;//0x2E0
				__int32 ObjectSalts20;//0x2E4
				__int32 ObjectSalts21;//0x2E8
				__int32 ObjectSalts22;//0x2EC
				__int32 ObjectSalts23;//0x2F0
				__int32 ObjectSalts24;//0x2F4
				__int32 ObjectSalts25;//0x2F8
				__int32 ObjectSalts26;//0x2FC
				__int32 ObjectSalts27;//0x300
				__int32 ObjectSalts28;//0x304
				__int32 ObjectSalts29;//0x308
				__int32 ObjectSalts30;//0x30C
				__int32 ObjectSalts31;//0x310
				__int32 ObjectSalts32;//0x314
				struct SpawnData
				{
					float DynamicSpawnLowerHeight;//0x0
					float DynamicSpawnUpperHeight;//0x4
					float GameObjectiveResetHeight;//0x8
					PAD(0x3C);//0xC
					struct DynamicSpawnOverloads
					{
						enum class OverloadType : __int16
						{
							Enemy = 0,
							Friend = 1,
							EnemyVehicle = 2,
							FriendlyVehicle = 3,
							EmptyVehicle = 4,
							OddballInclusion = 5,
							OddballExclusion = 6,
							HillInclusion = 7,
							HillExclusion = 8,
							LastRaceFlag = 9,
							DeadAlly = 10,
							ControlledTerritory = 11,
						};
						OverloadType OverloadType;//0x0
						__int16 Unknown;//0x2
						float InnerRadius;//0x4
						float OuterRadius;//0x8
						float Weight;//0xC
					};
					TAG_BLOCK_SIZE_ASSERT(DynamicSpawnOverloads, 0x10);
					Blam::Cache::DataTypes::Reflexive<DynamicSpawnOverloads> DynamicSpawnOverloads;//0x48
					struct StaticRespawnZones
					{
						Blam::Cache::DataTypes::StringID Name;//0x0
						struct RelevantTeam
						{
							unsigned char Red : 1;
							unsigned char Blue : 1;
							unsigned char Yellow : 1;
							unsigned char Green : 1;
							unsigned char Purple : 1;
							unsigned char Orange : 1;
							unsigned char Brown : 1;
							unsigned char Pink : 1;
							unsigned char Neutral : 1;
							unsigned char bit9 : 1;
							unsigned char bit10 : 1;
							unsigned char bit11 : 1;
							unsigned char bit12 : 1;
							unsigned char bit13 : 1;
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
						}RelevantTeam;
						TAG_BLOCK_SIZE_ASSERT(RelevantTeam, 0x4);
						//0x4
						struct RelevantGames
						{
							unsigned char Slayer : 1;
							unsigned char Oddball : 1;
							unsigned char KingOfTheHill : 1;
							unsigned char CTF : 1;
							unsigned char Race : 1;
							unsigned char Headhunter : 1;
							unsigned char Juggernaut : 1;
							unsigned char Territories : 1;
							unsigned char bit8 : 1;
							unsigned char bit9 : 1;
							unsigned char bit10 : 1;
							unsigned char bit11 : 1;
							unsigned char bit12 : 1;
							unsigned char bit13 : 1;
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
						}RelevantGames;
						TAG_BLOCK_SIZE_ASSERT(RelevantGames, 0x4);
						//0x8
						struct Flags
						{
							unsigned char DisabledIfFlagHome : 1;
							unsigned char DisabledIfFlagAway : 1;
							unsigned char DisabledIfBombHome : 1;
							unsigned char DisabledIfBombAway : 1;
							unsigned char bit4 : 1;
							unsigned char bit5 : 1;
							unsigned char bit6 : 1;
							unsigned char bit7 : 1;
							unsigned char bit8 : 1;
							unsigned char bit9 : 1;
							unsigned char bit10 : 1;
							unsigned char bit11 : 1;
							unsigned char bit12 : 1;
							unsigned char bit13 : 1;
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
						}Flags;
						TAG_BLOCK_SIZE_ASSERT(Flags, 0x4);
						//0xC
						float PositionX;//0x10
						float PositionY;//0x14
						float PositionZ;//0x18
						float LowerHeight;//0x1C
						float UpperHeight;//0x20
						float InnerRadius;//0x24
						float OuterRadius;//0x28
						float Weight;//0x2C
					};
					TAG_BLOCK_SIZE_ASSERT(StaticRespawnZones, 0x30);
					Blam::Cache::DataTypes::Reflexive<StaticRespawnZones> StaticRespawnZones;//0x50
					struct StaticInitialSpawnZones
					{
						Blam::Cache::DataTypes::StringID Name;//0x0
						struct RelevantTeam
						{
							unsigned char Red : 1;
							unsigned char Blue : 1;
							unsigned char Yellow : 1;
							unsigned char Green : 1;
							unsigned char Purple : 1;
							unsigned char Orange : 1;
							unsigned char Brown : 1;
							unsigned char Pink : 1;
							unsigned char Neutral : 1;
							unsigned char bit9 : 1;
							unsigned char bit10 : 1;
							unsigned char bit11 : 1;
							unsigned char bit12 : 1;
							unsigned char bit13 : 1;
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
						}RelevantTeam;
						TAG_BLOCK_SIZE_ASSERT(RelevantTeam, 0x4);
						//0x4
						struct RelevantGames
						{
							unsigned char Slayer : 1;
							unsigned char Oddball : 1;
							unsigned char KingOfTheHill : 1;
							unsigned char CTF : 1;
							unsigned char Race : 1;
							unsigned char Headhunter : 1;
							unsigned char Juggernaut : 1;
							unsigned char Territories : 1;
							unsigned char bit8 : 1;
							unsigned char bit9 : 1;
							unsigned char bit10 : 1;
							unsigned char bit11 : 1;
							unsigned char bit12 : 1;
							unsigned char bit13 : 1;
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
						}RelevantGames;
						TAG_BLOCK_SIZE_ASSERT(RelevantGames, 0x4);
						//0x8
						struct Flags
						{
							unsigned char DisabledIfFlagHome : 1;
							unsigned char DisabledIfFlagAway : 1;
							unsigned char DisabledIfBombHome : 1;
							unsigned char DisabledIfBombAway : 1;
							unsigned char bit4 : 1;
							unsigned char bit5 : 1;
							unsigned char bit6 : 1;
							unsigned char bit7 : 1;
							unsigned char bit8 : 1;
							unsigned char bit9 : 1;
							unsigned char bit10 : 1;
							unsigned char bit11 : 1;
							unsigned char bit12 : 1;
							unsigned char bit13 : 1;
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
						}Flags;
						TAG_BLOCK_SIZE_ASSERT(Flags, 0x4);
						//0xC
						float PositionX;//0x10
						float PositionY;//0x14
						float PositionZ;//0x18
						float LowerHeight;//0x1C
						float UpperHeight;//0x20
						float InnerRadius;//0x24
						float OuterRadius;//0x28
						float Weight;//0x2C
					};
					TAG_BLOCK_SIZE_ASSERT(StaticInitialSpawnZones, 0x30);
					Blam::Cache::DataTypes::Reflexive<StaticInitialSpawnZones> StaticInitialSpawnZones;//0x58
				};
				TAG_BLOCK_SIZE_ASSERT(SpawnData, 0x60);
				Blam::Cache::DataTypes::Reflexive<SpawnData> SpawnData;//0x318
				Blam::Cache::DataTypes::tagRef SoundEffectsCollection;//0x320
				struct Crates
				{
					__int16 PaletteIndex;//0x0
					__int16 NameIndex;//0x2
					struct PlacementFlags
					{
						unsigned char NotAutomatically : 1;
						unsigned char NotOnEasy : 1;
						unsigned char NotOnNormal : 1;
						unsigned char NotOnHard : 1;
						unsigned char LockTypeToEnvObject : 1;
						unsigned char LockTransformToEnvObject : 1;
						unsigned char NeverPlaced : 1;
						unsigned char LockNameToEnvObject : 1;
						unsigned char CreateAtRest : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}PlacementFlags;
					TAG_BLOCK_SIZE_ASSERT(PlacementFlags, 0x4);
					//0x4
					float PositionX;//0x8
					float PositionY;//0xC
					float PositionZ;//0x10
					Blam::Maths::Real::Angle RotationI;//0x14
					Blam::Maths::Real::Angle RotationJ;//0x18
					Blam::Maths::Real::Angle RotationK;//0x1C
					float Scale;//0x20
					struct TransformFlags
					{
						unsigned char Mirrored : 1;
						unsigned char bit1 : 1;
						unsigned char bit2 : 1;
						unsigned char bit3 : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
						unsigned char bit14 : 1;
						unsigned char bit15 : 1;
					}TransformFlags;
					TAG_BLOCK_SIZE_ASSERT(TransformFlags, 0x2);
					//0x24
					struct ManualBSPFlags
					{
						unsigned char BSP0 : 1;
						unsigned char BSP1 : 1;
						unsigned char BSP2 : 1;
						unsigned char BSP3 : 1;
						unsigned char BSP4 : 1;
						unsigned char BSP5 : 1;
						unsigned char BSP6 : 1;
						unsigned char BSP7 : 1;
						unsigned char BSP8 : 1;
						unsigned char BSP9 : 1;
						unsigned char BSP10 : 1;
						unsigned char BSP11 : 1;
						unsigned char BSP12 : 1;
						unsigned char BSP13 : 1;
						unsigned char BSP14 : 1;
						unsigned char BSP15 : 1;
					}ManualBSPFlags;
					TAG_BLOCK_SIZE_ASSERT(ManualBSPFlags, 0x2);
					//0x26
					unsigned __int16 UniqueIDIndex;//0x28
					unsigned __int16 UniqueIDSalt;//0x2A
					__int16 OriginBSPIndex;//0x2C
					enum class Type : __int8
					{
						Biped = 0,
						Vehicle = 1,
						Weapon = 2,
						Equipment = 3,
						Garbage = 4,
						Projectile = 5,
						Scenery = 6,
						Machine = 7,
						Control = 8,
						LightFixture = 9,
						SoundScenery = 10,
						Crate = 11,
						Creature = 12,
					};
					Type Type;//0x2E
					enum class Source : __int8
					{
						Structure = 0,
						Editor = 1,
						Dynamic = 2,
						Legacy = 3,
					};
					Source Source;//0x2F
					enum class BSPPolicy : __int8
					{
						Default = 0,
						AlwaysPlaces = 1,
						ManualBSPPlacement = 2,
					};
					BSPPolicy BSPPolicy;//0x30
					__int8 Unknown;//0x31
					__int16 EditorFolder;//0x32
					Blam::Cache::DataTypes::StringID VariantName;//0x34
					struct ActiveChangeColors
					{
						unsigned char Primary : 1;
						unsigned char Secondary : 1;
						unsigned char Tertiary : 1;
						unsigned char Quaternary : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
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
					}ActiveChangeColors;
					TAG_BLOCK_SIZE_ASSERT(ActiveChangeColors, 0x4);
					//0x38
					PAD(0x10);//0x3C
				};
				TAG_BLOCK_SIZE_ASSERT(Crates, 0x4C);
				Blam::Cache::DataTypes::Reflexive<Crates> Crates;//0x328
				struct CratePalette
				{
					Blam::Cache::DataTypes::tagRef Crate;//0x0
					PAD(0x20);//0x8
				};
				TAG_BLOCK_SIZE_ASSERT(CratePalette, 0x28);
				Blam::Cache::DataTypes::Reflexive<CratePalette> CratePalette;//0x330
				Blam::Cache::DataTypes::tagRef GlobalLighting;//0x338
				struct AtmosphericFogPalette
				{
					Blam::Cache::DataTypes::StringID Name;//0x0
					float ColorRed;//0x4
					float ColorGreen;//0x8
					float ColorBlue;//0xC
					float SpreadDistance;//0x10
					PAD(0x4);//0x14
					float MaximumDensity;//0x18
					float StartDistance;//0x1C
					float OpaqueDistance;//0x20
					float ColorRed;//0x24
					float ColorGreen;//0x28
					float ColorBlue;//0x2C
					float SpreadDistance;//0x30
					PAD(0x4);//0x34
					float MaximumDensity;//0x38
					float StartDistance;//0x3C
					float OpaqueDistance;//0x40
					float PlanarColorRed;//0x44
					float PlanarColorGreen;//0x48
					float PlanarColorBlue;//0x4C
					float PlanarMaximumDensity;//0x50
					float PlanarOverrideAmount;//0x54
					float PlanarMinimumDistanceBias;//0x58
					PAD(0x2C);//0x5C
					float PatchyColorRed;//0x88
					float PatchyColorGreen;//0x8C
					float PatchyColorBlue;//0x90
					PAD(0xC);//0x94
					float PatchyDensityMin;//0xA0
					float PatchyDensityMax;//0xA4
					float PatchyDistanceMin;//0xA8
					float PatchyDistanceMax;//0xAC
					PAD(0x20);//0xB0
					Blam::Cache::DataTypes::tagRef PatchyFog;//0xD0
					struct Mixers
					{
						PAD(0x4);//0x0
						Blam::Cache::DataTypes::StringID AtmosphericFogSource;//0x4
						Blam::Cache::DataTypes::StringID Interpolator;//0x8
						__int16 Unknown;//0xC
						__int16 Unknown;//0xE
					};
					TAG_BLOCK_SIZE_ASSERT(Mixers, 0x10);
					Blam::Cache::DataTypes::Reflexive<Mixers> Mixers;//0xD8
					float Amount;//0xE0
					float Threshold;//0xE4
					float Brightness;//0xE8
					float GammaPower;//0xEC
					struct CameraImmersionFlags
					{
						unsigned char DisableAtmosphericFog : 1;
						unsigned char DisableSecondaryFog : 1;
						unsigned char DisablePlanarFog : 1;
						unsigned char InvertPlanarFogPriorites : 1;
						unsigned char DisableWater : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
						unsigned char bit14 : 1;
						unsigned char bit15 : 1;
					}CameraImmersionFlags;
					TAG_BLOCK_SIZE_ASSERT(CameraImmersionFlags, 0x2);
					//0xF0
					__int16 Unknown;//0xF2
				};
				TAG_BLOCK_SIZE_ASSERT(AtmosphericFogPalette, 0xF4);
				Blam::Cache::DataTypes::Reflexive<AtmosphericFogPalette> AtmosphericFogPalette;//0x340
				struct PlanarFogPalette
				{
					Blam::Cache::DataTypes::StringID Name;//0x0
					Blam::Cache::DataTypes::tagRef PlanarFog;//0x4
					__int16 Unknown;//0xC
					__int16 Unknown;//0xE
				};
				TAG_BLOCK_SIZE_ASSERT(PlanarFogPalette, 0x10);
				Blam::Cache::DataTypes::Reflexive<PlanarFogPalette> PlanarFogPalette;//0x348
				struct Flocks
				{
					__int16 BSPIndex;//0x0
					__int16 Unknown;//0x2
					__int16 BoundingTriggerVolume;//0x4
					struct Flags
					{
						unsigned char HardBoundariesOnVolume : 1;
						unsigned char FlockInitiallyStopped : 1;
						unsigned char bit2 : 1;
						unsigned char bit3 : 1;
						unsigned char bit4 : 1;
						unsigned char bit5 : 1;
						unsigned char bit6 : 1;
						unsigned char bit7 : 1;
						unsigned char bit8 : 1;
						unsigned char bit9 : 1;
						unsigned char bit10 : 1;
						unsigned char bit11 : 1;
						unsigned char bit12 : 1;
						unsigned char bit13 : 1;
						unsigned char bit14 : 1;
						unsigned char bit15 : 1;
					}Flags;
					TAG_BLOCK_SIZE_ASSERT(Flags, 0x2);
					//0x6
					float EcologyMargin;//0x8
					struct Sources
					{
						float PositionX;//0x0
						float PositionY;//0x4
						float PositionZ;//0x8
						Blam::Maths::Real::Angle StartingY;//0xC
						Blam::Maths::Real::Angle StartingP;//0x10
						float Radius;//0x14
						float Weight;//0x18
					};
					TAG_BLOCK_SIZE_ASSERT(Sources, 0x1C);
					Blam::Cache::DataTypes::Reflexive<Sources> Sources;//0xC
					struct Sinks
					{
						float PositionX;//0x0
						float PositionY;//0x4
						float PositionZ;//0x8
						float Radius;//0xC
					};
					TAG_BLOCK_SIZE_ASSERT(Sinks, 0x10);
					Blam::Cache::DataTypes::Reflexive<Sinks> Sinks;//0x14
					float ProductionFrequency;//0x1C
					float ScaleMin;//0x20
					float ScaleMax;//0x24
					Blam::Cache::DataTypes::tagRef Creature;//0x28
					__int16 BoidCountMin;//0x30
					__int16 BoidCountMax;//0x32
					float NeighborhoodRadius;//0x34
					float AvoidanceRadius;//0x38
					float ForwardScale;//0x3C
					float AlignmentScale;//0x40
					float AvoidanceScale;//0x44
					float LevelingForceScale;//0x48
					float SinkScale;//0x4C
					Blam::Maths::Real::Angle PerceptionAngle;//0x50
					float AverageThrottle;//0x54
					float MaximumThrottle;//0x58
					float PositionScale;//0x5C
					float PositionRadiusMin;//0x60
					float PositionRadiusMax;//0x64
					float MovementWeightThreshold;//0x68
					float DangerRadius;//0x6C
					float DangerScale;//0x70
					float RandomOffsetScale;//0x74
					float RandomOffsetMin;//0x78
					float RandomOffsetMax;//0x7C
					Blam::Cache::DataTypes::StringID FlockName;//0x80
				};
				TAG_BLOCK_SIZE_ASSERT(Flocks, 0x84);
				Blam::Cache::DataTypes::Reflexive<Flocks> Flocks;//0x350
				Blam::Cache::DataTypes::tagRef Subtitles;//0x358
				PAD(0x10);//0x360
				struct CreaturePalette
				{
					Blam::Cache::DataTypes::tagRef Creature;//0x0
					PAD(0x20);//0x8
				};
				TAG_BLOCK_SIZE_ASSERT(CreaturePalette, 0x28);
				Blam::Cache::DataTypes::Reflexive<CreaturePalette> CreaturePalette;//0x370
				struct DecoratorPalette
				{
					Blam::Cache::DataTypes::tagRef DecoratorSet;//0x0
				};
				TAG_BLOCK_SIZE_ASSERT(DecoratorPalette, 0x8);
				Blam::Cache::DataTypes::Reflexive<DecoratorPalette> DecoratorPalette;//0x378
				struct BSPTransitionVolumes
				{
					__int16 Unknown;//0x0
					__int16 BSPIndexKey;//0x2
					__int16 TriggerVolumeIndex;//0x4
					__int16 Unknown;//0x6
				};
				TAG_BLOCK_SIZE_ASSERT(BSPTransitionVolumes, 0x8);
				Blam::Cache::DataTypes::Reflexive<BSPTransitionVolumes> BSPTransitionVolumes;//0x380
				struct StructureBSPLighting
				{
					Blam::Cache::DataTypes::tagRef BSP;//0x0
					struct LightingPoints
					{
						float PositionX;//0x0
						float PositionY;//0x4
						float PositionZ;//0x8
					};
					TAG_BLOCK_SIZE_ASSERT(LightingPoints, 0xC);
					Blam::Cache::DataTypes::Reflexive<LightingPoints> LightingPoints;//0x8
				};
				TAG_BLOCK_SIZE_ASSERT(StructureBSPLighting, 0x10);
				Blam::Cache::DataTypes::Reflexive<StructureBSPLighting> StructureBSPLighting;//0x388
				struct EditorFolders
				{
					__int32 ParentFolder;//0x0
					Blam::Cache::DataTypes::String256 Name;//0x4
				};
				TAG_BLOCK_SIZE_ASSERT(EditorFolders, 0x104);
				Blam::Cache::DataTypes::Reflexive<EditorFolders> EditorFolders;//0x390
				struct LevelData
				{
					Blam::Cache::DataTypes::tagRef LevelDescription;//0x0
					struct CampaignLevelData
					{
						__int32 CampaignID;//0x0
						__int32 MapID;//0x4
						Blam::Cache::DataTypes::tagRef Bitmap;//0x8
						Blam::Cache::DataTypes::Unicode32 EnglishName;//0x10
						Blam::Cache::DataTypes::Unicode32 JapaneseName;//0x50
						Blam::Cache::DataTypes::Unicode32 GermanName;//0x90
						Blam::Cache::DataTypes::Unicode32 FrenchName;//0xD0
						Blam::Cache::DataTypes::Unicode32 SpanishName;//0x110
						Blam::Cache::DataTypes::Unicode32 ItalianName;//0x150
						Blam::Cache::DataTypes::Unicode32 KoreanName;//0x190
						Blam::Cache::DataTypes::Unicode32 ChineseName;//0x1D0
						Blam::Cache::DataTypes::Unicode32 PortugueseName;//0x210
						Blam::Cache::DataTypes::Unicode128 EnglishDescription;//0x250
						Blam::Cache::DataTypes::Unicode128 JapaneseDescription;//0x350
						Blam::Cache::DataTypes::Unicode128 GermanDescription;//0x450
						Blam::Cache::DataTypes::Unicode128 FrenchDescription;//0x550
						Blam::Cache::DataTypes::Unicode128 SpanishDescription;//0x650
						Blam::Cache::DataTypes::Unicode128 ItalianDescription;//0x750
						Blam::Cache::DataTypes::Unicode128 KoreanDescription;//0x850
						Blam::Cache::DataTypes::Unicode128 ChineseDescription;//0x950
						Blam::Cache::DataTypes::Unicode128 PortugueseDescription;//0xA50
					};
					TAG_BLOCK_SIZE_ASSERT(CampaignLevelData, 0xB50);
					Blam::Cache::DataTypes::Reflexive<CampaignLevelData> CampaignLevelData;//0x8
					struct Multiplayer
					{
						__int32 MapID;//0x0
						Blam::Cache::DataTypes::tagRef Bitmap;//0x4
						Blam::Cache::DataTypes::Unicode32 EnglishName;//0xC
						Blam::Cache::DataTypes::Unicode32 JapaneseName;//0x4C
						Blam::Cache::DataTypes::Unicode32 GermanName;//0x8C
						Blam::Cache::DataTypes::Unicode32 FrenchName;//0xCC
						Blam::Cache::DataTypes::Unicode32 SpanishName;//0x10C
						Blam::Cache::DataTypes::Unicode32 ItalianName;//0x14C
						Blam::Cache::DataTypes::Unicode32 KoreanName;//0x18C
						Blam::Cache::DataTypes::Unicode32 ChineseName;//0x1CC
						Blam::Cache::DataTypes::Unicode32 PortugueseName;//0x20C
						Blam::Cache::DataTypes::Unicode128 EnglishDescription;//0x24C
						Blam::Cache::DataTypes::Unicode128 JapaneseDescription;//0x34C
						Blam::Cache::DataTypes::Unicode128 GermanDescription;//0x44C
						Blam::Cache::DataTypes::Unicode128 FrenchDescription;//0x54C
						Blam::Cache::DataTypes::Unicode128 SpanishDescription;//0x64C
						Blam::Cache::DataTypes::Unicode128 ItalianDescription;//0x74C
						Blam::Cache::DataTypes::Unicode128 KoreanDescription;//0x84C
						Blam::Cache::DataTypes::Unicode128 ChineseDescription;//0x94C
						Blam::Cache::DataTypes::Unicode128 PortugueseDescription;//0xA4C
						Blam::Cache::DataTypes::String256 Path;//0xB4C
						__int32 SortOrder;//0xC4C
						struct Flags
						{
							unsigned char Unlockable : 1;
							unsigned char bit1 : 1;
							unsigned char bit2 : 1;
							unsigned char bit3 : 1;
							unsigned char bit4 : 1;
							unsigned char bit5 : 1;
							unsigned char bit6 : 1;
							unsigned char bit7 : 1;
						}Flags;
						TAG_BLOCK_SIZE_ASSERT(Flags, 0x1);
						//0xC50
						__int8 Unknown;//0xC51
						__int8 Unknown;//0xC52
						__int8 Unknown;//0xC53
						unsigned __int8 MaxTeamsNone;//0xC54
						unsigned __int8 MaxTeamsCTF;//0xC55
						unsigned __int8 MaxTeamsSlayer;//0xC56
						unsigned __int8 MaxTeamsOddball;//0xC57
						unsigned __int8 MaxTeamsKOTH;//0xC58
						unsigned __int8 MaxTeamsRace;//0xC59
						unsigned __int8 MaxTeamsHeadhunter;//0xC5A
						unsigned __int8 MaxTeamsJuggernaut;//0xC5B
						unsigned __int8 MaxTeamsTerritories;//0xC5C
						unsigned __int8 MaxTeamsAssault;//0xC5D
						unsigned __int8 MaxTeamsStub10;//0xC5E
						unsigned __int8 MaxTeamsStub11;//0xC5F
						unsigned __int8 MaxTeamsStub12;//0xC60
						unsigned __int8 MaxTeamsStub13;//0xC61
						unsigned __int8 MaxTeamsStub14;//0xC62
						unsigned __int8 MaxTeamsStub15;//0xC63
						////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
						PAD(-1);//0xC64
					};
					TAG_BLOCK_SIZE_ASSERT(Multiplayer, 0xC63);
					Blam::Cache::DataTypes::Reflexive<Multiplayer> Multiplayer;//0x10
				};
				TAG_BLOCK_SIZE_ASSERT(LevelData, 0x18);
				Blam::Cache::DataTypes::Reflexive<LevelData> LevelData;//0x398
				Blam::Cache::DataTypes::tagRef TerritoryLocationNames;//0x3A0
				PAD(0x8);//0x3A8
				struct MissionDialogue
				{
					Blam::Cache::DataTypes::tagRef MissionDialogue;//0x0
				};
				TAG_BLOCK_SIZE_ASSERT(MissionDialogue, 0x8);
				Blam::Cache::DataTypes::Reflexive<MissionDialogue> MissionDialogue;//0x3B0
				Blam::Cache::DataTypes::tagRef Objectives;//0x3B8
				struct Interpolators
				{
					Blam::Cache::DataTypes::StringID Name;//0x0
					Blam::Cache::DataTypes::StringID AcceleratorName;//0x4
					Blam::Cache::DataTypes::StringID MultiplierName;//0x8
					Blam::Cache::DataTypes::dataRef Function;//0xC
					__int16 Unknown;//0x14
					__int16 Unknown;//0x16
				};
				TAG_BLOCK_SIZE_ASSERT(Interpolators, 0x18);
				Blam::Cache::DataTypes::Reflexive<Interpolators> Interpolators;//0x3C0
				PAD(0x8);//0x3C8
				struct ScreenEffectReferences
				{
					PAD(0x10);//0x0
					Blam::Cache::DataTypes::tagRef ScreenEffect;//0x10
					Blam::Cache::DataTypes::StringID PrimaryInput;//0x18
					Blam::Cache::DataTypes::StringID SecondaryInput;//0x1C
					__int16 Unknown;//0x20
					__int16 Unknown;//0x22
				};
				TAG_BLOCK_SIZE_ASSERT(ScreenEffectReferences, 0x24);
				Blam::Cache::DataTypes::Reflexive<ScreenEffectReferences> ScreenEffectReferences;//0x3D0
				struct SimulationDefinitionTable
				{
					Blam::Cache::DataTypes::tagRefN Tag;//0x0
				};
				TAG_BLOCK_SIZE_ASSERT(SimulationDefinitionTable, 0x4);
				Blam::Cache::DataTypes::Reflexive<SimulationDefinitionTable> SimulationDefinitionTable;//0x3D8
			};
			TAG_BLOCK_SIZE_ASSERT(scnr, 0x3E0);
		}
	}
}
