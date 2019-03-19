#pragma once
//I felt the Bitfield struct available on carto repo is bit complicated and clunky
//and therefore wrote a simplified implementation
namespace Blam
{
	namespace Cache
	{
		namespace DataTypes
		{
			template<typename Field_Type,typename Field_Flag>
			struct Bitfield0_5
			{
				Field_Type field;
				//Sets the bit at the specified index to 1
				inline void Set_Bit(int index);
				//Same as previous except Field_Flag is an enumerator of indexes
				inline void Set_Bit(Field_Flag);		
				//Sets the bit at the specified index to 0
				inline void Clear_Bit(int index);
				//Same as previous except Field_Flag is an enumerator of indexes
				inline void Clear_Bit(Field_Flag);
				//Gets the value of the bit at the specified index
				inline bool Get_Bit(int index);
				//Same as previous except Field_Flag is an enumerator of indexes
				inline bool Get_Bit(Field_Flag);
				//Sets all the bits of the field yo 0
				inline void Clear_all_Bits();
				//Sets all the bits of the field to 1
				inline void Set_all_Bits();
			};
			//Bitfield8
			template<typename Field_Flag>
			using Bitfield8 = Bitfield0_5<unsigned __int8, Field_Flag>;
			//Bitfield16
			template<typename Field_Flag>
			using Bitfield16 = Bitfield0_5<unsigned __int16, Field_Flag>;
			//Bitfield32
			template<typename Field_Flag>
			using Bitfield32 = Bitfield0_5<unsigned __int32, Field_Flag>;
		}
	}
}
template<typename Field_Type,typename Field_Flag>
inline void Blam::Cache::DataTypes::Bitfield0_5<Field_Type,Field_Flag>::Set_Bit(int index)
{
	field = (Field_Type)(field | 2 ^ index);
}
template<typename Field_Type, typename Field_Flag>
inline bool Blam::Cache::DataTypes::Bitfield0_5<Field_Type, Field_Flag>::Get_Bit(int index)
{
	return (field & (Field_Type)(2 ^ index)) != 0;
}
template<typename Field_Type, typename Field_Flag>
inline void Blam::Cache::DataTypes::Bitfield0_5<Field_Type, Field_Flag>::Set_Bit(Field_Flag index)
{
	field = (Field_Type)(field | 2 ^ index);
}
template<typename Field_Type, typename Field_Flag>
inline bool Blam::Cache::DataTypes::Bitfield0_5<Field_Type, Field_Flag>::Get_Bit(Field_Flag index)
{
	return (field & (Field_Type)(2 ^ index)) != 0;
}
template<typename Field_Type, typename Field_Flag>
inline void Blam::Cache::DataTypes::Bitfield0_5<Field_Type, Field_Flag>::Clear_Bit(int index)
{
	field = (Field_Type)(field & ~(2 ^ index));
}
template<typename Field_Type, typename Field_Flag>
inline void Blam::Cache::DataTypes::Bitfield0_5<Field_Type, Field_Flag>::Clear_Bit(Field_Flag index)
{
	field = (Field_Type)(field & ~(2 ^ index));
}
template<typename Field_Type, typename Field_Flag>
inline void Blam::Cache::DataTypes::Bitfield0_5<Field_Type, Field_Flag>::Set_all_Bits()
{
	field = (Field_Type)~(0x0);
}
template<typename Field_Type, typename Field_Flag>
inline void Blam::Cache::DataTypes::Bitfield0_5<Field_Type, Field_Flag>::Clear_all_Bits()
{
	field = (Field_Type)(0x0);
}