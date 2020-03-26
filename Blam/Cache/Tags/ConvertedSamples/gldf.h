#pragma once
#include"..\..\DataTypes\DataTypes.h"
#include"..\..\tag_block_assert.h"


/*********************************************************************
* name:
* group_tag : gldf
* header size : 8
* *********************************************************************/
struct s_gldf
{
	struct s_light_variables
	{
		enum class e_objects_affected : __int32
		{
			all = FLAG(0),
			biped = FLAG(1),
			vehicle = FLAG(2),
			weapon = FLAG(3),
			equipment = FLAG(4),
			garbage = FLAG(5),
			projectile = FLAG(6),
			scenery = FLAG(7),
			machine = FLAG(8),
			control = FLAG(9),
			light_fixture = FLAG(10),
			sound_scenery = FLAG(11),
			crate = FLAG(12),
			creature = FLAG(13),
		};
		e_objects_affected objects_affected;//0x0
		float lightmap_brightness_offset;//0x4
		real_color_rgb primary_min_lightmap_color;//0x8
		real_color_rgb primary_max_lightmap_color;//0x14
		angle exclusion_angle_from_up;//0x20
		data_block primary_light_function;//0x24
		float secondary_min_lightmap_color_r;//0x2C
		float secondary_min_lightmap_color_g;//0x30
		float secondary_min_lightmap_color_b;//0x34
		float secondary_max_lightmap_color_r;//0x38
		float secondary_max_lightmap_color_g;//0x3C
		float secondary_max_lightmap_color_b;//0x40
		float secondary_min_diffuse_sample_r;//0x44
		float secondary_min_diffuse_sample_g;//0x48
		float secondary_min_diffuse_sample_b;//0x4C
		float secondary_max_diffuse_sample_r;//0x50
		float secondary_max_diffuse_sample_g;//0x54
		float secondary_max_diffuse_sample_b;//0x58
		float secondary_zaxsis_rotation;//0x5C
		data_block secondary_light_function;//0x60
		float ambient_min_lightmap_sample_r;//0x68
		float ambient_min_lightmap_sample_g;//0x6C
		float ambient_min_lightmap_sample_b;//0x70
		float ambient_max_lightmap_sample_r;//0x74
		float ambient_max_lightmap_sample_g;//0x78
		float ambient_max_lightmap_sample_b;//0x7C
		data_block ambient_light_function;//0x80
		data_block lightmap_shadows;//0x88
	};
	TAG_BLOCK_SIZE_ASSERT(s_light_variables, 0x90);
	tag_block<s_light_variables> light_variables;//0x0
};
TAG_BLOCK_SIZE_ASSERT(s_gldf, 0x8);
