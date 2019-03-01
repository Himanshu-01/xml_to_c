#ifndef _GENERATE_STRUCT_H_
#define _GENERATE_STRUCT_H_

#include"_plugin_field.h"
#include"tinyxml2.h"

namespace struct_generator
{
	/*
	generates and return meta struct from the xml file
	file:complete file path
	*/
	tag_struct* _generate_tag_struct(std::string file);
	//
	/*
	recursive function to generate structure of tag_blocks and subsequent fields
	c_element:current xml element
	p_field:the parent field(tag_block) ref,of which the current fields are part of 
	*/
	void _generate_tag_field(tinyxml2::XMLElement* c_element, std::vector<std::shared_ptr<_plugin_field>>& p_field);
	/*
	Reads and fills in the elements of an enum
	*/
	void _fill_enum_elements(tinyxml2::XMLElement* c_element, std::vector<_enum16> &enum16_elements);
	/*
	Reads and fills in the elements of a bit field
	*/
	void _fill_bitfield_elements(tinyxml2::XMLElement* c_element, std::vector<_bitfield> &bitfield_element);
}

#endif