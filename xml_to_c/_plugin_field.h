/*
meta==compiled tag
----I am writing this stuff so that it generates necessary c structure along with required constructor
	,destructors and file I/O for future use(probably for full map decompile and recompile)
*/

#ifndef _PLUGIN_FIELD_H_
#define _PLUGIN_FIELD_H_

#include<vector>
#include<string>


//type of field
enum class field_type
{
	//non_primitive types
	tag_ref,
	WC_tag_ref,
	tag_block,
	data_ref,
	string_ID,
	enum16,
	bitfield8,
	bitfield16,
	bitfield32,

	//primitive types
	type_int8,
	type_int16,
	type_int32,
	type_uint8,
	type_float32,
	type_ascii,
};
//struct depicting enum elements along with names
struct _enum16
{
	std::string name;
	int value;

	//for copying operation
	_enum16 operator=(const _enum16 &other);
};
//struct depicting bitfield names along with index
struct _bitfield
{
	std::string name;
	__int8 index;

	//for copying operation
	_bitfield operator=(const _bitfield &other);
};
struct _plugin_field
{
	//the name of the field
	std::string name;
	//offset in the BLOCK
	int offset;
	//type of filed
	field_type type;
	//enum elements
	std::vector<_enum16> enum16_elements;
	//bitfield elements
	std::vector<_bitfield> bitfield_element;
	//and child field,usually for tag_blocks
	std::vector<std::shared_ptr<_plugin_field>> child_fields;
	int block_size;//for the tag_blocks
	//ascii size
	int ascii_length;

	//for copying operation
	_plugin_field operator=(const _plugin_field &other);
};
//struct containing the actual meta structure
struct tag_struct
{
	//name of the string
	std::string name;
	//the header size of the tag
	int base_size;
	//ptr to child fields
	std::vector<std::shared_ptr<_plugin_field>> child_fields;

	//for copying operation
	tag_struct operator=(const tag_struct &other);
};
#endif
