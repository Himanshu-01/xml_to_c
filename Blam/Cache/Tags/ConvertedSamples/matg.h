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
Language Language;//0xac
struct Havok Cleanup Resources
{
Blam::Cache::DataTypes::tagRef Object Cleanup Effect;//0x0
};
TAG_BLOCK_SIZE_ASSERT(Havok Cleanup Resources,0x8);
Blam::Cache::DataTypes::Reflexive<Havok Cleanup Resources> Havok Cleanup Resources;//0xb0
struct Collision Damage
{
Blam::Cache::DataTypes::tagRef Collision Damage;//0x0
float Min Game Acceleration;//0x8
float Max Game Acceleration;//0xc
float Min Game Scale;//0x10
float Max Game Scale;//0x14
float Min Absolute Acceleration;//0x18
float Max Absolute Acceleration;//0x1c
float Min Absolute Scale;//0x20
float Max Absolute Scale;//0x24
PAD(32);//0x28
};
TAG_BLOCK_SIZE_ASSERT(Collision Damage,0x48);
Blam::Cache::DataTypes::Reflexive<Collision Damage> Collision Damage;//0xb8
struct Sound Globals
{
Blam::Cache::DataTypes::tagRef Sound Classes;//0x0
Blam::Cache::DataTypes::tagRef Sound Effects;//0x8
Blam::Cache::DataTypes::tagRef Sound Mix;//0x10
Blam::Cache::DataTypes::tagRef Sound Combat Dialogue Constants;//0x18
Blam::Cache::DataTypes::tagRef Sound Gestalt;//0x20
PAD(4294967292);//0x28
};
TAG_BLOCK_SIZE_ASSERT(Sound Globals,0x24);
Blam::Cache::DataTypes::Reflexive<Sound Globals> Sound Globals;//0xc0
struct AI Globals
{
float Danger Broadly Facing;//0x0
PAD(4);//0x4
float Danger Shooting Near;//0x8
PAD(4);//0xc
float Danger Shooting At;//0x10
PAD(4);//0x14
float Danger Extremely Close;//0x18
PAD(4);//0x1c
float Danger Shield Damage;//0x20
float Danger Extended Shield Damage;//0x24
float Danger Body Damage;//0x28
float Danger Extended Body Damage;//0x2c
PAD(48);//0x30
Blam::Cache::DataTypes::tagRef Global Dialogue;//0x60
Blam::Cache::DataTypes::StringID Default Mission Dialogue Sound Effect;//0x68
PAD(20);//0x6c
float Jump Down;//0x80
float Jump Step;//0x84
float Jump Crouch;//0x88
float Jump Stand;//0x8c
float Jump Storey;//0x90
float Jump Tower;//0x94
float Max Jump Down Height Down;//0x98
float Max Jump Down Height Step;//0x9c
float Max Jump Down Height Crouch;//0xa0
float Max Jump Down Height Stand;//0xa4
float Max Jump Down Height Storey;//0xa8
float Max Jump Down Height Tower;//0xac
float Hoist Step min;//0xb0
float Hoist Step max;//0xb4
float Hoist Crouch min;//0xb8
float Hoist Crouch max;//0xbc
float Hoist Stand min;//0xc0
float Hoist Stand max;//0xc4
PAD(24);//0xc8
float Vault Step min;//0xe0
float Vault Step max;//0xe4
float Vault Crouch min;//0xe8
float Vault Crouch max;//0xec
PAD(48);//0xf0
struct Gravemind Properties
{
float Minimum Retreat Time;//0x0
float Ideal Retreat Time;//0x4
float Maximum Retreat Time;//0x8
};
TAG_BLOCK_SIZE_ASSERT(Gravemind Properties,0xc);
Blam::Cache::DataTypes::Reflexive<Gravemind Properties> Gravemind Properties;//0x120
PAD(48);//0x128
float Scary Target Threshold;//0x158
float Scary Weapon Threshold;//0x15c
float Player Scariness;//0x160
float Berserking Actor Scariness;//0x164
};
TAG_BLOCK_SIZE_ASSERT(AI Globals,0x168);
Blam::Cache::DataTypes::Reflexive<AI Globals> AI Globals;//0xc8
struct Damage Table
{
struct Damage Groups
{
Blam::Cache::DataTypes::StringID Name;//0x0
struct Armor Modifiers
{
Blam::Cache::DataTypes::StringID Name;//0x0
float Damage Multiplier;//0x4
};
TAG_BLOCK_SIZE_ASSERT(Armor Modifiers,0x8);
Blam::Cache::DataTypes::Reflexive<Armor Modifiers> Armor Modifiers;//0x4
};
TAG_BLOCK_SIZE_ASSERT(Damage Groups,0xc);
Blam::Cache::DataTypes::Reflexive<Damage Groups> Damage Groups;//0x0
};
TAG_BLOCK_SIZE_ASSERT(Damage Table,0x8);
Blam::Cache::DataTypes::Reflexive<Damage Table> Damage Table;//0xd0
PAD(8);//0xd8
struct Sounds
{
Blam::Cache::DataTypes::tagRef Sound (Obsolete);//0x0
};
TAG_BLOCK_SIZE_ASSERT(Sounds,0x8);
Blam::Cache::DataTypes::Reflexive<Sounds> Sounds;//0xe0
struct Camera
{
Blam::Cache::DataTypes::tagRef Default Unit Camera Track;//0x0
float Default Change Pause;//0x8
float First Person Change Pause;//0xc
float Following Camera Change Pause;//0x10
};
TAG_BLOCK_SIZE_ASSERT(Camera,0x14);
Blam::Cache::DataTypes::Reflexive<Camera> Camera;//0xe8
struct Player Control
{
float Magnetism Friction;//0x0
float Magnetism Adhesion;//0x4
float Inconsequential Target Scale;//0x8
PAD(12);//0xc
float Crosshair Location x;//0x18
float Crosshair Location y;//0x1c
float Seconds To Start;//0x20
float Seconds To Full Speed;//0x24
float Decay Rate;//0x28
float Full Speed Multiplier;//0x2c
float Pegged Magnitude;//0x30
float Pegged Angular Threshold;//0x34
PAD(8);//0x38
float Look Default Pitch Rate;//0x40
float Look Default Yaw Rate;//0x44
float Look Peg Threshold;//0x48
float Look Yaw Acceleration Time;//0x4c
float Look Yaw Acceleration Scale;//0x50
float Look Pitch Acceleration Time;//0x54
float Look Pitch Acceleration Scale;//0x58
float Look Autoleveling Scale;//0x5c
PAD(8);//0x60
float Gravity Scale;//0x68
__int16 Unknown;//0x6c
__int16 Minimum Autoleveling Ticks;//0x6e
PAD(4);//0x70
struct Look Function
{
float Scale;//0x0
};
TAG_BLOCK_SIZE_ASSERT(Look Function,0x4);
Blam::Cache::DataTypes::Reflexive<Look Function> Look Function;//0x74
float Minimum Action Hold Time;//0x7c
};
TAG_BLOCK_SIZE_ASSERT(Player Control,0x80);
Blam::Cache::DataTypes::Reflexive<Player Control> Player Control;//0xf0
struct Difficulty
{
float Easy Enemy Damage;//0x0
float Normal Enemy Damage;//0x4
float Hard Enemy Damage;//0x8
float Impossible Enemy Damage;//0xc
float Easy Enemy Vitality;//0x10
float Normal Enemy Vitality;//0x14
float Hard Enemy Vitality;//0x18
float Impossible Enemy Vitality;//0x1c
float Easy Enemy Shield;//0x20
float Normal Enemy Shield;//0x24
float Hard Enemy Shield;//0x28
float Impossible Enemy Shield;//0x2c
float Easy Enemy Recharge;//0x30
float Normal Enemy Recharge;//0x34
float Hard Enemy Recharge;//0x38
float Impossible Enemy Recharge;//0x3c
float Easy Friend Damage;//0x40
float Normal Friend Damage;//0x44
float Hard Friend Damage;//0x48
float Impossible Friend Damage;//0x4c
float Easy Friend Vitality;//0x50
float Normal Friend Vitality;//0x54
float Hard Friend Vitality;//0x58
float Impossible Friend Vitality;//0x5c
float Easy Friend Shield;//0x60
float Normal Friend Shield;//0x64
float Hard Friend Shield;//0x68
float Impossible Friend Shield;//0x6c
float Easy Friend Recharge;//0x70
float Normal Friend Recharge;//0x74
float Hard Friend Recharge;//0x78
float Impossible Friend Recharge;//0x7c
float Easy Infection Forms;//0x80
float Normal Infection Forms;//0x84
float Hard Infection Forms;//0x88
float Impossible Infection Forms;//0x8c
float Easy Unknown;//0x90
float Normal Unknown;//0x94
float Hard Unknown;//0x98
float Impossible Unknown;//0x9c
float Easy Rate of Fire;//0xa0
float Normal Rate of Fire;//0xa4
float Hard Rate of Fire;//0xa8
float Impossible Rate of Fire;//0xac
float Easy Projectile Error;//0xb0
float Normal Projectile Error;//0xb4
float Hard Projectile Error;//0xb8
float Impossible Projectile Error;//0xbc
float Easy Burst Error;//0xc0
float Normal Burst Error;//0xc4
float Hard Burst Error;//0xc8
float Impossible Burst Error;//0xcc
float Easy Target Delay;//0xd0
float Normal Target Delay;//0xd4
float Hard Target Delay;//0xd8
float Impossible Target Delay;//0xdc
float Easy Burst Separation;//0xe0
float Normal Burst Separation;//0xe4
float Hard Burst Separation;//0xe8
float Impossible Burst Separation;//0xec
float Easy Target Tracking;//0xf0
float Normal Target Tracking;//0xf4
float Hard Target Tracking;//0xf8
float Impossible Target Tracking;//0xfc
float Easy Target Leading;//0x100
float Normal Target Leading;//0x104
float Hard Target Leading;//0x108
float Impossible Target Leading;//0x10c
float Easy Overcharge Chance;//0x110
float Normal Overcharge Chance;//0x114
float Hard Overcharge Chance;//0x118
float Impossible Overcharge Chance;//0x11c
float Easy Special Fire Delay;//0x120
float Normal Special Fire Delay;//0x124
float Hard Special Fire Delay;//0x128
float Impossible Special Fire Delay;//0x12c
float Easy Guidance vs Player;//0x130
float Normal Guidance vs Player;//0x134
float Hard Guidance vs Player;//0x138
float Impossible Guidance vs Player;//0x13c
float Easy Melee Delay Base;//0x140
float Normal Melee Delay Base;//0x144
float Hard Melee Delay Base;//0x148
float Impossible Melee Delay Base;//0x14c
float Easy Melee Delay Scale;//0x150
float Normal Melee Delay Scale;//0x154
float Hard Melee Delay Scale;//0x158
float Impossible Melee Delay Scale;//0x15c
float Easy Unknown;//0x160
float Normal Unknown;//0x164
float Hard Unknown;//0x168
float Impossible Unknown;//0x16c
float Easy Grenade Chance Scale;//0x170
float Normal Grenade Chance Scale;//0x174
float Hard Grenade Chance Scale;//0x178
float Impossible Grenade Chance Scale;//0x17c
float Easy Grenade Timer Scale;//0x180
float Normal Grenade Timer Scale;//0x184
float Hard Grenade Timer Scale;//0x188
float Impossible Grenade Timer Scale;//0x18c
float Easy Unknown;//0x190
float Normal Unknown;//0x194
float Hard Unknown;//0x198
float Impossible Unknown;//0x19c
float Easy Unknown;//0x1a0
float Normal Unknown;//0x1a4
float Hard Unknown;//0x1a8
float Impossible Unknown;//0x1ac
float Easy Unknown;//0x1b0
float Normal Unknown;//0x1b4
float Hard Unknown;//0x1b8
float Impossible Unknown;//0x1bc
float Easy Major Upgrade Normal;//0x1c0
float Normal Major Upgrade Normal;//0x1c4
float Hard Major Upgrade Normal;//0x1c8
float Impossible Major Upgrade Normal;//0x1cc
float Easy Major Upgrade Few;//0x1d0
float Normal Major Upgrade Few;//0x1d4
float Hard Major Upgrade Few;//0x1d8
float Impossible Major Upgrade Few;//0x1dc
float Easy Major Upgrade Many;//0x1e0
float Normal Major Upgrade Many;//0x1e4
float Hard Major Upgrade Many;//0x1e8
float Impossible Major Upgrade Many;//0x1ec
float Easy Player Vehicle Ram Chance;//0x1f0
float Normal Player Vehicle Ram Chance;//0x1f4
float Hard Player Vehicle Ram Chance;//0x1f8
float Impossible Player Vehicle Ram Chance;//0x1fc
PAD(132);//0x200
};
TAG_BLOCK_SIZE_ASSERT(Difficulty,0x284);
Blam::Cache::DataTypes::Reflexive<Difficulty> Difficulty;//0xf8
struct Grenades
{
__int16 Maximum Count;//0x0
__int16 Unknown;//0x2
Blam::Cache::DataTypes::tagRef Throwing Effect;//0x4
PAD(16);//0xc
Blam::Cache::DataTypes::tagRef Equipment;//0x1c
Blam::Cache::DataTypes::tagRef Projectile;//0x24
};
TAG_BLOCK_SIZE_ASSERT(Grenades,0x2c);
Blam::Cache::DataTypes::Reflexive<Grenades> Grenades;//0x100
struct Rasterizer Data
{
Blam::Cache::DataTypes::tagRef Distance Attenuation;//0x0
Blam::Cache::DataTypes::tagRef Vector Normalization;//0x8
Blam::Cache::DataTypes::tagRef Gradients;//0x10
Blam::Cache::DataTypes::tagRef Loading Screen;//0x18
Blam::Cache::DataTypes::tagRef Loading Screen Sweep;//0x20
Blam::Cache::DataTypes::tagRef Loading Screen Spinner;//0x28
Blam::Cache::DataTypes::tagRef Glow;//0x30
Blam::Cache::DataTypes::tagRef Loading Screen Logos;//0x38
Blam::Cache::DataTypes::tagRef Loading Screen Tickers;//0x40
PAD(16);//0x48
struct Global Vertex Shaders
{
Blam::Cache::DataTypes::tagRef Vertex Shader;//0x0
};
TAG_BLOCK_SIZE_ASSERT(Global Vertex Shaders,0x8);
Blam::Cache::DataTypes::Reflexive<Global Vertex Shaders> Global Vertex Shaders;//0x58
Blam::Cache::DataTypes::tagRef Default 2D;//0x60
Blam::Cache::DataTypes::tagRef Default 3D;//0x68
Blam::Cache::DataTypes::tagRef Default Cube Map;//0x70
Blam::Cache::DataTypes::tagRef Unknown;//0x78
Blam::Cache::DataTypes::tagRef Unknown;//0x80
Blam::Cache::DataTypes::tagRef Unknown;//0x88
Blam::Cache::DataTypes::tagRef Unknown;//0x90
Blam::Cache::DataTypes::tagRef Unknown;//0x98
Blam::Cache::DataTypes::tagRef Unknown;//0xa0
PAD(36);//0xa8
Blam::Cache::DataTypes::tagRef Global Shader;//0xcc
enum class Flags : __int16
{
Tint Edge Density = 0,
};
Blam::Cache::DataTypes::Bitfield16<Flags> Flags;//0xd4
__int16 Unknown;//0xd6
float Refraction Amount;//0xd8
float Distance Falloff;//0xdc
float Tint Color Red;//0xe0
float Tint Color Green;//0xe4
float Tint Color Blue;//0xe8
float Hyper Stealth Refraction;//0xec
float Hyper Stealth Distance Falloff;//0xf0
float Hyper Stealth Tint Red;//0xf4
float Hyper Stealth Tint Green;//0xf8
float Hyper Stealth Tint Blue;//0xfc
Blam::Cache::DataTypes::tagRef Unknown;//0x100
};
TAG_BLOCK_SIZE_ASSERT(Rasterizer Data,0x108);
Blam::Cache::DataTypes::Reflexive<Rasterizer Data> Rasterizer Data;//0x108
struct Interface Tags
{
Blam::Cache::DataTypes::tagRef Obsolete 1;//0x0
Blam::Cache::DataTypes::tagRef Obsolete 2;//0x8
Blam::Cache::DataTypes::tagRef Screen Color Table;//0x10
Blam::Cache::DataTypes::tagRef HUD Color Table;//0x18
Blam::Cache::DataTypes::tagRef Editor Color Table;//0x20
Blam::Cache::DataTypes::tagRef Dialog Color Table;//0x28
Blam::Cache::DataTypes::tagRef HUD Globals;//0x30
Blam::Cache::DataTypes::tagRef Motion Sensor Sweep Bitmap;//0x38
Blam::Cache::DataTypes::tagRef Motion Sensor Sweep Bitmap Mask;//0x40
Blam::Cache::DataTypes::tagRef Multiplayer HUD Bitmap;//0x48
Blam::Cache::DataTypes::tagRef Unknown;//0x50
Blam::Cache::DataTypes::tagRef HUD Digits Definition;//0x58
Blam::Cache::DataTypes::tagRef Motion Sensor Blip Bitmap;//0x60
Blam::Cache::DataTypes::tagRef Interface Goo Map 1;//0x68
Blam::Cache::DataTypes::tagRef Interface Goo Map 2;//0x70
Blam::Cache::DataTypes::tagRef Interface Goo Map 3;//0x78
Blam::Cache::DataTypes::tagRef Main Menu UI Globals;//0x80
Blam::Cache::DataTypes::tagRef Single Player UI Globals;//0x88
Blam::Cache::DataTypes::tagRef Multiplayer UI Globals;//0x90
};
TAG_BLOCK_SIZE_ASSERT(Interface Tags,0x98);
Blam::Cache::DataTypes::Reflexive<Interface Tags> Interface Tags;//0x110
struct Weapon List
{
Blam::Cache::DataTypes::tagRef Weapon;//0x0
PAD(144);//0x8
};
TAG_BLOCK_SIZE_ASSERT(Weapon List,0x98);
Blam::Cache::DataTypes::Reflexive<Weapon List> Weapon List;//0x118
struct Cheat Powerups
{
Blam::Cache::DataTypes::tagRef Powerup;//0x0
PAD(144);//0x8
};
TAG_BLOCK_SIZE_ASSERT(Cheat Powerups,0x98);
Blam::Cache::DataTypes::Reflexive<Cheat Powerups> Cheat Powerups;//0x120
struct Multiplayer Information
{
Blam::Cache::DataTypes::tagRef Flag;//0x0
Blam::Cache::DataTypes::tagRef Unit;//0x8
struct Vehicles
{
Blam::Cache::DataTypes::tagRef Vehicle;//0x0
PAD(144);//0x8
};
TAG_BLOCK_SIZE_ASSERT(Vehicles,0x98);
Blam::Cache::DataTypes::Reflexive<Vehicles> Vehicles;//0x10
Blam::Cache::DataTypes::tagRef Hill Shader;//0x18
Blam::Cache::DataTypes::tagRef Flag Shader;//0x20
Blam::Cache::DataTypes::tagRef Ball;//0x28
struct Sounds
{
Blam::Cache::DataTypes::tagRef Sound;//0x0
PAD(144);//0x8
};
TAG_BLOCK_SIZE_ASSERT(Sounds,0x98);
Blam::Cache::DataTypes::Reflexive<Sounds> Sounds;//0x30
Blam::Cache::DataTypes::tagRef In Game Text;//0x38
PAD(88);//0x40
};
TAG_BLOCK_SIZE_ASSERT(Multiplayer Information,0x98);
Blam::Cache::DataTypes::Reflexive<Multiplayer Information> Multiplayer Information;//0x128
struct Player Information
{
Blam::Cache::DataTypes::tagRef Unit;//0x0
PAD(28);//0x8
float Walking Speed;//0x24
PAD(4);//0x28
float Run Forward;//0x2c
float Run Backward;//0x30
float Run Sideways;//0x34
float Run Acceleration;//0x38
float Sneak Forward;//0x3c
float Sneak Backward;//0x40
float Sneak Sideways;//0x44
float Sneak Acceleration;//0x48
float Airborn Acceleration;//0x4c
PAD(16);//0x50
float Grenade Origin x;//0x60
float Grenade Origin y;//0x64
float Grenade Origin z;//0x68
PAD(12);//0x6c
float Stun Movement Penalty;//0x78
float Stun Turning Penalty;//0x7c
float Stun Jumping Penalty;//0x80
float Minimum Stun Time;//0x84
float Maximum Stun Time;//0x88
PAD(8);//0x8c
float First Person Idle Time min;//0x94
float First Person Idle Time max;//0x98
float First Person Skip Fraction;//0x9c
PAD(16);//0xa0
Blam::Cache::DataTypes::tagRef Coop Respawn Effect;//0xb0
__int32 Binoculars Zoom Count;//0xb8
float Binoculars Zoom Range min;//0xbc
float Binoculars Zoom Range max;//0xc0
Blam::Cache::DataTypes::tagRef Binoculars Zoom In Sound;//0xc4
Blam::Cache::DataTypes::tagRef Binoculars Zoom Out Sound;//0xcc
PAD(16);//0xd4
Blam::Cache::DataTypes::tagRef Active Camouflage On;//0xe4
Blam::Cache::DataTypes::tagRef Active Camouflage Off;//0xec
Blam::Cache::DataTypes::tagRef Active Camouflage Error;//0xf4
Blam::Cache::DataTypes::tagRef Active Camouflage Ready;//0xfc
Blam::Cache::DataTypes::tagRef Flashlight On;//0x104
Blam::Cache::DataTypes::tagRef Flashlight Off;//0x10c
Blam::Cache::DataTypes::tagRef Ice Cream;//0x114
};
TAG_BLOCK_SIZE_ASSERT(Player Information,0x11c);
Blam::Cache::DataTypes::Reflexive<Player Information> Player Information;//0x130
struct Player Representation
{
Blam::Cache::DataTypes::tagRef First Person Hands;//0x0
Blam::Cache::DataTypes::tagRef First Person Body;//0x8
PAD(160);//0x10
Blam::Cache::DataTypes::tagRef Third Person Unit;//0xb0
Blam::Cache::DataTypes::StringID Third Person Unit Variant;//0xb8
};
TAG_BLOCK_SIZE_ASSERT(Player Representation,0xbc);
Blam::Cache::DataTypes::Reflexive<Player Representation> Player Representation;//0x138
struct Falling Damage
{
PAD(8);//0x0
float Harmful Falling Distance min;//0x8
float Harmful Falling Distance max;//0xc
Blam::Cache::DataTypes::tagRef Falling Damage;//0x10
PAD(8);//0x18
float Maximum Falling Distance;//0x20
Blam::Cache::DataTypes::tagRef Distance Damage;//0x24
Blam::Cache::DataTypes::tagRef Vehicle Environment Collision Damage;//0x2c
Blam::Cache::DataTypes::tagRef Vehicle Killed Unit Damage Effect;//0x34
Blam::Cache::DataTypes::tagRef Vehicle Collision Damage;//0x3c
Blam::Cache::DataTypes::tagRef Flaming Death Damage;//0x44
PAD(16);//0x4c
float Unknown;//0x5c
float Unknown;//0x60
float Unknown;//0x64
};
TAG_BLOCK_SIZE_ASSERT(Falling Damage,0x68);
Blam::Cache::DataTypes::Reflexive<Falling Damage> Falling Damage;//0x140
struct Old Materials
{
Blam::Cache::DataTypes::StringID New Material Name;//0x0
Blam::Cache::DataTypes::StringID New General Material Name;//0x4
float Ground Friction Scale;//0x8
float Ground Friction Normal k1 Scale;//0xc
float Ground Friction Normal k0 Scale;//0x10
float Ground Depth Scale;//0x14
float Ground Damp Fraction Scale;//0x18
Blam::Cache::DataTypes::tagRef Melee Hit Sound;//0x1c
};
TAG_BLOCK_SIZE_ASSERT(Old Materials,0x24);
Blam::Cache::DataTypes::Reflexive<Old Materials> Old Materials;//0x148
struct Materials
{
Blam::Cache::DataTypes::StringID Name;//0x0
Blam::Cache::DataTypes::StringID Parent Name;//0x4
__int16 Unknown;//0x8
enum class Flags : __int16
{
Flammable = 0,
Biomass = 1,
};
Blam::Cache::DataTypes::Bitfield16<Flags> Flags;//0xa
enum class Old Material Type : __int16
{
Dirt = 0,
Sand = 1,
Stone = 2,
Snow = 3,
Wood = 4,
Metal (Hollow) = 5,
Metal (Thin) = 6,
Metal (Thick) = 7,
Rubber = 8,
Glass = 9,
Force Field = a,
Grunt = b,
Hunter Armor = c,
Hunter Skin = d,
Elite = e,
Jackal = f,
Jackal Energy Shield = 10,
Engineer Skin = 11,
Engineer Force Field = 12,
Flood Combat Form = 13,
Flood Carrier Form = 14,
Cyborg Armor = 15,
Cyborg Energy Shield = 16,
Human Armor = 17,
Human Skin = 18,
Sentinel = 19,
Monitor = 1a,
Plastic = 1b,
Water = 1c,
Leaves = 1d,
Elite Energy Shield = 1e,
Ice = 1f,
Hunter Shield = 20,
};
Old Material Type Old Material Type;//0xc
__int16 Unknown;//0xe
Blam::Cache::DataTypes::StringID General Armor;//0x10
Blam::Cache::DataTypes::StringID Specific Armor;//0x14
PAD(4);//0x18
float Friction;//0x1c
float Restitution;//0x20
float Density;//0x24
Blam::Cache::DataTypes::tagRef Old Material Physics;//0x28
Blam::Cache::DataTypes::tagRef Breakable Surface;//0x30
Blam::Cache::DataTypes::tagRef Sound Sweetener Small;//0x38
Blam::Cache::DataTypes::tagRef Sound Sweetener Medium;//0x40
Blam::Cache::DataTypes::tagRef Sound Sweetener Large;//0x48
Blam::Cache::DataTypes::tagRef Sound Sweetener Rolling;//0x50
Blam::Cache::DataTypes::tagRef Sound Sweetener Grinding;//0x58
Blam::Cache::DataTypes::tagRef Sound Sweetener Melee;//0x60
Blam::Cache::DataTypes::tagRef Unknown;//0x68
Blam::Cache::DataTypes::tagRef Effect Sweetener Small;//0x70
Blam::Cache::DataTypes::tagRef Effect Sweetener Medium;//0x78
Blam::Cache::DataTypes::tagRef Effect Sweetener Large;//0x80
Blam::Cache::DataTypes::tagRef Effect Sweetener Rolling;//0x88
Blam::Cache::DataTypes::tagRef Effect Sweetener Grinding;//0x90
Blam::Cache::DataTypes::tagRef Effect Sweetener Melee;//0x98
Blam::Cache::DataTypes::tagRef Unknown;//0xa0
enum class Sweetener Inheritance Flags : __int32
{
Sound Small = 0,
Sound Medium = 1,
Sound Large = 2,
Sound Rolling = 3,
Sound Grinding = 4,
Sound Melee = 4,
Bit 5 = 5,
Effect Small = 6,
Effect Medium = 7,
Effect Large = 8,
Effect Rolling = 9,
Effect Grinding = 10,
Effect Melee = 11,
Bit 12 = 5,
};
Blam::Cache::DataTypes::Bitfield32<Sweetener Inheritance Flags> Sweetener Inheritance Flags;//0xa8
Blam::Cache::DataTypes::tagRef Material Effects;//0xac
};
TAG_BLOCK_SIZE_ASSERT(Materials,0xb4);
Blam::Cache::DataTypes::Reflexive<Materials> Materials;//0x150
struct Multiplayer UI
{
Blam::Cache::DataTypes::tagRef Random Player Names;//0x0
struct Obsolete Profile Colors
{
PAD(12);//0x0
};
TAG_BLOCK_SIZE_ASSERT(Obsolete Profile Colors,0xc);
Blam::Cache::DataTypes::Reflexive<Obsolete Profile Colors> Obsolete Profile Colors;//0x8
struct Team Colors
{
PAD(12);//0x0
};
TAG_BLOCK_SIZE_ASSERT(Team Colors,0xc);
Blam::Cache::DataTypes::Reflexive<Team Colors> Team Colors;//0x10
Blam::Cache::DataTypes::tagRef Team Names;//0x18
};
TAG_BLOCK_SIZE_ASSERT(Multiplayer UI,0x20);
Blam::Cache::DataTypes::Reflexive<Multiplayer UI> Multiplayer UI;//0x158
struct Profile Colors
{
PAD(12);//0x0
};
TAG_BLOCK_SIZE_ASSERT(Profile Colors,0xc);
Blam::Cache::DataTypes::Reflexive<Profile Colors> Profile Colors;//0x160
Blam::Cache::DataTypes::tagRef Multiplayer Globals;//0x168
struct Runtime Level Data
{
struct Campaign Levels
{
__int32 Campaign ID;//0x0
__int32 Map ID;//0x4
Blam::Cache::DataTypes::String256 Path;//0x8
};
TAG_BLOCK_SIZE_ASSERT(Campaign Levels,0x108);
Blam::Cache::DataTypes::Reflexive<Campaign Levels> Campaign Levels;//0x0
};
TAG_BLOCK_SIZE_ASSERT(Runtime Level Data,0x8);
Blam::Cache::DataTypes::Reflexive<Runtime Level Data> Runtime Level Data;//0x170
struct UI Level Data
{
struct Campaigns
{
__int32 Campaign ID;//0x0
Blam::Cache::DataTypes::Unicode32 English Name;//0x4
Blam::Cache::DataTypes::Unicode32 Japanese Name;//0x44
Blam::Cache::DataTypes::Unicode32 German Name;//0x84
Blam::Cache::DataTypes::Unicode32 French Name;//0xc4
Blam::Cache::DataTypes::Unicode32 Spanish Name;//0x104
Blam::Cache::DataTypes::Unicode32 Italian Name;//0x144
Blam::Cache::DataTypes::Unicode32 Korean Name;//0x184
Blam::Cache::DataTypes::Unicode32 Chinese Name;//0x1c4
Blam::Cache::DataTypes::Unicode32 Portuguese Name;//0x204
Blam::Cache::DataTypes::Unicode128 English Description;//0x244
Blam::Cache::DataTypes::Unicode128 Japanese Description;//0x344
Blam::Cache::DataTypes::Unicode128 German Description;//0x444
Blam::Cache::DataTypes::Unicode128 French Description;//0x544
Blam::Cache::DataTypes::Unicode128 Spanish Description;//0x644
Blam::Cache::DataTypes::Unicode128 Italian Description;//0x744
Blam::Cache::DataTypes::Unicode128 Korean Description;//0x844
Blam::Cache::DataTypes::Unicode128 Chinese Description;//0x944
Blam::Cache::DataTypes::Unicode128 Portuguese Description;//0xa44
};
TAG_BLOCK_SIZE_ASSERT(Campaigns,0xb44);
Blam::Cache::DataTypes::Reflexive<Campaigns> Campaigns;//0x0
struct Campaign Levels
{
__int32 Campaign ID;//0x0
__int32 Map ID;//0x4
Blam::Cache::DataTypes::tagRef Bitmap;//0x8
Blam::Cache::DataTypes::Unicode32 English Name;//0x10
Blam::Cache::DataTypes::Unicode32 Japanese Name;//0x50
Blam::Cache::DataTypes::Unicode32 German Name;//0x90
Blam::Cache::DataTypes::Unicode32 French Name;//0xd0
Blam::Cache::DataTypes::Unicode32 Spanish Name;//0x110
Blam::Cache::DataTypes::Unicode32 Italian Name;//0x150
Blam::Cache::DataTypes::Unicode32 Korean Name;//0x190
Blam::Cache::DataTypes::Unicode32 Chinese Name;//0x1d0
Blam::Cache::DataTypes::Unicode32 Portuguese Name;//0x210
Blam::Cache::DataTypes::Unicode128 English Description;//0x250
Blam::Cache::DataTypes::Unicode128 Japanese Description;//0x350
Blam::Cache::DataTypes::Unicode128 German Description;//0x450
Blam::Cache::DataTypes::Unicode128 French Description;//0x550
Blam::Cache::DataTypes::Unicode128 Spanish Description;//0x650
Blam::Cache::DataTypes::Unicode128 Italian Description;//0x750
Blam::Cache::DataTypes::Unicode128 Korean Description;//0x850
Blam::Cache::DataTypes::Unicode128 Chinese Description;//0x950
Blam::Cache::DataTypes::Unicode128 Portuguese Description;//0xa50
};
TAG_BLOCK_SIZE_ASSERT(Campaign Levels,0xb50);
Blam::Cache::DataTypes::Reflexive<Campaign Levels> Campaign Levels;//0x8
struct Multiplayer Levels
{
__int32 Map ID;//0x0
Blam::Cache::DataTypes::tagRef Bitmap;//0x4
Blam::Cache::DataTypes::Unicode32 English Name;//0xc
Blam::Cache::DataTypes::Unicode32 Japanese Name;//0x4c
Blam::Cache::DataTypes::Unicode32 German Name;//0x8c
Blam::Cache::DataTypes::Unicode32 French Name;//0xcc
Blam::Cache::DataTypes::Unicode32 Spanish Name;//0x10c
Blam::Cache::DataTypes::Unicode32 Italian Name;//0x14c
Blam::Cache::DataTypes::Unicode32 Korean Name;//0x18c
Blam::Cache::DataTypes::Unicode32 Chinese Name;//0x1cc
Blam::Cache::DataTypes::Unicode32 Portuguese Name;//0x20c
Blam::Cache::DataTypes::Unicode128 English Description;//0x24c
Blam::Cache::DataTypes::Unicode128 Japanese Description;//0x34c
Blam::Cache::DataTypes::Unicode128 German Description;//0x44c
Blam::Cache::DataTypes::Unicode128 French Description;//0x54c
Blam::Cache::DataTypes::Unicode128 Spanish Description;//0x64c
Blam::Cache::DataTypes::Unicode128 Italian Description;//0x74c
Blam::Cache::DataTypes::Unicode128 Korean Description;//0x84c
Blam::Cache::DataTypes::Unicode128 Chinese Description;//0x94c
Blam::Cache::DataTypes::Unicode128 Portuguese Description;//0xa4c
Blam::Cache::DataTypes::String256 Path;//0xb4c
__int32 Sort Order;//0xc4c
enum class Flags : __int8
{
Unlockable = 1,
};
Blam::Cache::DataTypes::Bitfield8<Flags> Flags;//0xc50
__int8 Unknown;//0xc51
__int8 Unknown;//0xc52
__int8 Unknown;//0xc53
unsigned __int8 Max Teams None;//0xc54
unsigned __int8 Max Teams CTF;//0xc55
unsigned __int8 Max Teams Slayer;//0xc56
unsigned __int8 Max Teams Oddball;//0xc57
unsigned __int8 Max Teams KOTH;//0xc58
unsigned __int8 Max Teams Race;//0xc59
unsigned __int8 Max Teams Headhunter;//0xc5a
unsigned __int8 Max Teams Juggernaut;//0xc5b
unsigned __int8 Max Teams Territories;//0xc5c
unsigned __int8 Max Teams Assault;//0xc5d
unsigned __int8 Max Teams Stub 10;//0xc5e
unsigned __int8 Max Teams Stub 11;//0xc5f
unsigned __int8 Max Teams Stub 12;//0xc60
unsigned __int8 Max Teams Stub 13;//0xc61
unsigned __int8 Max Teams Stub 14;//0xc62
unsigned __int8 Max Teams Stub 15;//0xc63
};
TAG_BLOCK_SIZE_ASSERT(Multiplayer Levels,0xc64);
Blam::Cache::DataTypes::Reflexive<Multiplayer Levels> Multiplayer Levels;//0x10
};
TAG_BLOCK_SIZE_ASSERT(UI Level Data,0x18);
Blam::Cache::DataTypes::Reflexive<UI Level Data> UI Level Data;//0x178
Blam::Cache::DataTypes::tagRef Default Global Lighting;//0x180
unsigned __int32 Unknown;//0x188
unsigned __int32 Unknown;//0x18c
unsigned __int32 String Count;//0x190
unsigned __int32 Locale Table Size;//0x194
unsigned __int32 Locale Index Table Offset;//0x198
unsigned __int32 Locale Data Index Offset;//0x19c
unsigned __int32 Unknown;//0x1a0
unsigned __int32 Unknown;//0x1a4
unsigned __int32 Unknown;//0x1a8
unsigned __int32 String Count;//0x1ac
unsigned __int32 Locale Table Size;//0x1b0
unsigned __int32 Locale Index Table Offset;//0x1b4
unsigned __int32 Locale Data Index Offset;//0x1b8
unsigned __int32 Unknown;//0x1bc
unsigned __int32 Unknown;//0x1c0
unsigned __int32 Unknown;//0x1c4
unsigned __int32 String Count;//0x1c8
unsigned __int32 Locale Table Size;//0x1cc
unsigned __int32 Locale Index Table Offset;//0x1d0
unsigned __int32 Locale Data Index Offset;//0x1d4
unsigned __int32 Unknown;//0x1d8
unsigned __int32 Unknown;//0x1dc
unsigned __int32 Unknown;//0x1e0
unsigned __int32 String Count;//0x1e4
unsigned __int32 Locale Table Size;//0x1e8
unsigned __int32 Locale Index Table Offset;//0x1ec
unsigned __int32 Locale Data Index Offset;//0x1f0
unsigned __int32 Unknown;//0x1f4
unsigned __int32 Unknown;//0x1f8
unsigned __int32 Unknown;//0x1fc
unsigned __int32 String Count;//0x200
unsigned __int32 Locale Table Size;//0x204
unsigned __int32 Locale Index Table Offset;//0x208
unsigned __int32 Locale Data Index Offset;//0x20c
unsigned __int32 Unknown;//0x210
unsigned __int32 Unknown;//0x214
unsigned __int32 Unknown;//0x218
unsigned __int32 String Count;//0x21c
unsigned __int32 Locale Table Size;//0x220
unsigned __int32 Locale Index Table Offset;//0x224
unsigned __int32 Locale Data Index Offset;//0x228
unsigned __int32 Unknown;//0x22c
unsigned __int32 Unknown;//0x230
unsigned __int32 Unknown;//0x234
unsigned __int32 String Count;//0x238
unsigned __int32 Locale Table Size;//0x23c
unsigned __int32 Locale Index Table Offset;//0x240
unsigned __int32 Locale Data Index Offset;//0x244
unsigned __int32 Unknown;//0x248
unsigned __int32 Unknown;//0x24c
unsigned __int32 Unknown;//0x250
unsigned __int32 String Count;//0x254
unsigned __int32 Locale Table Size;//0x258
unsigned __int32 Locale Index Table Offset;//0x25c
unsigned __int32 Locale Data Index Offset;//0x260
unsigned __int32 Unknown;//0x264
unsigned __int32 Unknown;//0x268
unsigned __int32 Unknown;//0x26c
unsigned __int32 String Count;//0x270
unsigned __int32 Locale Table Size;//0x274
unsigned __int32 Locale Index Table Offset;//0x278
unsigned __int32 Locale Data Index Offset;//0x27c
unsigned __int32 Unknown;//0x280
};
TAG_BLOCK_SIZE_ASSERT(matg,0x284);
}
}
}
}
