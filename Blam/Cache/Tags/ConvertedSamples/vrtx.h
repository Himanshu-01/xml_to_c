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
			* group_tag : vrtx
			* header size : 16
			* *********************************************************************/
			struct vrtx
			{
				enum class PlatformType : __int8
				{
					PC = 0,
					XBOX = 1,
				};
				PlatformType PlatformType;//0x0
				PAD(0x3);//0x1
				struct GeometryClassifications
				{
					__int32 Unknown;//0x0
					Blam::Cache::DataTypes::dataRef CompiledShader;//0x4
					Blam::Cache::DataTypes::dataRef Code;//0xC
				};
				TAG_BLOCK_SIZE_ASSERT(GeometryClassifications, 0x14);
				Blam::Cache::DataTypes::Reflexive<GeometryClassifications> GeometryClassifications;//0x4
				__int32 OutputSwizzles;//0xC
			};
			TAG_BLOCK_SIZE_ASSERT(vrtx, 0x10);
		}
	}
}
