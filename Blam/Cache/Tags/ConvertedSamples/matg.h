#pragma once
#include"DataTypes.h"
#include"tag_block_assert.h"


namespace Blam
{
namespace Cache
{
namespace Tags
{
namespace matg
{
struct matg
{
PAD(172);//0x0
enum class Language : __int32
{
English = 0,
Japanese = 1,
German = 2,
French = 3,
Spanish = 4,
Italian = 5,
Korean = 6,
Chinese = 7,
Portuguese = 8,
};
Language Language;//0x0
struct HavokCleanupResources
{
Blam::Cache::DataTypes::tagRef ObjectCleanupEffect;//0x0
};
TAG_BLOCK_SIZE_ASSERT(HavokCleanupResources,8);
Blam::Cache::DataTypes::Reflexive<HavokCleanupResources> HavokCleanupResources;//0xb0
struct CollisionDamage
{
Blam::Cache::DataTypes::tagRef CollisionDamage;//0x0
float MinGameAcceleration;//0x8
float MaxGameAcceleration;//0xc
float MinGameScale;//0x10
float MaxGameScale;//0x14
float MinAbsoluteAcceleration;//0x18
float MaxAbsoluteAcceleration;//0x1c
float MinAbsoluteScale;//0x20
float MaxAbsoluteScale;//0x24
PAD(32);//0x28
};
TAG_BLOCK_SIZE_ASSERT(CollisionDamage,48);
Blam::Cache::DataTypes::Reflexive<CollisionDamage> CollisionDamage;//0xb8
struct SoundGlobals
{
Blam::Cache::DataTypes::tagRef SoundClasses;//0x0
Blam::Cache::DataTypes::tagRef SoundEffects;//0x8
Blam::Cache::DataTypes::tagRef SoundMix;//0x10
Blam::Cache::DataTypes::tagRef SoundCombatDialogueConstants;//0x18
Blam::Cache::DataTypes::tagRef SoundGestalt;//0x20
PAD(4294967292);//0x28
};
TAG_BLOCK_SIZE_ASSERT(SoundGlobals,24);
Blam::Cache::DataTypes::Reflexive<SoundGlobals> SoundGlobals;//0xc0
struct AIGlobals
{
float DangerBroadlyFacing;//0x0
PAD(4);//0x4
float DangerShootingNear;//0x8
PAD(4);//0xc
float DangerShootingAt;//0x10
PAD(4);//0x14
float DangerExtremelyClose;//0x18
PAD(4);//0x1c
float DangerShieldDamage;//0x20
float DangerExtendedShieldDamage;//0x24
float DangerBodyDamage;//0x28
float DangerExtendedBodyDamage;//0x2c
PAD(48);//0x30
Blam::Cache::DataTypes::tagRef GlobalDialogue;//0x60
Blam::Cache::DataTypes::StringID DefaultMissionDialogueSoundEffect;//0x68
PAD(20);//0x6c
float JumpDown;//0x80
float JumpStep;//0x84
float JumpCrouch;//0x88
float JumpStand;//0x8c
float JumpStorey;//0x90
float JumpTower;//0x94
float MaxJumpDownHeightDown;//0x98
float MaxJumpDownHeightStep;//0x9c
float MaxJumpDownHeightCrouch;//0xa0
float MaxJumpDownHeightStand;//0xa4
float MaxJumpDownHeightStorey;//0xa8
float MaxJumpDownHeightTower;//0xac
float HoistStepmin;//0xb0
float HoistStepmax;//0xb4
float HoistCrouchmin;//0xb8
float HoistCrouchmax;//0xbc
float HoistStandmin;//0xc0
float HoistStandmax;//0xc4
PAD(24);//0xc8
float VaultStepmin;//0xe0
float VaultStepmax;//0xe4
float VaultCrouchmin;//0xe8
float VaultCrouchmax;//0xec
PAD(48);//0xf0
struct GravemindProperties
{
float MinimumRetreatTime;//0x0
float IdealRetreatTime;//0x4
float MaximumRetreatTime;//0x8
};
TAG_BLOCK_SIZE_ASSERT(GravemindProperties,c);
Blam::Cache::DataTypes::Reflexive<GravemindProperties> GravemindProperties;//0x120
PAD(48);//0x128
float ScaryTargetThreshold;//0x158
float ScaryWeaponThreshold;//0x15c
float PlayerScariness;//0x160
float BerserkingActorScariness;//0x164
};
TAG_BLOCK_SIZE_ASSERT(AIGlobals,168);
Blam::Cache::DataTypes::Reflexive<AIGlobals> AIGlobals;//0xc8
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
TAG_BLOCK_SIZE_ASSERT(ArmorModifiers,8);
Blam::Cache::DataTypes::Reflexive<ArmorModifiers> ArmorModifiers;//0x4
};
TAG_BLOCK_SIZE_ASSERT(DamageGroups,c);
Blam::Cache::DataTypes::Reflexive<DamageGroups> DamageGroups;//0x0
};
TAG_BLOCK_SIZE_ASSERT(DamageTable,8);
Blam::Cache::DataTypes::Reflexive<DamageTable> DamageTable;//0xd0
PAD(8);//0xd8
struct Sounds
{
Blam::Cache::DataTypes::tagRef Sound(Obsolete);//0x0
};
TAG_BLOCK_SIZE_ASSERT(Sounds,8);
Blam::Cache::DataTypes::Reflexive<Sounds> Sounds;//0xd8
struct Camera
{
Blam::Cache::DataTypes::tagRef DefaultUnitCameraTrack;//0x0
float DefaultChangePause;//0x8
float FirstPersonChangePause;//0xc
float FollowingCameraChangePause;//0x10
};
TAG_BLOCK_SIZE_ASSERT(Camera,14);
Blam::Cache::DataTypes::Reflexive<Camera> Camera;//0xe8
struct PlayerControl
{
float MagnetismFriction;//0x0
float MagnetismAdhesion;//0x4
float InconsequentialTargetScale;//0x8
PAD(12);//0xc
float CrosshairLocationx;//0x18
float CrosshairLocationy;//0x1c
float SecondsToStart;//0x20
float SecondsToFullSpeed;//0x24
float DecayRate;//0x28
float FullSpeedMultiplier;//0x2c
float PeggedMagnitude;//0x30
float PeggedAngularThreshold;//0x34
PAD(8);//0x38
float LookDefaultPitchRate;//0x40
float LookDefaultYawRate;//0x44
float LookPegThreshold;//0x48
float LookYawAccelerationTime;//0x4c
float LookYawAccelerationScale;//0x50
float LookPitchAccelerationTime;//0x54
float LookPitchAccelerationScale;//0x58
float LookAutolevelingScale;//0x5c
PAD(8);//0x60
float GravityScale;//0x68
__int16 Unknown;//0x6c
__int16 MinimumAutolevelingTicks;//0x6e
PAD(4);//0x70
struct LookFunction
{
float Scale;//0x0
};
TAG_BLOCK_SIZE_ASSERT(LookFunction,4);
Blam::Cache::DataTypes::Reflexive<LookFunction> LookFunction;//0x74
float MinimumActionHoldTime;//0x7c
};
TAG_BLOCK_SIZE_ASSERT(PlayerControl,80);
Blam::Cache::DataTypes::Reflexive<PlayerControl> PlayerControl;//0xf0
struct Difficulty
{
float EasyEnemyDamage;//0x0
float NormalEnemyDamage;//0x4
float HardEnemyDamage;//0x8
float ImpossibleEnemyDamage;//0xc
float EasyEnemyVitality;//0x10
float NormalEnemyVitality;//0x14
float HardEnemyVitality;//0x18
float ImpossibleEnemyVitality;//0x1c
float EasyEnemyShield;//0x20
float NormalEnemyShield;//0x24
float HardEnemyShield;//0x28
float ImpossibleEnemyShield;//0x2c
float EasyEnemyRecharge;//0x30
float NormalEnemyRecharge;//0x34
float HardEnemyRecharge;//0x38
float ImpossibleEnemyRecharge;//0x3c
float EasyFriendDamage;//0x40
float NormalFriendDamage;//0x44
float HardFriendDamage;//0x48
float ImpossibleFriendDamage;//0x4c
float EasyFriendVitality;//0x50
float NormalFriendVitality;//0x54
float HardFriendVitality;//0x58
float ImpossibleFriendVitality;//0x5c
float EasyFriendShield;//0x60
float NormalFriendShield;//0x64
float HardFriendShield;//0x68
float ImpossibleFriendShield;//0x6c
float EasyFriendRecharge;//0x70
float NormalFriendRecharge;//0x74
float HardFriendRecharge;//0x78
float ImpossibleFriendRecharge;//0x7c
float EasyInfectionForms;//0x80
float NormalInfectionForms;//0x84
float HardInfectionForms;//0x88
float ImpossibleInfectionForms;//0x8c
float EasyUnknown;//0x90
float NormalUnknown;//0x94
float HardUnknown;//0x98
float ImpossibleUnknown;//0x9c
float EasyRateofFire;//0xa0
float NormalRateofFire;//0xa4
float HardRateofFire;//0xa8
float ImpossibleRateofFire;//0xac
float EasyProjectileError;//0xb0
float NormalProjectileError;//0xb4
float HardProjectileError;//0xb8
float ImpossibleProjectileError;//0xbc
float EasyBurstError;//0xc0
float NormalBurstError;//0xc4
float HardBurstError;//0xc8
float ImpossibleBurstError;//0xcc
float EasyTargetDelay;//0xd0
float NormalTargetDelay;//0xd4
float HardTargetDelay;//0xd8
float ImpossibleTargetDelay;//0xdc
float EasyBurstSeparation;//0xe0
float NormalBurstSeparation;//0xe4
float HardBurstSeparation;//0xe8
float ImpossibleBurstSeparation;//0xec
float EasyTargetTracking;//0xf0
float NormalTargetTracking;//0xf4
float HardTargetTracking;//0xf8
float ImpossibleTargetTracking;//0xfc
float EasyTargetLeading;//0x100
float NormalTargetLeading;//0x104
float HardTargetLeading;//0x108
float ImpossibleTargetLeading;//0x10c
float EasyOverchargeChance;//0x110
float NormalOverchargeChance;//0x114
float HardOverchargeChance;//0x118
float ImpossibleOverchargeChance;//0x11c
float EasySpecialFireDelay;//0x120
float NormalSpecialFireDelay;//0x124
float HardSpecialFireDelay;//0x128
float ImpossibleSpecialFireDelay;//0x12c
float EasyGuidancevsPlayer;//0x130
float NormalGuidancevsPlayer;//0x134
float HardGuidancevsPlayer;//0x138
float ImpossibleGuidancevsPlayer;//0x13c
float EasyMeleeDelayBase;//0x140
float NormalMeleeDelayBase;//0x144
float HardMeleeDelayBase;//0x148
float ImpossibleMeleeDelayBase;//0x14c
float EasyMeleeDelayScale;//0x150
float NormalMeleeDelayScale;//0x154
float HardMeleeDelayScale;//0x158
float ImpossibleMeleeDelayScale;//0x15c
float EasyUnknown;//0x160
float NormalUnknown;//0x164
float HardUnknown;//0x168
float ImpossibleUnknown;//0x16c
float EasyGrenadeChanceScale;//0x170
float NormalGrenadeChanceScale;//0x174
float HardGrenadeChanceScale;//0x178
float ImpossibleGrenadeChanceScale;//0x17c
float EasyGrenadeTimerScale;//0x180
float NormalGrenadeTimerScale;//0x184
float HardGrenadeTimerScale;//0x188
float ImpossibleGrenadeTimerScale;//0x18c
float EasyUnknown;//0x190
float NormalUnknown;//0x194
float HardUnknown;//0x198
float ImpossibleUnknown;//0x19c
float EasyUnknown;//0x1a0
float NormalUnknown;//0x1a4
float HardUnknown;//0x1a8
float ImpossibleUnknown;//0x1ac
float EasyUnknown;//0x1b0
float NormalUnknown;//0x1b4
float HardUnknown;//0x1b8
float ImpossibleUnknown;//0x1bc
float EasyMajorUpgradeNormal;//0x1c0
float NormalMajorUpgradeNormal;//0x1c4
float HardMajorUpgradeNormal;//0x1c8
float ImpossibleMajorUpgradeNormal;//0x1cc
float EasyMajorUpgradeFew;//0x1d0
float NormalMajorUpgradeFew;//0x1d4
float HardMajorUpgradeFew;//0x1d8
float ImpossibleMajorUpgradeFew;//0x1dc
float EasyMajorUpgradeMany;//0x1e0
float NormalMajorUpgradeMany;//0x1e4
float HardMajorUpgradeMany;//0x1e8
float ImpossibleMajorUpgradeMany;//0x1ec
float EasyPlayerVehicleRamChance;//0x1f0
float NormalPlayerVehicleRamChance;//0x1f4
float HardPlayerVehicleRamChance;//0x1f8
float ImpossiblePlayerVehicleRamChance;//0x1fc
PAD(132);//0x200
};
TAG_BLOCK_SIZE_ASSERT(Difficulty,284);
Blam::Cache::DataTypes::Reflexive<Difficulty> Difficulty;//0xf8
struct Grenades
{
__int16 MaximumCount;//0x0
__int16 Unknown;//0x2
Blam::Cache::DataTypes::tagRef ThrowingEffect;//0x4
PAD(16);//0xc
Blam::Cache::DataTypes::tagRef Equipment;//0x1c
Blam::Cache::DataTypes::tagRef Projectile;//0x24
};
TAG_BLOCK_SIZE_ASSERT(Grenades,2c);
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
PAD(16);//0x48
struct GlobalVertexShaders
{
Blam::Cache::DataTypes::tagRef VertexShader;//0x0
};
TAG_BLOCK_SIZE_ASSERT(GlobalVertexShaders,8);
Blam::Cache::DataTypes::Reflexive<GlobalVertexShaders> GlobalVertexShaders;//0x58
Blam::Cache::DataTypes::tagRef Default2D;//0x60
Blam::Cache::DataTypes::tagRef Default3D;//0x68
Blam::Cache::DataTypes::tagRef DefaultCubeMap;//0x70
Blam::Cache::DataTypes::tagRef Unknown;//0x78
Blam::Cache::DataTypes::tagRef Unknown;//0x80
Blam::Cache::DataTypes::tagRef Unknown;//0x88
Blam::Cache::DataTypes::tagRef Unknown;//0x90
Blam::Cache::DataTypes::tagRef Unknown;//0x98
Blam::Cache::DataTypes::tagRef Unknown;//0xa0
PAD(36);//0xa8
Blam::Cache::DataTypes::tagRef GlobalShader;//0xcc
enum class Flags : __int16
{
TintEdgeDensity = 0,
};
Blam::Cache::DataTypes::Bitfield16<Flags> Flags;//0xd4
__int16 Unknown;//0xd6
float RefractionAmount;//0xd8
float DistanceFalloff;//0xdc
float TintColorRed;//0xe0
float TintColorGreen;//0xe4
float TintColorBlue;//0xe8
float HyperStealthRefraction;//0xec
float HyperStealthDistanceFalloff;//0xf0
float HyperStealthTintRed;//0xf4
float HyperStealthTintGreen;//0xf8
float HyperStealthTintBlue;//0xfc
Blam::Cache::DataTypes::tagRef Unknown;//0x100
};
TAG_BLOCK_SIZE_ASSERT(RasterizerData,108);
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
TAG_BLOCK_SIZE_ASSERT(InterfaceTags,98);
Blam::Cache::DataTypes::Reflexive<InterfaceTags> InterfaceTags;//0x110
struct WeaponList
{
Blam::Cache::DataTypes::tagRef Weapon;//0x0
PAD(144);//0x8
};
TAG_BLOCK_SIZE_ASSERT(WeaponList,98);
Blam::Cache::DataTypes::Reflexive<WeaponList> WeaponList;//0x118
struct CheatPowerups
{
Blam::Cache::DataTypes::tagRef Powerup;//0x0
PAD(144);//0x8
};
TAG_BLOCK_SIZE_ASSERT(CheatPowerups,98);
Blam::Cache::DataTypes::Reflexive<CheatPowerups> CheatPowerups;//0x120
struct MultiplayerInformation
{
Blam::Cache::DataTypes::tagRef Flag;//0x0
Blam::Cache::DataTypes::tagRef Unit;//0x8
struct Vehicles
{
Blam::Cache::DataTypes::tagRef Vehicle;//0x0
PAD(144);//0x8
};
TAG_BLOCK_SIZE_ASSERT(Vehicles,98);
Blam::Cache::DataTypes::Reflexive<Vehicles> Vehicles;//0x10
Blam::Cache::DataTypes::tagRef HillShader;//0x18
Blam::Cache::DataTypes::tagRef FlagShader;//0x20
Blam::Cache::DataTypes::tagRef Ball;//0x28
struct Sounds
{
Blam::Cache::DataTypes::tagRef Sound;//0x0
PAD(144);//0x8
};
TAG_BLOCK_SIZE_ASSERT(Sounds,98);
Blam::Cache::DataTypes::Reflexive<Sounds> Sounds;//0x30
Blam::Cache::DataTypes::tagRef InGameText;//0x38
PAD(88);//0x40
};
TAG_BLOCK_SIZE_ASSERT(MultiplayerInformation,98);
Blam::Cache::DataTypes::Reflexive<MultiplayerInformation> MultiplayerInformation;//0x128
struct PlayerInformation
{
Blam::Cache::DataTypes::tagRef Unit;//0x0
PAD(28);//0x8
float WalkingSpeed;//0x24
PAD(4);//0x28
float RunForward;//0x2c
float RunBackward;//0x30
float RunSideways;//0x34
float RunAcceleration;//0x38
float SneakForward;//0x3c
float SneakBackward;//0x40
float SneakSideways;//0x44
float SneakAcceleration;//0x48
float AirbornAcceleration;//0x4c
PAD(16);//0x50
float GrenadeOriginx;//0x60
float GrenadeOriginy;//0x64
float GrenadeOriginz;//0x68
PAD(12);//0x6c
float StunMovementPenalty;//0x78
float StunTurningPenalty;//0x7c
float StunJumpingPenalty;//0x80
float MinimumStunTime;//0x84
float MaximumStunTime;//0x88
PAD(8);//0x8c
float FirstPersonIdleTimemin;//0x94
float FirstPersonIdleTimemax;//0x98
float FirstPersonSkipFraction;//0x9c
PAD(16);//0xa0
Blam::Cache::DataTypes::tagRef CoopRespawnEffect;//0xb0
__int32 BinocularsZoomCount;//0xb8
float BinocularsZoomRangemin;//0xbc
float BinocularsZoomRangemax;//0xc0
Blam::Cache::DataTypes::tagRef BinocularsZoomInSound;//0xc4
Blam::Cache::DataTypes::tagRef BinocularsZoomOutSound;//0xcc
PAD(16);//0xd4
Blam::Cache::DataTypes::tagRef ActiveCamouflageOn;//0xe4
Blam::Cache::DataTypes::tagRef ActiveCamouflageOff;//0xec
Blam::Cache::DataTypes::tagRef ActiveCamouflageError;//0xf4
Blam::Cache::DataTypes::tagRef ActiveCamouflageReady;//0xfc
Blam::Cache::DataTypes::tagRef FlashlightOn;//0x104
Blam::Cache::DataTypes::tagRef FlashlightOff;//0x10c
Blam::Cache::DataTypes::tagRef IceCream;//0x114
};
TAG_BLOCK_SIZE_ASSERT(PlayerInformation,11c);
Blam::Cache::DataTypes::Reflexive<PlayerInformation> PlayerInformation;//0x130
struct PlayerRepresentation
{
Blam::Cache::DataTypes::tagRef FirstPersonHands;//0x0
Blam::Cache::DataTypes::tagRef FirstPersonBody;//0x8
PAD(160);//0x10
Blam::Cache::DataTypes::tagRef ThirdPersonUnit;//0xb0
Blam::Cache::DataTypes::StringID ThirdPersonUnitVariant;//0xb8
};
TAG_BLOCK_SIZE_ASSERT(PlayerRepresentation,bc);
Blam::Cache::DataTypes::Reflexive<PlayerRepresentation> PlayerRepresentation;//0x138
struct FallingDamage
{
PAD(8);//0x0
float HarmfulFallingDistancemin;//0x8
float HarmfulFallingDistancemax;//0xc
Blam::Cache::DataTypes::tagRef FallingDamage;//0x10
PAD(8);//0x18
float MaximumFallingDistance;//0x20
Blam::Cache::DataTypes::tagRef DistanceDamage;//0x24
Blam::Cache::DataTypes::tagRef VehicleEnvironmentCollisionDamage;//0x2c
Blam::Cache::DataTypes::tagRef VehicleKilledUnitDamageEffect;//0x34
Blam::Cache::DataTypes::tagRef VehicleCollisionDamage;//0x3c
Blam::Cache::DataTypes::tagRef FlamingDeathDamage;//0x44
PAD(16);//0x4c
float Unknown;//0x5c
float Unknown;//0x60
float Unknown;//0x64
};
TAG_BLOCK_SIZE_ASSERT(FallingDamage,68);
Blam::Cache::DataTypes::Reflexive<FallingDamage> FallingDamage;//0x140
struct OldMaterials
{
Blam::Cache::DataTypes::StringID NewMaterialName;//0x0
Blam::Cache::DataTypes::StringID NewGeneralMaterialName;//0x4
float GroundFrictionScale;//0x8
float GroundFrictionNormalk1Scale;//0xc
float GroundFrictionNormalk0Scale;//0x10
float GroundDepthScale;//0x14
float GroundDampFractionScale;//0x18
Blam::Cache::DataTypes::tagRef MeleeHitSound;//0x1c
};
TAG_BLOCK_SIZE_ASSERT(OldMaterials,24);
Blam::Cache::DataTypes::Reflexive<OldMaterials> OldMaterials;//0x148
struct Materials
{
Blam::Cache::DataTypes::StringID Name;//0x0
Blam::Cache::DataTypes::StringID ParentName;//0x4
__int16 Unknown;//0x8
enum class Flags : __int16
{
Flammable = 0,
Biomass = 1,
};
Blam::Cache::DataTypes::Bitfield16<Flags> Flags;//0xa
enum class OldMaterialType : __int16
{
Dirt = 0,
Sand = 1,
Stone = 2,
Snow = 3,
Wood = 4,
Metal(Hollow) = 5,
Metal(Thin) = 6,
Metal(Thick) = 7,
Rubber = 8,
Glass = 9,
ForceField = a,
Grunt = b,
HunterArmor = c,
HunterSkin = d,
Elite = e,
Jackal = f,
JackalEnergyShield = 10,
EngineerSkin = 11,
EngineerForceField = 12,
FloodCombatForm = 13,
FloodCarrierForm = 14,
CyborgArmor = 15,
CyborgEnergyShield = 16,
HumanArmor = 17,
HumanSkin = 18,
Sentinel = 19,
Monitor = 1a,
Plastic = 1b,
Water = 1c,
Leaves = 1d,
EliteEnergyShield = 1e,
Ice = 1f,
HunterShield = 20,
};
OldMaterialType OldMaterialType;//0xc
__int16 Unknown;//0xe
Blam::Cache::DataTypes::StringID GeneralArmor;//0x10
Blam::Cache::DataTypes::StringID SpecificArmor;//0x14
PAD(4);//0x18
float Friction;//0x1c
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
Blam::Cache::DataTypes::tagRef Unknown;//0xa0
enum class SweetenerInheritanceFlags : __int32
{
SoundSmall = 0,
SoundMedium = 1,
SoundLarge = 2,
SoundRolling = 3,
SoundGrinding = 4,
SoundMelee = 4,
Bit5 = 5,
EffectSmall = 6,
EffectMedium = 7,
EffectLarge = 8,
EffectRolling = 9,
EffectGrinding = 10,
EffectMelee = 11,
Bit12 = 5,
};
Blam::Cache::DataTypes::Bitfield32<SweetenerInheritanceFlags> SweetenerInheritanceFlags;//0xa8
Blam::Cache::DataTypes::tagRef MaterialEffects;//0xac
};
TAG_BLOCK_SIZE_ASSERT(Materials,b4);
Blam::Cache::DataTypes::Reflexive<Materials> Materials;//0x150
struct MultiplayerUI
{
Blam::Cache::DataTypes::tagRef RandomPlayerNames;//0x0
struct ObsoleteProfileColors
{
PAD(12);//0x0
};
TAG_BLOCK_SIZE_ASSERT(ObsoleteProfileColors,c);
Blam::Cache::DataTypes::Reflexive<ObsoleteProfileColors> ObsoleteProfileColors;//0x8
struct TeamColors
{
PAD(12);//0x0
};
TAG_BLOCK_SIZE_ASSERT(TeamColors,c);
Blam::Cache::DataTypes::Reflexive<TeamColors> TeamColors;//0x10
Blam::Cache::DataTypes::tagRef TeamNames;//0x18
};
TAG_BLOCK_SIZE_ASSERT(MultiplayerUI,20);
Blam::Cache::DataTypes::Reflexive<MultiplayerUI> MultiplayerUI;//0x158
struct ProfileColors
{
PAD(12);//0x0
};
TAG_BLOCK_SIZE_ASSERT(ProfileColors,c);
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
TAG_BLOCK_SIZE_ASSERT(CampaignLevels,108);
Blam::Cache::DataTypes::Reflexive<CampaignLevels> CampaignLevels;//0x0
};
TAG_BLOCK_SIZE_ASSERT(RuntimeLevelData,8);
Blam::Cache::DataTypes::Reflexive<RuntimeLevelData> RuntimeLevelData;//0x170
struct UILevelData
{
struct Campaigns
{
__int32 CampaignID;//0x0
Blam::Cache::DataTypes::Unicode32 EnglishName;//0x4
Blam::Cache::DataTypes::Unicode32 JapaneseName;//0x44
Blam::Cache::DataTypes::Unicode32 GermanName;//0x84
Blam::Cache::DataTypes::Unicode32 FrenchName;//0xc4
Blam::Cache::DataTypes::Unicode32 SpanishName;//0x104
Blam::Cache::DataTypes::Unicode32 ItalianName;//0x144
Blam::Cache::DataTypes::Unicode32 KoreanName;//0x184
Blam::Cache::DataTypes::Unicode32 ChineseName;//0x1c4
Blam::Cache::DataTypes::Unicode32 PortugueseName;//0x204
Blam::Cache::DataTypes::Unicode128 EnglishDescription;//0x244
Blam::Cache::DataTypes::Unicode128 JapaneseDescription;//0x344
Blam::Cache::DataTypes::Unicode128 GermanDescription;//0x444
Blam::Cache::DataTypes::Unicode128 FrenchDescription;//0x544
Blam::Cache::DataTypes::Unicode128 SpanishDescription;//0x644
Blam::Cache::DataTypes::Unicode128 ItalianDescription;//0x744
Blam::Cache::DataTypes::Unicode128 KoreanDescription;//0x844
Blam::Cache::DataTypes::Unicode128 ChineseDescription;//0x944
Blam::Cache::DataTypes::Unicode128 PortugueseDescription;//0xa44
};
TAG_BLOCK_SIZE_ASSERT(Campaigns,b44);
Blam::Cache::DataTypes::Reflexive<Campaigns> Campaigns;//0x0
struct CampaignLevels
{
__int32 CampaignID;//0x0
__int32 MapID;//0x4
Blam::Cache::DataTypes::tagRef Bitmap;//0x8
Blam::Cache::DataTypes::Unicode32 EnglishName;//0x10
Blam::Cache::DataTypes::Unicode32 JapaneseName;//0x50
Blam::Cache::DataTypes::Unicode32 GermanName;//0x90
Blam::Cache::DataTypes::Unicode32 FrenchName;//0xd0
Blam::Cache::DataTypes::Unicode32 SpanishName;//0x110
Blam::Cache::DataTypes::Unicode32 ItalianName;//0x150
Blam::Cache::DataTypes::Unicode32 KoreanName;//0x190
Blam::Cache::DataTypes::Unicode32 ChineseName;//0x1d0
Blam::Cache::DataTypes::Unicode32 PortugueseName;//0x210
Blam::Cache::DataTypes::Unicode128 EnglishDescription;//0x250
Blam::Cache::DataTypes::Unicode128 JapaneseDescription;//0x350
Blam::Cache::DataTypes::Unicode128 GermanDescription;//0x450
Blam::Cache::DataTypes::Unicode128 FrenchDescription;//0x550
Blam::Cache::DataTypes::Unicode128 SpanishDescription;//0x650
Blam::Cache::DataTypes::Unicode128 ItalianDescription;//0x750
Blam::Cache::DataTypes::Unicode128 KoreanDescription;//0x850
Blam::Cache::DataTypes::Unicode128 ChineseDescription;//0x950
Blam::Cache::DataTypes::Unicode128 PortugueseDescription;//0xa50
};
TAG_BLOCK_SIZE_ASSERT(CampaignLevels,b50);
Blam::Cache::DataTypes::Reflexive<CampaignLevels> CampaignLevels;//0x8
struct MultiplayerLevels
{
__int32 MapID;//0x0
Blam::Cache::DataTypes::tagRef Bitmap;//0x4
Blam::Cache::DataTypes::Unicode32 EnglishName;//0xc
Blam::Cache::DataTypes::Unicode32 JapaneseName;//0x4c
Blam::Cache::DataTypes::Unicode32 GermanName;//0x8c
Blam::Cache::DataTypes::Unicode32 FrenchName;//0xcc
Blam::Cache::DataTypes::Unicode32 SpanishName;//0x10c
Blam::Cache::DataTypes::Unicode32 ItalianName;//0x14c
Blam::Cache::DataTypes::Unicode32 KoreanName;//0x18c
Blam::Cache::DataTypes::Unicode32 ChineseName;//0x1cc
Blam::Cache::DataTypes::Unicode32 PortugueseName;//0x20c
Blam::Cache::DataTypes::Unicode128 EnglishDescription;//0x24c
Blam::Cache::DataTypes::Unicode128 JapaneseDescription;//0x34c
Blam::Cache::DataTypes::Unicode128 GermanDescription;//0x44c
Blam::Cache::DataTypes::Unicode128 FrenchDescription;//0x54c
Blam::Cache::DataTypes::Unicode128 SpanishDescription;//0x64c
Blam::Cache::DataTypes::Unicode128 ItalianDescription;//0x74c
Blam::Cache::DataTypes::Unicode128 KoreanDescription;//0x84c
Blam::Cache::DataTypes::Unicode128 ChineseDescription;//0x94c
Blam::Cache::DataTypes::Unicode128 PortugueseDescription;//0xa4c
Blam::Cache::DataTypes::String256 Path;//0xb4c
__int32 SortOrder;//0xc4c
enum class Flags : __int8
{
Unlockable = 1,
};
Blam::Cache::DataTypes::Bitfield8<Flags> Flags;//0xc50
__int8 Unknown;//0xc51
__int8 Unknown;//0xc52
__int8 Unknown;//0xc53
unsigned __int8 MaxTeamsNone;//0xc54
unsigned __int8 MaxTeamsCTF;//0xc55
unsigned __int8 MaxTeamsSlayer;//0xc56
unsigned __int8 MaxTeamsOddball;//0xc57
unsigned __int8 MaxTeamsKOTH;//0xc58
unsigned __int8 MaxTeamsRace;//0xc59
unsigned __int8 MaxTeamsHeadhunter;//0xc5a
unsigned __int8 MaxTeamsJuggernaut;//0xc5b
unsigned __int8 MaxTeamsTerritories;//0xc5c
unsigned __int8 MaxTeamsAssault;//0xc5d
unsigned __int8 MaxTeamsStub10;//0xc5e
unsigned __int8 MaxTeamsStub11;//0xc5f
unsigned __int8 MaxTeamsStub12;//0xc60
unsigned __int8 MaxTeamsStub13;//0xc61
unsigned __int8 MaxTeamsStub14;//0xc62
unsigned __int8 MaxTeamsStub15;//0xc63
};
TAG_BLOCK_SIZE_ASSERT(MultiplayerLevels,c64);
Blam::Cache::DataTypes::Reflexive<MultiplayerLevels> MultiplayerLevels;//0x10
};
TAG_BLOCK_SIZE_ASSERT(UILevelData,18);
Blam::Cache::DataTypes::Reflexive<UILevelData> UILevelData;//0x178
Blam::Cache::DataTypes::tagRef DefaultGlobalLighting;//0x180
unsigned __int32 Unknown;//0x188
unsigned __int32 Unknown;//0x18c
unsigned __int32 StringCount;//0x190
unsigned __int32 LocaleTableSize;//0x194
unsigned __int32 LocaleIndexTableOffset;//0x198
unsigned __int32 LocaleDataIndexOffset;//0x19c
unsigned __int32 Unknown;//0x1a0
unsigned __int32 Unknown;//0x1a4
unsigned __int32 Unknown;//0x1a8
unsigned __int32 StringCount;//0x1ac
unsigned __int32 LocaleTableSize;//0x1b0
unsigned __int32 LocaleIndexTableOffset;//0x1b4
unsigned __int32 LocaleDataIndexOffset;//0x1b8
unsigned __int32 Unknown;//0x1bc
unsigned __int32 Unknown;//0x1c0
unsigned __int32 Unknown;//0x1c4
unsigned __int32 StringCount;//0x1c8
unsigned __int32 LocaleTableSize;//0x1cc
unsigned __int32 LocaleIndexTableOffset;//0x1d0
unsigned __int32 LocaleDataIndexOffset;//0x1d4
unsigned __int32 Unknown;//0x1d8
unsigned __int32 Unknown;//0x1dc
unsigned __int32 Unknown;//0x1e0
unsigned __int32 StringCount;//0x1e4
unsigned __int32 LocaleTableSize;//0x1e8
unsigned __int32 LocaleIndexTableOffset;//0x1ec
unsigned __int32 LocaleDataIndexOffset;//0x1f0
unsigned __int32 Unknown;//0x1f4
unsigned __int32 Unknown;//0x1f8
unsigned __int32 Unknown;//0x1fc
unsigned __int32 StringCount;//0x200
unsigned __int32 LocaleTableSize;//0x204
unsigned __int32 LocaleIndexTableOffset;//0x208
unsigned __int32 LocaleDataIndexOffset;//0x20c
unsigned __int32 Unknown;//0x210
unsigned __int32 Unknown;//0x214
unsigned __int32 Unknown;//0x218
unsigned __int32 StringCount;//0x21c
unsigned __int32 LocaleTableSize;//0x220
unsigned __int32 LocaleIndexTableOffset;//0x224
unsigned __int32 LocaleDataIndexOffset;//0x228
unsigned __int32 Unknown;//0x22c
unsigned __int32 Unknown;//0x230
unsigned __int32 Unknown;//0x234
unsigned __int32 StringCount;//0x238
unsigned __int32 LocaleTableSize;//0x23c
unsigned __int32 LocaleIndexTableOffset;//0x240
unsigned __int32 LocaleDataIndexOffset;//0x244
unsigned __int32 Unknown;//0x248
unsigned __int32 Unknown;//0x24c
unsigned __int32 Unknown;//0x250
unsigned __int32 StringCount;//0x254
unsigned __int32 LocaleTableSize;//0x258
unsigned __int32 LocaleIndexTableOffset;//0x25c
unsigned __int32 LocaleDataIndexOffset;//0x260
unsigned __int32 Unknown;//0x264
unsigned __int32 Unknown;//0x268
unsigned __int32 Unknown;//0x26c
unsigned __int32 StringCount;//0x270
unsigned __int32 LocaleTableSize;//0x274
unsigned __int32 LocaleIndexTableOffset;//0x278
unsigned __int32 LocaleDataIndexOffset;//0x27c
unsigned __int32 Unknown;//0x280
};
TAG_BLOCK_SIZE_ASSERT(matg,284);
}
}
}
}
