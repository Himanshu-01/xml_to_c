#ifndef _DUMP_C_STRUCT_H_
#define _DUMP_C_STRUCT_H_

#include<fstream>
#include"_plugin_field.h"

/*
Contains bunch of functions to dump the required C equivalent
*/
/*
Primary function that generates the layout of the tag in .h format
tag: structure generated after parsing .xml plugin
*/
void _dump_tag_struct(tag_struct* tag);
/*
Corrects the given string according to variable name rule set
*/
std::string _correct_var_name(std::string name);
/*
Function to dump the definition of bitfield along with concerned enum
*/
void _dump_bitfield(std::shared_ptr<_plugin_field> field, std::ofstream& file);
void _dump_enum(std::shared_ptr<_plugin_field> field, std::ofstream& file);
/*
Function to dump the structure of the reflexive block
field:pointer to the field
file:pointer to the ofstream object
*/
void _dump_reflexive_struct(std::shared_ptr<_plugin_field> field,std::ofstream& file);
/*
function to output the padding definion,based on the offset differences
*/
void _write_padding(unsigned int pad_size, std::ofstream& file);
#endif 


