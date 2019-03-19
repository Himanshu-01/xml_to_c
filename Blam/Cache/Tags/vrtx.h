#pragma once
#include"..\DataTypes\DataTypes.h"
#include"..\tag_block_assert.h"

namespace Blam
{
	namespace Cache
	{
		namespace Tags
		{
			namespace vrtx
			{
				struct vrtx
				{
					enum class Platform_Type :__int8
					{
						PC = 0,
						XBOX = 1,
					};
					Platform_Type Platform_Type;
					struct Geometry_Classifications
					{
						__int32 Unknown;
						Blam::Cache::DataTypes::dataRef Compiled_shader;
						Blam::Cache::DataTypes::dataRef Code;
					};
					TAG_BLOCK_SIZE_ASSERT(Geometry_Classifications, 0x14);
					Blam::Cache::DataTypes::Reflexive<Geometry_Classifications> Geometry_Classifications;
					__int32 output_swizzles;
				};
				TAG_BLOCK_SIZE_ASSERT(vrtx, 0x10);
				
			}
		}
	}
}