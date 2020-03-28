#include "..\Header Files\pch.h"
#include <Windows.h>
#include "..\Header Files\_dump_c_struct.h"
#include <cctype>
#include "..\Header Files\tag_group_names.h"
#include <algorithm> 

void _dump_tag_struct(tag_struct* tag)
{
	char dir_loc[256];
	GetCurrentDirectoryA(256, dir_loc);
	std::string output_loc = dir_loc;	

	
	tag->name=tag->name.erase(tag->name.rfind('.'));
	char c_data[4];
	for(int i=0;i<4;i++)
	 c_data[i] = tag->name[3-i];

	uint32_t  type= *(uint32_t *)c_data;
	std::string group_name = tag_group_names.at(type);
	
	
	output_loc += '\\' + group_name + "_definition.h";
	

	std::ofstream fout(output_loc.c_str());

	fout << "#pragma once\n";
	fout << "#include\"..\\..\\DataTypes\\DataTypes.h\"\n";
	fout << "#include\"..\\..\\tag_block_assert.h\"\n\n\n";

		

	fout << "\t\t/********************************************************************* \n\
		* name: "<< group_name<<"\n\
		* group_tag : " << tag->name << "\n \
		* header size : " << tag->base_size << "\n\
		* *********************************************************************/ \n";

	fout << "struct s_" << group_name <<"_group_definition"<< "\n{\n";
	int offset = 0x0;
	for (int i = 0; i < tag->child_fields.size(); i++)
	{
		int curr_offset = offset;
		std::shared_ptr<_plugin_field> t = tag->child_fields[i];
		if (offset != t->offset)
		{
			_write_padding(t->offset - offset, fout);
			fout << "//0x" << std::uppercase << std::hex << curr_offset << '\n';
			curr_offset = offset = t->offset;
		}
		switch (t->type)
		{
		case field_type::bitfield8:
			_dump_bitfield(t, fout);
			offset += 1;
			break;
		case field_type::bitfield16:
			_dump_bitfield(t, fout);
			offset += 2;
			break;
		case field_type::bitfield32:
			_dump_bitfield(t, fout);
			offset += 4;
			break;
		case field_type::enum8:
			_dump_enum(t, fout);
			offset += 1;
			break;
		case field_type::enum16:
			_dump_enum(t, fout);
			offset += 2;
			break;
		case field_type::enum32:
			_dump_enum(t, fout);
			offset += 4;
			break;
		case field_type::data_ref:
			fout << "data_block " << _correct_var_name(t->name) << ";";
			offset += 8;
			break;
		case field_type::tag_ref:
			fout << "tag_reference " << _correct_var_name(t->name) << ";";
			offset += 8;
			break;
		case field_type::WC_tag_ref:
			fout << "tag_referenceN " << _correct_var_name(t->name) << ";";
			offset += 4;
			break;
		case field_type::string_ID:
			fout << "string_id " << _correct_var_name(t->name) << ";";
			offset += 4;
			break;
		case field_type::tag_block:
			_dump_reflexive_struct(t, fout);
			offset += 8;//size of a reflexive declaration
			break;
		case field_type::type_ascii:
			if (t->string_size == 32)
				fout << "string32 " << _correct_var_name(t->name) << ";";
			else if (t->string_size == 64)
				fout << "string64 " << _correct_var_name(t->name) << ";";
			else if (t->string_size == 128)
				fout << "string128 " << _correct_var_name(t->name) << ";";
			else if (t->string_size == 256)
				fout << "string256 " << _correct_var_name(t->name) << ";";
			else if (t->string_size == 512)
				fout << "string512 " << _correct_var_name(t->name) << ";";
			else
				fout << "string<" << t->string_size << "> " << _correct_var_name(t->name) << ";";

			offset += t->string_size;
			break;
		case field_type::type_utf16:
			if (t->string_size / 2 == 32)
				fout << "unicode32 " << _correct_var_name(t->name) << ";";
			else if (t->string_size / 2 == 64)
				fout << "unicode64 " << _correct_var_name(t->name) << ";";
			else if (t->string_size / 2 == 128)
				fout << "unicode128 " << _correct_var_name(t->name) << ";";
			else if (t->string_size / 2 == 256)
				fout << "unicode256 " << _correct_var_name(t->name) << ";";
			else
				fout << "unicode<" << t->string_size / 2 << "> " << _correct_var_name(t->name) << ";";

			offset += t->string_size;
			break;
		case field_type::type_float32:
			fout << "float " << _correct_var_name(t->name) << ";";
			offset += 4;
			break;
		case field_type::type_int16:
			fout << "__int16 " << _correct_var_name(t->name) << ";";
			offset += 2;
			break;
		case field_type::type_int32:
			fout << "__int32 " << _correct_var_name(t->name) << ";";
			offset += 4;
			break;
		case field_type::type_int8:
			fout << "__int8 " << _correct_var_name(t->name) << ";";
			offset += 1;
			break;
		case field_type::type_uint8:
			fout << "unsigned __int8 " << _correct_var_name(t->name) << ";";
			offset += 1;
			break;
		case field_type::type_uint16:
			fout << "unsigned __int16 " << _correct_var_name(t->name) << ";";
			offset += 2;
			break;
		case field_type::type_uint32:
			fout << "unsigned __int32 " << _correct_var_name(t->name) << ";";
			offset += 4;
			break;
		case field_type::colorf:
			if (t->colorfomat == "rgb")
			{
				fout << "real_color_rgb " << _correct_var_name(t->name) << ";";
				offset += 12;
			}
			else if (t->colorfomat == "argb")
			{
				fout << "real_color_argb " << _correct_var_name(t->name) << ";";
				offset += 16;
			}
			break;
		case field_type::angle:
			fout << "angle " << _correct_var_name(t->name) << ";";
			offset += 4;
			break;
		}
		fout << "//0x" << std::uppercase << std::hex << curr_offset << '\n';
	}
	if (tag->base_size != offset)
	{
		//requires padding		
		_write_padding(tag->base_size - offset, fout);
		fout << "//0x" << std::uppercase << std::hex << offset << '\n';
		offset = tag->base_size;
	}
	fout << "};\n";
	fout << "TAG_GROUP_SIZE_ASSERT(s_" << group_name << "_group_definition"<< ",0x" << std::uppercase << std::hex << tag->base_size << ");\n";
	fout.close();
}
void _dump_bitfield(std::shared_ptr<_plugin_field> field, std::ofstream& fout)
{

	fout << "enum class e_" << _correct_var_name(field->name) << " : ";
	std::string p;
	switch (field->type)
	{
	case field_type::bitfield8:
		fout << "__int8\n";
		p = "8";
		break;
	case field_type::bitfield16:
		fout << "__int16\n";
		p = "16";
		break;
	case field_type::bitfield32:
		fout << "__int32\n";
		p = "32";
		break;
	}
	fout << "{\n";
	std::vector<_bitfield> t = field->bitfield_element;
	for (int i = 0; i < t.size(); i++)		
		fout << _correct_var_name(t[i].name) << " = " <<"FLAG("<< std::dec << (int)(t[i].index) << "),\n";
	
	fout << "};\n";

	fout << "e_" << _correct_var_name(field->name) << " "<<_correct_var_name(field->name) << ";";

	/*fout << "struct " << _correct_var_name(field->name) << "\n{\n";
	for (int i = 0; i < (int)field->type; i++)
	{
		///we got an indexx with a name
		if (i < field->bitfield_element.size() && (i == field->bitfield_element[i].index))
			fout << "unsigned char " << _correct_var_name(field->bitfield_element[i].name) << " : 1;\n";
		else fout << "unsigned char bit" <<std::dec<< i << " : 1;\n";


		//reached the last element
		//if (i == field->bitfield_element[field->bitfield_element.size() - 1].index)
			//break;
	}
	fout << "}" << _correct_var_name(field->name) << ";\n";

	fout << "TAG_BLOCK_SIZE_ASSERT(" << _correct_var_name(field->name) << ',';
	switch (field->type)
	{
	case field_type::bitfield8:
		fout << "0x1);\n";
		break;
	case field_type::bitfield16:
		fout << "0x2);\n";
		break;
	case field_type::bitfield32:
		fout << "0x4);\n";
		break;
	default:;
	}*/
}
void _dump_enum(std::shared_ptr<_plugin_field> field, std::ofstream& fout)
{
	fout << "enum class e_" << _correct_var_name(field->name) << " : ";
	switch (field->type)
	{
	case field_type::enum8:
		fout << "__int8\n";
		break;
	case field_type::enum16:
		fout << "__int16\n";
		break;
	case field_type::enum32:
		fout << "__int32\n";
		break;
	}
	fout << "{\n";
	std::vector<_enum> t = field->enum_elements;
	for (int i = 0; i < t.size(); i++)
		fout << _correct_var_name(t[i].name) << " = " << std::dec << t[i].value << ",\n";
	fout << "};\n";

	fout << "e_" << _correct_var_name(field->name) << " " << _correct_var_name(field->name) << ";";
}
void _dump_reflexive_struct(std::shared_ptr<_plugin_field> field, std::ofstream& fout)
{
	std::string struct_name = _correct_var_name(field->name);
	fout << "struct s_" + struct_name <<"_block"<< "\n{\n";
	int offset = 0x0;

	for (int i = 0; i < field->child_fields.size(); i++)
	{
		int curr_offset = offset;
		std::shared_ptr<_plugin_field> t = field->child_fields[i];
		if (offset != t->offset)
		{
			_write_padding(t->offset - offset, fout);
			fout << "//0x" << std::uppercase << std::hex << curr_offset << '\n';
			curr_offset = offset = t->offset;
		}
		switch (t->type)
		{
		case field_type::bitfield8:
			_dump_bitfield(t, fout);
			offset += 1;
			break;
		case field_type::bitfield16:
			_dump_bitfield(t, fout);
			offset += 2;
			break;
		case field_type::bitfield32:
			_dump_bitfield(t, fout);
			offset += 4;
			break;
		case field_type::enum8:
			_dump_enum(t, fout);
			offset += 1;
			break;
		case field_type::enum16:
			_dump_enum(t, fout);
			offset += 2;
			break;
		case field_type::enum32:
			_dump_enum(t, fout);
			offset += 4;
			break;
		case field_type::data_ref:
			fout << "data_block " << _correct_var_name(t->name) << ";";
			offset += 8;
			break;
		case field_type::tag_ref:
			fout << "tag_reference " << _correct_var_name(t->name) << ";";
			offset += 8;
			break;
		case field_type::WC_tag_ref:
			fout << "tag_referenceN " << _correct_var_name(t->name) << ";";
			offset += 4;
			break;
		case field_type::string_ID:
			fout << "string_id " << _correct_var_name(t->name) << ";";
			offset += 4;
			break;
		case field_type::tag_block:
			_dump_reflexive_struct(t, fout);
			offset += 8;//size of a reflexive declaration
			break;
		case field_type::type_ascii:
			if (t->string_size == 32)
				fout << "string32 " << _correct_var_name(t->name) << ";";
			else if (t->string_size == 64)
				fout << "string64 " << _correct_var_name(t->name) << ";";
			else if (t->string_size == 128)
				fout << "string128 " << _correct_var_name(t->name) << ";";
			else if (t->string_size == 256)
				fout << "string256 " << _correct_var_name(t->name) << ";";
			else if (t->string_size == 512)
				fout << "string512 " << _correct_var_name(t->name) << ";";
			else
				fout << "string<" << t->string_size << "> " << _correct_var_name(t->name) << ";";

			offset += t->string_size;
			break;
		case field_type::type_utf16:
			if (t->string_size / 2 == 32)
				fout << "unicode32 " << _correct_var_name(t->name) << ";";
			else if (t->string_size / 2 == 64)
				fout << "unicode64 " << _correct_var_name(t->name) << ";";
			else if (t->string_size / 2 == 128)
				fout << "unicode128 " << _correct_var_name(t->name) << ";";
			else if (t->string_size / 2 == 256)
				fout << "unicode256 " << _correct_var_name(t->name) << ";";
			else
				fout << "unicode<" << t->string_size / 2 << "> " << _correct_var_name(t->name) << ";";

			offset += t->string_size;
			break;
		case field_type::type_float32:
			fout << "float " << _correct_var_name(t->name) << ";";
			offset += 4;
			break;
		case field_type::type_int16:
			fout << "__int16 " << _correct_var_name(t->name) << ";";
			offset += 2;
			break;
		case field_type::type_int32:
			fout << "__int32 " << _correct_var_name(t->name) << ";";
			offset += 4;
			break;
		case field_type::type_int8:
			fout << "__int8 " << _correct_var_name(t->name) << ";";
			offset += 1;
			break;
		case field_type::type_uint8:
			fout << "unsigned __int8 " << _correct_var_name(t->name) << ";";
			offset += 1;
			break;
		case field_type::type_uint16:
			fout << "unsigned __int16 " << _correct_var_name(t->name) << ";";
			offset += 2;
			break;
		case field_type::type_uint32:
			fout << "unsigned __int32 " << _correct_var_name(t->name) << ";";
			offset += 4;
			break;
		case field_type::colorf:
			if (t->colorfomat == "rgb")
			{
				fout << "real_color_rgb " << _correct_var_name(t->name) << ";";
				offset += 12;
			}
			else if (t->colorfomat == "argb")
			{
				fout << "real_color_argb " << _correct_var_name(t->name) << ";";
				offset += 16;
			}
			break;
		case field_type::angle:
			fout << "angle " << _correct_var_name(t->name) << ";";
			offset += 4;
			break;
		}
		fout << "//0x" << std::uppercase << std::hex << curr_offset << '\n';
	}
	if (field->block_size != offset)
	{
		//requires padding		
		_write_padding(field->block_size - offset, fout);
		fout << "//0x" << std::hex << offset << '\n';
		offset = field->block_size;
	}
	fout << "};\n";
	fout << "TAG_BLOCK_SIZE_ASSERT(s_" << struct_name << "_block"<< ",0x" << std::hex << field->block_size << ");\n";
	fout << "tag_block<s_" << struct_name << "_block"<< "> " << struct_name << ";";
}
void _write_padding(int pad_size, std::ofstream& file)
{
	//if (pad_size < 0)
	//	throw new std::exception("Please correctly order the field elements\n");

	if (pad_size < 0)
	{
		file << "////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify\n";
		file << "PAD(" << std::dec << pad_size << ");";
	}
	else
		file << "PAD(0x" << std::uppercase << std::hex << pad_size << ");";
}
std::string _correct_var_name(std::string name)
{
	/*
	//Remove Unintended Characters and Add Style
	char ignore_list[] = {'-','(',')','!','<','>','?',',','.','\'','\"','/'};
	std::string temp = "";
	int i = 0;
	name[0] = std::toupper(name[0]); //Capitalise First Letter
	while (name[i])
	{
		//Checks for Blank Space and modifies adjacent element
		if (!std::isblank(name[i]))
		{
			bool k = false;
			for (int j = 0; j < sizeof(ignore_list); j++)
				if (name[i] == ignore_list[j])
				{
					k = true;
					break;
				}
			if(!k)
				temp += name[i];
		}
		else
		{
			if ((i + 1) >= name.length())
				throw new std::exception("Please correct the field name");

			name[i + 1] = std::toupper(name[i + 1]);//Capatalise Next Letter
		}

		i++;
	}
	//Fix for First Character as Number
	if (!std::isalpha(temp[0]))
		temp = "NUM_" + temp;

	return temp;
	*/

	//Remove Unintended Characters and Add Style
	char ignore_list[] = { '-','(',')','!','<','>','?',',','.','\'','\"','/' };
	std::string temp = "";
	int i = 0;

	std::transform(name.begin(), name.end(), name.begin(),
		[](unsigned char c) { return std::tolower(c); });

	while (name[i])
	{
		if (std::isblank(name[i]))
			temp += "_";
		else
		{
			bool k = false;
			for (int j = 0; j < sizeof(ignore_list); j++)
				if (name[i] == ignore_list[j])
				{
					k = true;
					break;
				}
			if (!k)
				temp += name[i];
		}
		i++;
	}
	//Fix for First Character as Number	
	if (!std::isalpha(temp[0]))
		temp = "NUM_" + temp;

	return temp;
}