#pragma once
#include"DataTypes.h"
#include"tag_block_assert.h"


namespace Blam
{
	namespace Cache
	{
		namespace Tags
		{
			namespace Matg
			{
				struct Matg
				{
					PAD(0xAC);//0x0
					enum class Language : __int32
					{
						English = 0x0,
						Japanese = 0x1,
						German = 0x2,
						French = 0x3,
						Spanish = 0x4,
						Italian = 0x5,
						Korean = 0x6,
						Chinese = 0x7,
						Portuguese = 0x8,
					};
					Language Language;//0xAC
					struct HavokCleanupResources
					{
						Blam::Cache::DataTypes::tagRef ObjectCleanupEffect;//0x0
					};
					TAG_BLOCK_SIZE_ASSERT(HavokCleanupResources, 0x8);
					Blam::Cache::DataTypes::Reflexive<HavokCleanupResources> HavokCleanupResources;//0xB0
					struct CollisionDamage
					{
						Blam::Cache::DataTypes::tagRef CollisionDamage;//0x0
						float MinGameAcceleration;//0x8
						float MaxGameAcceleration;//0xC
						float MinGameScale;//0x10
						float MaxGameScale;//0x14
						float MinAbsoluteAcceleration;//0x18
						float MaxAbsoluteAcceleration;//0x1C
						float MinAbsoluteScale;//0x20
						float MaxAbsoluteScale;//0x24
						PAD(0x20);//0x28
					};
					TAG_BLOCK_SIZE_ASSERT(CollisionDamage, 0x48);
					Blam::Cache::DataTypes::Reflexive<CollisionDamage> CollisionDamage;//0xB8
					struct SoundGlobals
					{
						Blam::Cache::DataTypes::tagRef SoundClasses;//0x0
						Blam::Cache::DataTypes::tagRef SoundEffects;//0x8
						Blam::Cache::DataTypes::tagRef SoundMix;//0x10
						Blam::Cache::DataTypes::tagRef SoundCombatDialogueConstants;//0x18
						Blam::Cache::DataTypes::tagRef SoundGestalt;//0x20
						////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify
						PAD(-4);//0x28
					};
					TAG_BLOCK_SIZE_ASSERT(SoundGlobals, 0x24);
					Blam::Cache::DataTypes::Reflexive<SoundGlobals> SoundGlobals;//0xC0
					struct AIGlobals
					{
						float DangerBroadlyFacing;//0x0
						PAD(0x4);//0x4
						float DangerShootingNear;//0x8
						PAD(0x4);//0xC
						float DangerShootingAt;//0x10
						PAD(0x4);//0x14
						float DangerExtremelyClose;//0x18
						PAD(0x4);//0x1C
						float DangerShieldDamage;//0x20
						float DangerExtendedShieldDamage;//0x24
						float DangerBodyDamage;//0x28
						float DangerExtendedBodyDamage;//0x2C
						PAD(0x30);//0x30
						Blam::Cache::DataTypes::tagRef GlobalDialogue;//0x60
						Blam::Cache::DataTypes::StringID DefaultMissionDialogueSoundEffect;//0x68
						PAD(0x14);//0x6C
						float JumpDown;//0x80
						float JumpStep;//0x84
						float JumpCrouch;//0x88
						float JumpStand;//0x8C
						float JumpStorey;//0x90
						float JumpTower;//0x94
						float MaxJumpDownHeightDown;//0x98
						float MaxJumpDownHeightStep;//0x9C
						float MaxJumpDownHeightCrouch;//0xA0
						float MaxJumpDownHeightStand;//0xA4
						float MaxJumpDownHeightStorey;//0xA8
						float MaxJumpDownHeightTower;//0xAC
						float HoistStepMin;//0xB0
						float HoistStepMax;//0xB4
						float HoistCrouchMin;//0xB8
						float HoistCrouchMax;//0xBC
						float HoistStandMin;//0xC0
						float HoistStandMax;//0xC4
						PAD(0x18);//0xC8
						float VaultStepMin;//0xE0
						float VaultStepMax;//0xE4
						float VaultCrouchMin;//0xE8
						float VaultCrouchMax;//0xEC
						PAD(0x30);//0xF0
						struct GravemindProperties
						{
							float MinimumRetreatTime;//0x0
							float IdealRetreatTime;//0x4
							float MaximumRetreatTime;//0x8
						};
						TAG_BLOCK_SIZE_ASSERT(GravemindProperties, 0xC);
						Blam::Cache::DataTypes::Reflexive<GravemindProperties> GravemindProperties;//0x120
						PAD(0x30);//0x128
						float ScaryTargetThreshold;//0x158
						float ScaryWeaponThreshold;//0x15C
						float PlayerScariness;//0x160
						float BerserkingActorScariness;//0x164
					};
					TAG_BLOCK_SIZE_ASSERT(AIGlobals, 0x168);
					Blam::Cache::DataTypes::Reflexive<AIGlobals> AIGlobals;//0xC8
					struct DamageTable
					{
						struct DamageGroups
						{
							Blam::Cache::DataTypes::StringID Name;//0x0
							struct ArmorModifiers
							{
								Blam::Cache::DataTypes::StringID Name;//0x0
								float DamageMultiplier;//0x4
							};
							TAG_BLOCK_SIZE_ASSERT(ArmorModifiers, 0x8);
							Blam::Cache::DataTypes::Reflexive<ArmorModifiers> ArmorModifiers;//0x4
						};
						TAG_BLOCK_SIZE_ASSERT(DamageGroups, 0xC);
						Blam::Cache::DataTypes::Reflexive<DamageGroups> DamageGroups;//0x0
					};
					TAG_BLOCK_SIZE_ASSERT(DamageTable, 0x8);
					Blam::Cache::DataTypes::Reflexive<DamageTable> DamageTable;//0xD0
					PAD(0x8);//0xD8
					struct Sounds
					{
						Blam::Cache::DataTypes::tagRef SoundObsolete;//0x0
					};
					TAG_BLOCK_SIZE_ASSERT(Sounds, 0x8);
					Blam::Cache::DataTypes::Reflexive<Sounds> Sounds;//0xE0
					struct Camera
					{
						Blam::Cache::DataTypes::tagRef DefaultUnitCameraTrack;//0x0
						float DefaultChangePause;//0x8
						float FirstPersonChangePause;//0xC
						float FollowingCameraChangePause;//0x10
					};
					TAG_BLOCK_SIZE_ASSERT(Camera, 0x14);
					Blam::Cache::DataTypes::Reflexive<Camera> Camera;//0xE8
					struct PlayerControl
					{
						float MagnetismFriction;//0x0
						float MagnetismAdhesion;//0x4
						float InconsequentialTargetScale;//0x8
						PAD(0xC);//0xC
						float CrosshairLocationX;//0x18
						float CrosshairLocationY;//0x1C
						float SecondsToStart;//0x20
						float SecondsToFullSpeed;//0x24
						float DecayRate;//0x28
						float FullSpeedMultiplier;//0x2C
						float PeggedMagnitude;//0x30
						float PeggedAngularThreshold;//0x34
						PAD(0x8);//0x38
						float LookDefaultPitchRate;//0x40
						float LookDefaultYawRate;//0x44
						float LookPegThreshold;//0x48
						float LookYawAccelerationTime;//0x4C
						float LookYawAccelerationScale;//0x50
						float LookPitchAccelerationTime;//0x54
						float LookPitchAccelerationScale;//0x58
						float LookAutolevelingScale;//0x5C
						PAD(0x8);//0x60
						float GravityScale;//0x68
						__int16 Unknown;//0x6C
						__int16 MinimumAutolevelingTicks;//0x6E
						PAD(0x4);//0x70
						struct LookFunction
						{
							float Scale;//0x0
						};
						TAG_BLOCK_SIZE_ASSERT(LookFunction, 0x4);
						Blam::Cache::DataTypes::Reflexive<LookFunction> LookFunction;//0x74
						float MinimumActionHoldTime;//0x7C
					};
					TAG_BLOCK_SIZE_ASSERT(PlayerControl, 0x80);
					Blam::Cache::DataTypes::Reflexive<PlayerControl> PlayerControl;//0xF0
					struct Difficulty
					{
						float EasyEnemyDamage;//0x0
						float NormalEnemyDamage;//0x4
						float HardEnemyDamage;//0x8
						float ImpossibleEnemyDamage;//0xC
						float EasyEnemyVitality;//0x10
						float NormalEnemyVitality;//0x14
						float HardEnemyVitality;//0x18
						float ImpossibleEnemyVitality;//0x1C
						float EasyEnemyShield;//0x20
						float NormalEnemyShield;//0x24
						float HardEnemyShield;//0x28
						float ImpossibleEnemyShield;//0x2C
						float EasyEnemyRecharge;//0x30
						float NormalEnemyRecharge;//0x34
						float HardEnemyRecharge;//0x38
						float ImpossibleEnemyRecharge;//0x3C
						float EasyFriendDamage;//0x40
						float NormalFriendDamage;//0x44
						float HardFriendDamage;//0x48
						float ImpossibleFriendDamage;//0x4C
						float EasyFriendVitality;//0x50
						float NormalFriendVitality;//0x54
						float HardFriendVitality;//0x58
						float ImpossibleFriendVitality;//0x5C
						float EasyFriendShield;//0x60
						float NormalFriendShield;//0x64
						float HardFriendShield;//0x68
						float ImpossibleFriendShield;//0x6C
						float EasyFriendRecharge;//0x70
						float NormalFriendRecharge;//0x74
						float HardFriendRecharge;//0x78
						float ImpossibleFriendRecharge;//0x7C
						float EasyInfectionForms;//0x80
						float NormalInfectionForms;//0x84
						float HardInfectionForms;//0x88
						float ImpossibleInfectionForms;//0x8C
						float EasyUnknown;//0x90
						float NormalUnknown;//0x94
						float HardUnknown;//0x98
						float ImpossibleUnknown;//0x9C
						float EasyRateOfFire;//0xA0
						float NormalRateOfFire;//0xA4
						float HardRateOfFire;//0xA8
						float ImpossibleRateOfFire;//0xAC
						float EasyProjectileError;//0xB0
						float NormalProjectileError;//0xB4
						float HardProjectileError;//0xB8
						float ImpossibleProjectileError;//0xBC
						float EasyBurstError;//0xC0
						float NormalBurstError;//0xC4
						float HardBurstError;//0xC8
						float ImpossibleBurstError;//0xCC
						float EasyTargetDelay;//0xD0
						float NormalTargetDelay;//0xD4
						float HardTargetDelay;//0xD8
						float ImpossibleTargetDelay;//0xDC
						float EasyBurstSeparation;//0xE0
						float NormalBurstSeparation;//0xE4
						float HardBurstSeparation;//0xE8
						float ImpossibleBurstSeparation;//0xEC
						float EasyTargetTracking;//0xF0
						float NormalTargetTracking;//0xF4
						float HardTargetTracking;//0xF8
						float ImpossibleTargetTracking;//0xFC
						float EasyTargetLeading;//0x100
						float NormalTargetLeading;//0x104
						float HardTargetLeading;//0x108
						float ImpossibleTargetLeading;//0x10C
						float EasyOverchargeChance;//0x110
						float NormalOverchargeChance;//0x114
						float HardOverchargeChance;//0x118
						float ImpossibleOverchargeChance;//0x11C
						float EasySpecialFireDelay;//0x120
						float NormalSpecialFireDelay;//0x124
						float HardSpecialFireDelay;//0x128
						float ImpossibleSpecialFireDelay;//0x12C
						float EasyGuidanceVsPlayer;//0x130
						float NormalGuidanceVsPlayer;//0x134
						float HardGuidanceVsPlayer;//0x138
						float ImpossibleGuidanceVsPlayer;//0x13C
						float EasyMeleeDelayBase;//0x140
						float NormalMeleeDelayBase;//0x144
						float HardMeleeDelayBase;//0x148
						float ImpossibleMeleeDelayBase;//0x14C
						float EasyMeleeDelayScale;//0x150
						float NormalMeleeDelayScale;//0x154
						float HardMeleeDelayScale;//0x158
						float ImpossibleMeleeDelayScale;//0x15C
						float EasyUnknown;//0x160
						float NormalUnknown;//0x164
						float HardUnknown;//0x168
						float ImpossibleUnknown;//0x16C
						float EasyGrenadeChanceScale;//0x170
						float NormalGrenadeChanceScale;//0x174
						float HardGrenadeChanceScale;//0x178
						float ImpossibleGrenadeChanceScale;//0x17C
						float EasyGrenadeTimerScale;//0x180
						float NormalGrenadeTimerScale;//0x184
						float HardGrenadeTimerScale;//0x188
						float ImpossibleGrenadeTimerScale;//0x18C
						float EasyUnknown;//0x190
						float NormalUnknown;//0x194
						float HardUnknown;//0x198
						float ImpossibleUnknown;//0x19C
						float EasyUnknown;//0x1A0
						float NormalUnknown;//0x1A4
						float HardUnknown;//0x1A8
						float ImpossibleUnknown;//0x1AC
						float EasyUnknown;//0x1B0
						float NormalUnknown;//0x1B4
						float HardUnknown;//0x1B8
						float ImpossibleUnknown;//0x1BC
						float EasyMajorUpgradeNormal;//0x1C0
						float NormalMajorUpgradeNormal;//0x1C4
						float HardMajorUpgradeNormal;//0x1C8
						float ImpossibleMajorUpgradeNormal;//0x1CC
						float EasyMajorUpgradeFew;//0x1D0
						float NormalMajorUpgradeFew;//0x1D4
						float HardMajorUpgradeFew;//0x1D8
						float ImpossibleMajorUpgradeFew;//0x1DC
						float EasyMajorUpgradeMany;//0x1E0
						float NormalMajorUpgradeMany;//0x1E4
						float HardMajorUpgradeMany;//0x1E8
						float ImpossibleMajorUpgradeMany;//0x1EC
						float EasyPlayerVehicleRamChance;//0x1F0
						float NormalPlayerVehicleRamChance;//0x1F4
						float HardPlayerVehicleRamChance;//0x1F8
						float ImpossiblePlayerVehicleRamChance;//0x1FC
						PAD(0x84);//0x200
					};
					TAG_BLOCK_SIZE_ASSERT(Difficulty, 0x284);
					Blam::Cache::DataTypes::Reflexive<Difficulty> Difficulty;//0xF8
					struct Grenades
					{
						__int16 MaximumCount;//0x0
						__int16 Unknown;//0x2
						Blam::Cache::DataTypes::tagRef ThrowingEffect;//0x4
						PAD(0x10);//0xC
						Blam::Cache::DataTypes::tagRef Equipment;//0x1C
						Blam::Cache::DataTypes::tagRef Projectile;//0x24
					};
					TAG_BLOCK_SIZE_ASSERT(Grenades, 0x2C);
					Blam::Cache::DataTypes::Reflexive<Grenades> Grenades;//0x100
					struct RasterizerData
					{
						Blam::Cache::DataTypes::tagRef DistanceAttenuation;//0x0
						Blam::Cache::DataTypes::tagRef VectorNormalization;//0x8
						Blam::Cache::DataTypes::tagRef Gradients;//0x10
						Blam::Cache::DataTypes::tagRef LoadingScreen;//0x18
						Blam::Cache::DataTypes::tagRef LoadingScreenSweep;//0x20
						Blam::Cache::DataTypes::tagRef LoadingScreenSpinner;//0x28
						Blam::Cache::DataTypes::tagRef Glow;//0x30
						Blam::Cache::DataTypes::tagRef LoadingScreenLogos;//0x38
						Blam::Cache::DataTypes::tagRef LoadingScreenTickers;//0x40
						PAD(0x10);//0x48
						struct GlobalVertexShaders
						{
							Blam::Cache::DataTypes::tagRef VertexShader;//0x0
						};
						TAG_BLOCK_SIZE_ASSERT(GlobalVertexShaders, 0x8);
						Blam::Cache::DataTypes::Reflexive<GlobalVertexShaders> GlobalVertexShaders;//0x58
						Blam::Cache::DataTypes::tagRef Default2D;//0x60
						Blam::Cache::DataTypes::tagRef Default3D;//0x68
						Blam::Cache::DataTypes::tagRef DefaultCubeMap;//0x70
						Blam::Cache::DataTypes::tagRef Unknown;//0x78
						Blam::Cache::DataTypes::tagRef Unknown;//0x80
						Blam::Cache::DataTypes::tagRef Unknown;//0x88
						Blam::Cache::DataTypes::tagRef Unknown;//0x90
						Blam::Cache::DataTypes::tagRef Unknown;//0x98
						Blam::Cache::DataTypes::tagRef Unknown;//0xA0
						PAD(0x24);//0xA8
						Blam::Cache::DataTypes::tagRef GlobalShader;//0xCC
						enum class Flags : __int16
						{
							TintEdgeDensity = 0x0,
						};
						Blam::Cache::DataTypes::Bitfield16<Flags> Flags;//0xD4
						__int16 Unknown;//0xD6
						float RefractionAmount;//0xD8
						float DistanceFalloff;//0xDC
						float TintColorRed;//0xE0
						float TintColorGreen;//0xE4
						float TintColorBlue;//0xE8
						float HyperStealthRefraction;//0xEC
						float HyperStealthDistanceFalloff;//0xF0
						float HyperStealthTintRed;//0xF4
						float HyperStealthTintGreen;//0xF8
						float HyperStealthTintBlue;//0xFC
						Blam::Cache::DataTypes::tagRef Unknown;//0x100
					};
					TAG_BLOCK_SIZE_ASSERT(RasterizerData, 0x108);
					Blam::Cache::DataTypes::Reflexive<RasterizerData> RasterizerData;//0x108
					struct InterfaceTags
					{
						Blam::Cache::DataTypes::tagRef Obsolete1;//0x0
						Blam::Cache::DataTypes::tagRef Obsolete2;//0x8
						Blam::Cache::DataTypes::tagRef ScreenColorTable;//0x10
						Blam::Cache::DataTypes::tagRef HUDColorTable;//0x18
						Blam::Cache::DataTypes::tagRef EditorColorTable;//0x20
						Blam::Cache::DataTypes::tagRef DialogColorTable;//0x28
						Blam::Cache::DataTypes::tagRef HUDGlobals;//0x30
						Blam::Cache::DataTypes::tagRef MotionSensorSweepBitmap;//0x38
						Blam::Cache::DataTypes::tagRef MotionSensorSweepBitmapMask;//0x40
						Blam::Cache::DataTypes::tagRef MultiplayerHUDBitmap;//0x48
						Blam::Cache::DataTypes::tagRef Unknown;//0x50
						Blam::Cache::DataTypes::tagRef HUDDigitsDefinition;//0x58
						Blam::Cache::DataTypes::tagRef MotionSensorBlipBitmap;//0x60
						Blam::Cache::DataTypes::tagRef InterfaceGooMap1;//0x68
						Blam::Cache::DataTypes::tagRef InterfaceGooMap2;//0x70
						Blam::Cache::DataTypes::tagRef InterfaceGooMap3;//0x78
						Blam::Cache::DataTypes::tagRef MainMenuUIGlobals;//0x80
						Blam::Cache::DataTypes::tagRef SinglePlayerUIGlobals;//0x88
						Blam::Cache::DataTypes::tagRef MultiplayerUIGlobals;//0x90
					};
					TAG_BLOCK_SIZE_ASSERT(InterfaceTags, 0x98);
					Blam::Cache::DataTypes::Reflexive<InterfaceTags> InterfaceTags;//0x110
					struct WeaponList
					{
						Blam::Cache::DataTypes::tagRef Weapon;//0x0
						PAD(0x90);//0x8
					};
					TAG_BLOCK_SIZE_ASSERT(WeaponList, 0x98);
					Blam::Cache::DataTypes::Reflexive<WeaponList> WeaponList;//0x118
					struct CheatPowerups
					{
						Blam::Cache::DataTypes::tagRef Powerup;//0x0
						PAD(0x90);//0x8
					};
					TAG_BLOCK_SIZE_ASSERT(CheatPowerups, 0x98);
					Blam::Cache::DataTypes::Reflexive<CheatPowerups> CheatPowerups;//0x120
					struct MultiplayerInformation
					{
						Blam::Cache::DataTypes::tagRef Flag;//0x0
						Blam::Cache::DataTypes::tagRef Unit;//0x8
						struct Vehicles
						{
							Blam::Cache::DataTypes::tagRef Vehicle;//0x0
							PAD(0x90);//0x8
						};
						TAG_BLOCK_SIZE_ASSERT(Vehicles, 0x98);
						Blam::Cache::DataTypes::Reflexive<Vehicles> Vehicles;//0x10
						Blam::Cache::DataTypes::tagRef HillShader;//0x18
						Blam::Cache::DataTypes::tagRef FlagShader;//0x20
						Blam::Cache::DataTypes::tagRef Ball;//0x28
						struct Sounds
						{
							Blam::Cache::DataTypes::tagRef Sound;//0x0
							PAD(0x90);//0x8
						};
						TAG_BLOCK_SIZE_ASSERT(Sounds, 0x98);
						Blam::Cache::DataTypes::Reflexive<Sounds> Sounds;//0x30
						Blam::Cache::DataTypes::tagRef InGameText;//0x38
						PAD(0x58);//0x40
					};
					TAG_BLOCK_SIZE_ASSERT(MultiplayerInformation, 0x98);
					Blam::Cache::DataTypes::Reflexive<MultiplayerInformation> MultiplayerInformation;//0x128
					struct PlayerInformation
					{
						Blam::Cache::DataTypes::tagRef Unit;//0x0
						PAD(0x1C);//0x8
						float WalkingSpeed;//0x24
						PAD(0x4);//0x28
						float RunForward;//0x2C
						float RunBackward;//0x30
						float RunSideways;//0x34
						float RunAcceleration;//0x38
						float SneakForward;//0x3C
						float SneakBackward;//0x40
						float SneakSideways;//0x44
						float SneakAcceleration;//0x48
						float AirbornAcceleration;//0x4C
						PAD(0x10);//0x50
						float GrenadeOriginX;//0x60
						float GrenadeOriginY;//0x64
						float GrenadeOriginZ;//0x68
						PAD(0xC);//0x6C
						float StunMovementPenalty;//0x78
						float StunTurningPenalty;//0x7C
						float StunJumpingPenalty;//0x80
						float MinimumStunTime;//0x84
						float MaximumStunTime;//0x88
						PAD(0x8);//0x8C
						float FirstPersonIdleTimeMin;//0x94
						float FirstPersonIdleTimeMax;//0x98
						float FirstPersonSkipFraction;//0x9C
						PAD(0x10);//0xA0
						Blam::Cache::DataTypes::tagRef CoopRespawnEffect;//0xB0
						__int32 BinocularsZoomCount;//0xB8
						float BinocularsZoomRangeMin;//0xBC
						float BinocularsZoomRangeMax;//0xC0
						Blam::Cache::DataTypes::tagRef BinocularsZoomInSound;//0xC4
						Blam::Cache::DataTypes::tagRef BinocularsZoomOutSound;//0xCC
						PAD(0x10);//0xD4
						Blam::Cache::DataTypes::tagRef ActiveCamouflageOn;//0xE4
						Blam::Cache::DataTypes::tagRef ActiveCamouflageOff;//0xEC
						Blam::Cache::DataTypes::tagRef ActiveCamouflageError;//0xF4
						Blam::Cache::DataTypes::tagRef ActiveCamouflageReady;//0xFC
						Blam::Cache::DataTypes::tagRef FlashlightOn;//0x104
						Blam::Cache::DataTypes::tagRef FlashlightOff;//0x10C
						Blam::Cache::DataTypes::tagRef IceCream;//0x114
					};
					TAG_BLOCK_SIZE_ASSERT(PlayerInformation, 0x11C);
					Blam::Cache::DataTypes::Reflexive<PlayerInformation> PlayerInformation;//0x130
					struct PlayerRepresentation
					{
						Blam::Cache::DataTypes::tagRef FirstPersonHands;//0x0
						Blam::Cache::DataTypes::tagRef FirstPersonBody;//0x8
						PAD(0xA0);//0x10
						Blam::Cache::DataTypes::tagRef ThirdPersonUnit;//0xB0
						Blam::Cache::DataTypes::StringID ThirdPersonUnitVariant;//0xB8
					};
					TAG_BLOCK_SIZE_ASSERT(PlayerRepresentation, 0xBC);
					Blam::Cache::DataTypes::Reflexive<PlayerRepresentation> PlayerRepresentation;//0x138
					struct FallingDamage
					{
						PAD(0x8);//0x0
						float HarmfulFallingDistanceMin;//0x8
						float HarmfulFallingDistanceMax;//0xC
						Blam::Cache::DataTypes::tagRef FallingDamage;//0x10
						PAD(0x8);//0x18
						float MaximumFallingDistance;//0x20
						Blam::Cache::DataTypes::tagRef DistanceDamage;//0x24
						Blam::Cache::DataTypes::tagRef VehicleEnvironmentCollisionDamage;//0x2C
						Blam::Cache::DataTypes::tagRef VehicleKilledUnitDamageEffect;//0x34
						Blam::Cache::DataTypes::tagRef VehicleCollisionDamage;//0x3C
						Blam::Cache::DataTypes::tagRef FlamingDeathDamage;//0x44
						PAD(0x10);//0x4C
						float Unknown;//0x5C
						float Unknown;//0x60
						float Unknown;//0x64
					};
					TAG_BLOCK_SIZE_ASSERT(FallingDamage, 0x68);
					Blam::Cache::DataTypes::Reflexive<FallingDamage> FallingDamage;//0x140
					struct OldMaterials
					{
						Blam::Cache::DataTypes::StringID NewMaterialName;//0x0
						Blam::Cache::DataTypes::StringID NewGeneralMaterialName;//0x4
						float GroundFrictionScale;//0x8
						float GroundFrictionNormalK1Scale;//0xC
						float GroundFrictionNormalK0Scale;//0x10
						float GroundDepthScale;//0x14
						float GroundDampFractionScale;//0x18
						Blam::Cache::DataTypes::tagRef MeleeHitSound;//0x1C
					};
					TAG_BLOCK_SIZE_ASSERT(OldMaterials, 0x24);
					Blam::Cache::DataTypes::Reflexive<OldMaterials> OldMaterials;//0x148
					struct Materials
					{
						Blam::Cache::DataTypes::StringID Name;//0x0
						Blam::Cache::DataTypes::StringID ParentName;//0x4
						__int16 Unknown;//0x8
						enum class Flags : __int16
						{
							Flammable = 0x0,
							Biomass = 0x1,
						};
						Blam::Cache::DataTypes::Bitfield16<Flags> Flags;//0xA
						enum class OldMaterialType : __int16
						{
							Dirt = 0x0,
							Sand = 0x1,
							Stone = 0x2,
							Snow = 0x3,
							Wood = 0x4,
							MetalHollow = 0x5,
							MetalThin = 0x6,
							MetalThick = 0x7,
							Rubber = 0x8,
							Glass = 0x9,
							ForceField = 0xA,
							Grunt = 0xB,
							HunterArmor = 0xC,
							HunterSkin = 0xD,
							Elite = 0xE,
							Jackal = 0xF,
							JackalEnergyShield = 0x10,
							EngineerSkin = 0x11,
							EngineerForceField = 0x12,
							FloodCombatForm = 0x13,
							FloodCarrierForm = 0x14,
							CyborgArmor = 0x15,
							CyborgEnergyShield = 0x16,
							HumanArmor = 0x17,
							HumanSkin = 0x18,
							Sentinel = 0x19,
							Monitor = 0x1A,
							Plastic = 0x1B,
							Water = 0x1C,
							Leaves = 0x1D,
							EliteEnergyShield = 0x1E,
							Ice = 0x1F,
							HunterShield = 0x20,
						};
						OldMaterialType OldMaterialType;//0xC
						__int16 Unknown;//0xE
						Blam::Cache::DataTypes::StringID GeneralArmor;//0x10
						Blam::Cache::DataTypes::StringID SpecificArmor;//0x14
						PAD(0x4);//0x18
						float Friction;//0x1C
						float Restitution;//0x20
						float Density;//0x24
						Blam::Cache::DataTypes::tagRef OldMaterialPhysics;//0x28
						Blam::Cache::DataTypes::tagRef BreakableSurface;//0x30
						Blam::Cache::DataTypes::tagRef SoundSweetenerSmall;//0x38
						Blam::Cache::DataTypes::tagRef SoundSweetenerMedium;//0x40
						Blam::Cache::DataTypes::tagRef SoundSweetenerLarge;//0x48
						Blam::Cache::DataTypes::tagRef SoundSweetenerRolling;//0x50
						Blam::Cache::DataTypes::tagRef SoundSweetenerGrinding;//0x58
						Blam::Cache::DataTypes::tagRef SoundSweetenerMelee;//0x60
						Blam::Cache::DataTypes::tagRef Unknown;//0x68
						Blam::Cache::DataTypes::tagRef EffectSweetenerSmall;//0x70
						Blam::Cache::DataTypes::tagRef EffectSweetenerMedium;//0x78
						Blam::Cache::DataTypes::tagRef EffectSweetenerLarge;//0x80
						Blam::Cache::DataTypes::tagRef EffectSweetenerRolling;//0x88
						Blam::Cache::DataTypes::tagRef EffectSweetenerGrinding;//0x90
						Blam::Cache::DataTypes::tagRef EffectSweetenerMelee;//0x98
						Blam::Cache::DataTypes::tagRef Unknown;//0xA0
						enum class SweetenerInheritanceFlags : __int32
						{
							SoundSmall = 0x0,
							SoundMedium = 0x1,
							SoundLarge = 0x2,
							SoundRolling = 0x3,
							SoundGrinding = 0x4,
							SoundMelee = 0x4,
							Bit5 = 0x5,
							EffectSmall = 0x6,
							EffectMedium = 0x7,
							EffectLarge = 0x8,
							EffectRolling = 0x9,
							EffectGrinding = 0x10,
							EffectMelee = 0x11,
							Bit12 = 0x5,
						};
						Blam::Cache::DataTypes::Bitfield32<SweetenerInheritanceFlags> SweetenerInheritanceFlags;//0xA8
						Blam::Cache::DataTypes::tagRef MaterialEffects;//0xAC
					};
					TAG_BLOCK_SIZE_ASSERT(Materials, 0xB4);
					Blam::Cache::DataTypes::Reflexive<Materials> Materials;//0x150
					struct MultiplayerUI
					{
						Blam::Cache::DataTypes::tagRef RandomPlayerNames;//0x0
						struct ObsoleteProfileColors
						{
							PAD(0xC);//0x0
						};
						TAG_BLOCK_SIZE_ASSERT(ObsoleteProfileColors, 0xC);
						Blam::Cache::DataTypes::Reflexive<ObsoleteProfileColors> ObsoleteProfileColors;//0x8
						struct TeamColors
						{
							PAD(0xC);//0x0
						};
						TAG_BLOCK_SIZE_ASSERT(TeamColors, 0xC);
						Blam::Cache::DataTypes::Reflexive<TeamColors> TeamColors;//0x10
						Blam::Cache::DataTypes::tagRef TeamNames;//0x18
					};
					TAG_BLOCK_SIZE_ASSERT(MultiplayerUI, 0x20);
					Blam::Cache::DataTypes::Reflexive<MultiplayerUI> MultiplayerUI;//0x158
					struct ProfileColors
					{
						PAD(0xC);//0x0
					};
					TAG_BLOCK_SIZE_ASSERT(ProfileColors, 0xC);
					Blam::Cache::DataTypes::Reflexive<ProfileColors> ProfileColors;//0x160
					Blam::Cache::DataTypes::tagRef MultiplayerGlobals;//0x168
					struct RuntimeLevelData
					{
						struct CampaignLevels
						{
							__int32 CampaignID;//0x0
							__int32 MapID;//0x4
							Blam::Cache::DataTypes::String256 Path;//0x8
						};
						TAG_BLOCK_SIZE_ASSERT(CampaignLevels, 0x108);
						Blam::Cache::DataTypes::Reflexive<CampaignLevels> CampaignLevels;//0x0
					};
					TAG_BLOCK_SIZE_ASSERT(RuntimeLevelData, 0x8);
					Blam::Cache::DataTypes::Reflexive<RuntimeLevelData> RuntimeLevelData;//0x170
					struct UILevelData
					{
						struct Campaigns
						{
							__int32 CampaignID;//0x0
							Blam::Cache::DataTypes::Unicode32 EnglishName;//0x4
							Blam::Cache::DataTypes::Unicode32 JapaneseName;//0x44
							Blam::Cache::DataTypes::Unicode32 GermanName;//0x84
							Blam::Cache::DataTypes::Unicode32 FrenchName;//0xC4
							Blam::Cache::DataTypes::Unicode32 SpanishName;//0x104
							Blam::Cache::DataTypes::Unicode32 ItalianName;//0x144
							Blam::Cache::DataTypes::Unicode32 KoreanName;//0x184
							Blam::Cache::DataTypes::Unicode32 ChineseName;//0x1C4
							Blam::Cache::DataTypes::Unicode32 PortugueseName;//0x204
							Blam::Cache::DataTypes::Unicode128 EnglishDescription;//0x244
							Blam::Cache::DataTypes::Unicode128 JapaneseDescription;//0x344
							Blam::Cache::DataTypes::Unicode128 GermanDescription;//0x444
							Blam::Cache::DataTypes::Unicode128 FrenchDescription;//0x544
							Blam::Cache::DataTypes::Unicode128 SpanishDescription;//0x644
							Blam::Cache::DataTypes::Unicode128 ItalianDescription;//0x744
							Blam::Cache::DataTypes::Unicode128 KoreanDescription;//0x844
							Blam::Cache::DataTypes::Unicode128 ChineseDescription;//0x944
							Blam::Cache::DataTypes::Unicode128 PortugueseDescription;//0xA44
						};
						TAG_BLOCK_SIZE_ASSERT(Campaigns, 0xB44);
						Blam::Cache::DataTypes::Reflexive<Campaigns> Campaigns;//0x0
						struct CampaignLevels
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
						TAG_BLOCK_SIZE_ASSERT(CampaignLevels, 0xB50);
						Blam::Cache::DataTypes::Reflexive<CampaignLevels> CampaignLevels;//0x8
						struct MultiplayerLevels
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
							enum class Flags : __int8
							{
								Unlockable = 0x1,
							};
							Blam::Cache::DataTypes::Bitfield8<Flags> Flags;//0xC50
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
						};
						TAG_BLOCK_SIZE_ASSERT(MultiplayerLevels, 0xC64);
						Blam::Cache::DataTypes::Reflexive<MultiplayerLevels> MultiplayerLevels;//0x10
					};
					TAG_BLOCK_SIZE_ASSERT(UILevelData, 0x18);
					Blam::Cache::DataTypes::Reflexive<UILevelData> UILevelData;//0x178
					Blam::Cache::DataTypes::tagRef DefaultGlobalLighting;//0x180
					unsigned __int32 Unknown;//0x188
					unsigned __int32 Unknown;//0x18C
					unsigned __int32 StringCount;//0x190
					unsigned __int32 LocaleTableSize;//0x194
					unsigned __int32 LocaleIndexTableOffset;//0x198
					unsigned __int32 LocaleDataIndexOffset;//0x19C
					unsigned __int32 Unknown;//0x1A0
					unsigned __int32 Unknown;//0x1A4
					unsigned __int32 Unknown;//0x1A8
					unsigned __int32 StringCount;//0x1AC
					unsigned __int32 LocaleTableSize;//0x1B0
					unsigned __int32 LocaleIndexTableOffset;//0x1B4
					unsigned __int32 LocaleDataIndexOffset;//0x1B8
					unsigned __int32 Unknown;//0x1BC
					unsigned __int32 Unknown;//0x1C0
					unsigned __int32 Unknown;//0x1C4
					unsigned __int32 StringCount;//0x1C8
					unsigned __int32 LocaleTableSize;//0x1CC
					unsigned __int32 LocaleIndexTableOffset;//0x1D0
					unsigned __int32 LocaleDataIndexOffset;//0x1D4
					unsigned __int32 Unknown;//0x1D8
					unsigned __int32 Unknown;//0x1DC
					unsigned __int32 Unknown;//0x1E0
					unsigned __int32 StringCount;//0x1E4
					unsigned __int32 LocaleTableSize;//0x1E8
					unsigned __int32 LocaleIndexTableOffset;//0x1EC
					unsigned __int32 LocaleDataIndexOffset;//0x1F0
					unsigned __int32 Unknown;//0x1F4
					unsigned __int32 Unknown;//0x1F8
					unsigned __int32 Unknown;//0x1FC
					unsigned __int32 StringCount;//0x200
					unsigned __int32 LocaleTableSize;//0x204
					unsigned __int32 LocaleIndexTableOffset;//0x208
					unsigned __int32 LocaleDataIndexOffset;//0x20C
					unsigned __int32 Unknown;//0x210
					unsigned __int32 Unknown;//0x214
					unsigned __int32 Unknown;//0x218
					unsigned __int32 StringCount;//0x21C
					unsigned __int32 LocaleTableSize;//0x220
					unsigned __int32 LocaleIndexTableOffset;//0x224
					unsigned __int32 LocaleDataIndexOffset;//0x228
					unsigned __int32 Unknown;//0x22C
					unsigned __int32 Unknown;//0x230
					unsigned __int32 Unknown;//0x234
					unsigned __int32 StringCount;//0x238
					unsigned __int32 LocaleTableSize;//0x23C
					unsigned __int32 LocaleIndexTableOffset;//0x240
					unsigned __int32 LocaleDataIndexOffset;//0x244
					unsigned __int32 Unknown;//0x248
					unsigned __int32 Unknown;//0x24C
					unsigned __int32 Unknown;//0x250
					unsigned __int32 StringCount;//0x254
					unsigned __int32 LocaleTableSize;//0x258
					unsigned __int32 LocaleIndexTableOffset;//0x25C
					unsigned __int32 LocaleDataIndexOffset;//0x260
					unsigned __int32 Unknown;//0x264
					unsigned __int32 Unknown;//0x268
					unsigned __int32 Unknown;//0x26C
					unsigned __int32 StringCount;//0x270
					unsigned __int32 LocaleTableSize;//0x274
					unsigned __int32 LocaleIndexTableOffset;//0x278
					unsigned __int32 LocaleDataIndexOffset;//0x27C
					unsigned __int32 Unknown;//0x280
				};
				TAG_BLOCK_SIZE_ASSERT(Matg, 0x284);
			}
		}
	}
}
