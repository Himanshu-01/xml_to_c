#include "..\Header Files\pch.h"
#include <Windows.h>
#include "..\Header Files\_dump_c_struct.h"
#include <cctype>

void _dump_tag_struct(tag_struct* tag)
{
	char dir_loc[256];
	GetCurrentDirectoryA(256, dir_loc);
	std::string output_loc = dir_loc;    
	output_loc=output_loc.substr(0,output_loc.find_last_of("\\"));
	output_loc += "\\Blam\\Cache\\Tags\\ConvertedSamples";
	output_loc+= '\\' + tag->name;
	output_loc.erase(output_loc.rfind('.'));
	output_loc += ".h";

	std::ofstream fout(output_loc.c_str());

	fout << "#pragma once\n";
	fout << "#include\"DataTypes.h\"\n";
	fout << "#include\"tag_block_assert.h\"\n\n\n";
	fout << "namespace Blam\n{\nnamespace Cache\n{\nnamespace Tags\n{\n";
	fout << "namespace " + _correct_var_name(tag->name.substr(0, tag->name.rfind('.'))) + "\n{\n";
	

	std::string struct_name = _correct_var_name(tag->name.substr(0, tag->name.rfind('.')));
	fout << "struct " + struct_name + "\n{\n";
	int offset = 0x0;	
	for (int i = 0; i < tag->child_fields.size(); i++)
	{
		int curr_offset = offset;
		std::shared_ptr<_plugin_field> t = tag->child_fields[i];
		if (offset != t->offset)
		{			
			_write_padding(t->offset - offset, fout);
			fout << "//0x" << std::uppercase<<std::hex << curr_offset << '\n';
			curr_offset=offset = t->offset;
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
			fout << "Blam::Cache::DataTypes::dataRef " << _correct_var_name(t->name) << ";";
			offset += 8;
			break;
		case field_type::tag_ref:
			fout << "Blam::Cache::DataTypes::tagRef " << _correct_var_name(t->name) << ";";
			offset += 8;
			break;
		case field_type::WC_tag_ref:
			fout << "Blam::Cache::DataTypes::tagRefN " << _correct_var_name(t->name) << ";";
			offset += 4;
			break;
		case field_type::string_ID:
			fout << "Blam::Cache::DataTypes::StringID " << _correct_var_name(t->name) << ";";
			offset += 4;
			break;
		case field_type::tag_block:
			_dump_reflexive_struct(t, fout);
			offset += 8;//size of a reflexive declaration
			break;
		case field_type::type_ascii:
			if (t->string_size == 32)
				fout << "Blam::Cache::DataTypes::String32 " << _correct_var_name(t->name) << ";";
			else if (t->string_size == 64)
				fout << "Blam::Cache::DataTypes::String64 " << _correct_var_name(t->name) << ";";
			else if (t->string_size == 128)
				fout << "Blam::Cache::DataTypes::String128 " << _correct_var_name(t->name) << ";";
			else if (t->string_size == 256)
				fout << "Blam::Cache::DataTypes::String256 " << _correct_var_name(t->name) << ";";
			else if (t->string_size == 512)
				fout << "Blam::Cache::DataTypes::String512 " << _correct_var_name(t->name) << ";";
			else
				fout << "Blam::Cache::DataTypes::String<" << t->string_size << "> " << _correct_var_name(t->name) << ";";

			offset += t->string_size;
			break;
		case field_type::type_utf16:
			if (t->string_size / 2 == 32)
				fout << "Blam::Cache::DataTypes::Unicode32 " << _correct_var_name(t->name) << ";";
			else if (t->string_size / 2 == 64)
				fout << "Blam::Cache::DataTypes::Unicode64 " << _correct_var_name(t->name) << ";";
			else if (t->string_size / 2 == 128)
				fout << "Blam::Cache::DataTypes::Unicode128 " << _correct_var_name(t->name) << ";";
			else if (t->string_size / 2 == 256)
				fout << "Blam::Cache::DataTypes::Unicode256 " << _correct_var_name(t->name) << ";";
			else
				fout << "Blam::Cache::DataTypes::Unicode<" << t->string_size / 2 << "> " << _correct_var_name(t->name) << ";";

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
		}
		fout << "//0x" << std::uppercase<<std::hex << curr_offset << '\n';
	}
	if (tag->base_size != offset)
	{
		//requires padding		
		_write_padding(tag->base_size - offset, fout);
		fout << "//0x" << std::uppercase<<std::hex << offset << '\n';
		offset = tag->base_size;
	}
	fout << "};\n";
	fout << "TAG_BLOCK_SIZE_ASSERT(" << struct_name << ",0x" << std::uppercase<<std::hex<< tag->base_size << ");\n";

	fout << "}\n}\n}\n}\n";
	
	fout.close();
}
void _dump_bitfield(std::shared_ptr<_plugin_field> field, std::ofstream& fout)
{
	fout << "enum class " << _correct_var_name(field->name) << " : ";
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
		fout << _correct_var_name(t[i].name) << " = 0x"<< std::hex<<(int)(t[i].index) << ",\n";
	fout << "};\n";

	fout << "Blam::Cache::DataTypes::Bitfield" << p << "<" << _correct_var_name(field->name) << "> " << _correct_var_name(field->name) << ";";	
}
void _dump_enum(std::shared_ptr<_plugin_field> field, std::ofstream& fout)
{
	fout << "enum class " << _correct_var_name(field->name) << " : ";
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
		fout << _correct_var_name(t[i].name) << " = 0x" << std::hex<<t[i].value << ",\n";
	fout << "};\n";

	fout << _correct_var_name(field->name) << " " << _correct_var_name(field->name) << ";";
}
void _dump_reflexive_struct(std::shared_ptr<_plugin_field> field, std::ofstream& fout)
{	
	std::string struct_name = _correct_var_name(field->name);
	fout << "struct " + struct_name + "\n{\n";
	int offset = 0x0;
	
	for (int i = 0; i < field->child_fields.size(); i++)
	{
		int curr_offset = offset;
		std::shared_ptr<_plugin_field> t = field->child_fields[i];
		if (offset != t->offset)
		{			
			_write_padding(t->offset - offset, fout);
			fout << "//0x" << std::uppercase<<std::hex << curr_offset << '\n';
			curr_offset=offset = t->offset;
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
			fout << "Blam::Cache::DataTypes::dataRef " << _correct_var_name(t->name) << ";";
			offset += 8;
			break;
		case field_type::tag_ref:
			fout << "Blam::Cache::DataTypes::tagRef " << _correct_var_name(t->name) << ";";
			offset += 8;
			break;
		case field_type::WC_tag_ref:
			fout << "Blam::Cache::DataTypes::tagRefN " << _correct_var_name(t->name) << ";";
			offset += 4;
			break;
		case field_type::string_ID:
			fout << "Blam::Cache::DataTypes::StringID " << _correct_var_name(t->name) << ";";
			offset += 4;
			break;
		case field_type::tag_block:
			_dump_reflexive_struct(t, fout);
			offset += 8;//size of a reflexive declaration
			break;
		case field_type::type_ascii:
			if (t->string_size == 32)
				fout << "Blam::Cache::DataTypes::String32 " << _correct_var_name(t->name) << ";";
			else if (t->string_size == 64)
				fout << "Blam::Cache::DataTypes::String64 " << _correct_var_name(t->name) << ";";
			else if (t->string_size == 128)
				fout << "Blam::Cache::DataTypes::String128 " << _correct_var_name(t->name) << ";";
			else if (t->string_size == 256)
				fout << "Blam::Cache::DataTypes::String256 " << _correct_var_name(t->name) << ";";
			else if (t->string_size == 512)
				fout << "Blam::Cache::DataTypes::String512 " << _correct_var_name(t->name) << ";";
			else
				fout << "Blam::Cache::DataTypes::String<" << t->string_size << "> " << _correct_var_name(t->name) << ";";

			offset += t->string_size;
			break;
		case field_type::type_utf16:
			if (t->string_size / 2 == 32)
				fout << "Blam::Cache::DataTypes::Unicode32 " << _correct_var_name(t->name) << ";";
			else if (t->string_size / 2 == 64)
				fout << "Blam::Cache::DataTypes::Unicode64 " << _correct_var_name(t->name) << ";";
			else if (t->string_size / 2 == 128)
				fout << "Blam::Cache::DataTypes::Unicode128 " << _correct_var_name(t->name) << ";";
			else if (t->string_size / 2 == 256)
				fout << "Blam::Cache::DataTypes::Unicode256 " << _correct_var_name(t->name) << ";";
			else
				fout << "Blam::Cache::DataTypes::Unicode<" << t->string_size / 2 << "> " << _correct_var_name(t->name) << ";";

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
		}
		fout << "//0x" << std::uppercase<<std::hex<<curr_offset << '\n';
	}
	if (field->block_size != offset)
	{
		//requires padding		
		_write_padding(field->block_size - offset, fout);
		fout << "//0x" << std::hex << offset << '\n';
		offset = field->block_size;
	}
	fout << "};\n";
	fout << "TAG_BLOCK_SIZE_ASSERT(" << struct_name << ",0x" << std::hex<< field->block_size << ");\n";
	fout << "Blam::Cache::DataTypes::Reflexive<" << struct_name << "> " << struct_name << ";";
}
void _write_padding(int pad_size, std::ofstream& file)
{
	//if (pad_size < 0)
	//	throw new std::exception("Please correctly order the field elements\n");

	if (pad_size < 0)
	{
		file << "////	WARNING :: WRONG SIZE OF STRUCT OR OFFSETS	////PLZ Verify\n";
		file << "PAD("<< std::dec << pad_size << ");";
	}
	else
		file << "PAD(0x"<<std::uppercase<<std::hex << pad_size<<");";
}
std::string _correct_var_name(std::string name)
{
	//Remove Unintended Characters and Add Style
	char ignore_list[] = {'-','(',')','!','<','>','?'};
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
}