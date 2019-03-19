#pragma once

//Same as MapMemBase and ETCOFFSET defined in ct tables
//Define it somewhere and properly assign it to avoid compilation errors
extern char* SharedMapBase;

namespace Blam
{
	namespace Cache
	{
		namespace DataTypes
		{
			/*********************************************************************
			* Blam::Cache::DataTypes::dataRef
			* 8 BYTE Tag Structure for any Data Block Field
			**********************************************************************/
			struct dataRef
			{
				dataRef(INT32 BlockSize)
				{

				}
				dataRef(INT32 BlockSize, INT32 BlockPtr)
				{

				}
			private:
				INT32 DataSize;
				INT32 DataOffset;
				const char* GetBytes();
				const wchar_t* ToUnicode();
				void DeleteData();
			};
			static_assert(sizeof(dataRef) == 8, "Invalid Size for struct (dataRef)");
		}
	}
}
const char* Blam::Cache::DataTypes::dataRef::GetBytes()
{
	return SharedMapBase + DataOffset;
}
void Blam::Cache::DataTypes::dataRef::DeleteData()
{
	delete (SharedMapBase + DataOffset);
}