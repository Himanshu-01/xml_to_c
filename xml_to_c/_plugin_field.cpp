#include "pch.h"
#include "_plugin_field.h"

inline _enum16 _enum16::operator=(const _enum16 &other)
{
	name == other.name;
	value = other.value;
	
	return other;
}
inline _bitfield _bitfield::operator=(const _bitfield &other)
{
	name = other.name;
	index = other.index;

	return other;
}
_plugin_field _plugin_field::operator=(const _plugin_field &other)
{
	name = other.name;
	offset = other.offset;
	type = other.type;
	enum16_elements = other.enum16_elements;
	bitfield_element = other.bitfield_element;
	child_fields = other.child_fields;
	block_size = other.block_size;
	ascii_length = other.ascii_length;

	return other;
}
tag_struct tag_struct::operator=(const tag_struct &other)
{
	name = other.name;
	base_size = other.base_size;
	child_fields = other.child_fields;

	return other;
}
