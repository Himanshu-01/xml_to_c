struct snd
			{
				struct Flags
				{
					unsigned char FitToAdpcmBlocksize : 1;
					unsigned char SplitLongSoundIntoPermutations : 1;
					unsigned char AlwaysSpatialize#alwaysPlayAs3dSoundEvenInFirstPerson : 1;
					unsigned char NeverObstruct#disableOcclusionobstructionForThisSound : 1;
					unsigned char InternalDontTouch : 1;
					unsigned char UseHugeSoundTransmission : 1;
					unsigned char LinkCountToOwnerUnit : 1;
					unsigned char PitchRangeIsLanguage : 1;
					unsigned char DontUseSoundClassSpeakerFlag : 1;
					unsigned char DontUseLipsyncData : 1;
					unsigned char bit10 : 1;
					unsigned char bit11 : 1;
					unsigned char bit12 : 1;
					unsigned char bit13 : 1;
					unsigned char bit14 : 1;
					unsigned char bit15 : 1;
				}Flags;
				TAG_BLOCK_SIZE_ASSERT(Flags, 0x2);
				//0x0
				enum class SoundClass : __int8
				{
					Projectile_impact = 0,
					Projectile_detonation = 1,
					Projectile_flyby = 2,
					NUM_ = 3,
					Weapon_fire = 4,
					Weapon_ready = 5,
					Weapon_reload = 6,
					Weapon_empty = 7,
					Weapon_charge = 8,
					Weapon_overheat = 9,
					Weapon_idle = 10,
					Weapon_melee = 11,
					Weapon_animation = 12,
					Object_impacts = 13,
					Particle_impacts = 14,
					NUM_ = 15,
					NUM_ = 16,
					NUM_ = 17,
					Unit_footsteps = 18,
					Unit_dialog = 19,
					Unit_animation = 20,
					NUM_ = 21,
					Vehicle_collision = 22,
					Vehicle_engine = 23,
					Vehicle_animation = 24,
					NUM_ = 25,
					Device_door = 26,
					NUM_ = 27,
					Device_machinery = 28,
					Device_stationary = 29,
					NUM_ = 30,
					NUM_ = 31,
					Music = 32,
					Ambient_nature = 33,
					Ambient_machinery = 34,
					NUM_ = 35,
					Huge_ass = 36,
					Object_looping = 37,
					Cinematic_music = 38,
					NUM_ = 39,
					NUM_ = 40,
					NUM_ = 41,
					NUM_ = 42,
					NUM_ = 43,
					NUM_ = 44,
					Cortana_mission = 45,
					Cortana_cinematic = 46,
					Mission_dialog = 47,
					Cinematic_dialog = 48,
					Scripted_cinematic_foley = 49,
					Game_event = 50,
					Ui = 51,
					Test = 52,
					Multilingual_test = 53,
				};
				SoundClass SoundClass;//0x2
				enum class SampleRate : __int8
				{
					NUM_22kHz = 0,
					NUM_44kHz = 1,
					NUM_32kHz = 2,
				};
				SampleRate SampleRate;//0x3
				enum class Encoding : __int8
				{
					Mono = 0,
					Stereo = 1,
					Codec = 2,
				};
				Encoding Encoding;//0x4
				enum class Compression : __int8
				{
					NonebigEndian = 0,
					XboxAdpcm = 1,
					ImaAdpcm = 2,
					NonelittleEndian = 3,
					Wma = 4,
				};
				Compression Compression;//0x5
				__int16 PlaybackIndex;//0x6
				__int16 FirstPitchRangeIndex;//0x8
				__int8 PitchRangeCount;//0xA
				__int8 ScaleIndex;//0xB
				__int8 PromotionIndex;//0xC
				__int8 CustomPlaybackIndex;//0xD
				__int16 ExtraInfoIndex;//0xE
				__int32 MaximumPlayTime : ms;//0x10
			};