#include<iostream>
#include "..\Header Files\pch.h"
#include "..\Header Files\_generate_struct.h"


namespace struct_generator
{

	tag_struct* _generate_tag_struct(std::string file_loc)
	{
		tag_struct* ret = new tag_struct();

		tinyxml2::XMLDocument xmlDoc;
		tinyxml2::XMLError error = xmlDoc.LoadFile(file_loc.c_str());

		if (error == tinyxml2::XML_ERROR_FILE_NOT_FOUND)
		{
			std::cout << "\nCouldnt find file :" << file_loc;
			return nullptr;
		}
		
		tinyxml2::XMLElement* root_element = xmlDoc.RootElement();
		const char* base_size_text = root_element->Attribute("baseSize");
		if (base_size_text == nullptr)
		{
			std::cout << "Couldnt find baseSize attribute";
			return nullptr;
		}
		ret->base_size= std::stoul(base_size_text, nullptr, 16);
		ret->name = file_loc.substr(file_loc.rfind('\\') + 1);

		_generate_tag_field(root_element->FirstChildElement(), ret->child_fields);
		return ret;
	}
	void _generate_tag_field(tinyxml2::XMLElement* child_element, std::vector<std::shared_ptr<_plugin_field>> &parent_field_list)
	{
		while (child_element)
		{
			std::string element_name = child_element->Name();

			if (element_name == "reflexive")
			{
				std::shared_ptr<_plugin_field> child_field = std::make_shared<_plugin_field>();

				child_field->name = child_element->Attribute("name");
				child_field->type = field_type::tag_block;
				child_field->offset= std::stoul(child_element->Attribute("offset"), nullptr, 16);
				child_field->block_size= std::stoul(child_element->Attribute("entrySize"), nullptr, 16);

				_generate_tag_field(child_element->FirstChildElement(), child_field->child_fields);

				parent_field_list.push_back(child_field);
			}
			else if ((element_name == "tagRef") || (element_name == "tagref"))
			{
				if (!child_element->Attribute("withClass"))
				{
					std::shared_ptr<_plugin_field> child_field = std::make_shared<_plugin_field>();

					child_field->name = child_element->Attribute("name");
					child_field->type = field_type::tag_ref;
					child_field->offset = std::stoul(child_element->Attribute("offset"), nullptr, 16);

					parent_field_list.push_back(child_field);
				}
				else
				{
					std::shared_ptr<_plugin_field> child_field = std::make_shared<_plugin_field>();

					child_field->name = child_element->Attribute("name");
					child_field->type = field_type::WC_tag_ref;
					child_field->offset = std::stoul(child_element->Attribute("offset"), nullptr, 16);

					parent_field_list.push_back(child_field);
				}
			}
			else if ((element_name == "stringId") || (element_name == "stringid"))
			{
				std::shared_ptr<_plugin_field> child_field = std::make_shared<_plugin_field>();

				child_field->name = child_element->Attribute("name");
				child_field->type = field_type::string_ID;
				child_field->offset = std::stoul(child_element->Attribute("offset"), nullptr, 16);

				parent_field_list.push_back(child_field);
			}
			else if (element_name == "dataref")
			{
				std::shared_ptr<_plugin_field> child_field = std::make_shared<_plugin_field>();

				child_field->name = child_element->Attribute("name");
				child_field->type = field_type::data_ref;
				child_field->offset = std::stoul(child_element->Attribute("offset"), nullptr, 16);

				parent_field_list.push_back(child_field);
			}
			else if (element_name == "enum8")
			{
				std::shared_ptr<_plugin_field> child_field = std::make_shared<_plugin_field>();

				child_field->name = child_element->Attribute("name");
				child_field->type = field_type::enum8;
				child_field->offset = std::stoul(child_element->Attribute("offset"), nullptr, 16);

				_fill_enum_elements(child_element->FirstChildElement(), child_field->enum_elements);

				parent_field_list.push_back(child_field);
			}
			else if (element_name == "enum16")
			{
				std::shared_ptr<_plugin_field> child_field = std::make_shared<_plugin_field>();

				child_field->name = child_element->Attribute("name");
				child_field->type = field_type::enum16;
				child_field->offset = std::stoul(child_element->Attribute("offset"), nullptr, 16);

				_fill_enum_elements(child_element->FirstChildElement(), child_field->enum_elements);

				parent_field_list.push_back(child_field);
			}
			else if (element_name == "enum32")
			{
				std::shared_ptr<_plugin_field> child_field = std::make_shared<_plugin_field>();

				child_field->name = child_element->Attribute("name");
				child_field->type = field_type::enum32;
				child_field->offset = std::stoul(child_element->Attribute("offset"), nullptr, 16);

				_fill_enum_elements(child_element->FirstChildElement(), child_field->enum_elements);

				parent_field_list.push_back(child_field);
			}
			else if (element_name == "bitfield8")
			{
				std::shared_ptr<_plugin_field> child_field = std::make_shared<_plugin_field>();

				child_field->name = child_element->Attribute("name");
				child_field->type = field_type::bitfield8;
				child_field->offset = std::stoul(child_element->Attribute("offset"), nullptr, 16);

				_fill_bitfield_elements(child_element->FirstChildElement(), child_field->bitfield_element);

				parent_field_list.push_back(child_field);
			}
			else if (element_name == "bitfield16")
			{
				std::shared_ptr<_plugin_field> child_field = std::make_shared<_plugin_field>();

				child_field->name = child_element->Attribute("name");
				child_field->type = field_type::bitfield16;
				child_field->offset = std::stoul(child_element->Attribute("offset"), nullptr, 16);

				_fill_bitfield_elements(child_element->FirstChildElement(), child_field->bitfield_element);

				parent_field_list.push_back(child_field);
			}
			else if (element_name == "bitfield32")
			{
				std::shared_ptr<_plugin_field> child_field = std::make_shared<_plugin_field>();

				child_field->name = child_element->Attribute("name");
				child_field->type = field_type::bitfield32;
				child_field->offset = std::stoul(child_element->Attribute("offset"), nullptr, 16);

				_fill_bitfield_elements(child_element->FirstChildElement(), child_field->bitfield_element);

				parent_field_list.push_back(child_field);
			}
			else if (element_name == "int8")
			{
			std::shared_ptr<_plugin_field> child_field = std::make_shared<_plugin_field>();

			child_field->name = child_element->Attribute("name");
			child_field->type = field_type::type_int8;
			child_field->offset = std::stoul(child_element->Attribute("offset"), nullptr, 16);

			parent_field_list.push_back(child_field);
			}
			else if (element_name == "int16")
			{
			std::shared_ptr<_plugin_field> child_field = std::make_shared<_plugin_field>();

			child_field->name = child_element->Attribute("name");
			child_field->type = field_type::type_int16;
			child_field->offset = std::stoul(child_element->Attribute("offset"), nullptr, 16);

			parent_field_list.push_back(child_field);
			}
			else if (element_name == "int32")
			{
			std::shared_ptr<_plugin_field> child_field = std::make_shared<_plugin_field>();

			child_field->name = child_element->Attribute("name");
			child_field->type = field_type::type_int32;
			child_field->offset = std::stoul(child_element->Attribute("offset"), nullptr, 16);

			parent_field_list.push_back(child_field);
			}
			else if (element_name == "uint8")
			{
			std::shared_ptr<_plugin_field> child_field = std::make_shared<_plugin_field>();

			child_field->name = child_element->Attribute("name");
			child_field->type = field_type::type_uint8;
			child_field->offset = std::stoul(child_element->Attribute("offset"), nullptr, 16);

			parent_field_list.push_back(child_field);
			}
			else if (element_name == "uint16")
			{
			std::shared_ptr<_plugin_field> child_field = std::make_shared<_plugin_field>();

			child_field->name = child_element->Attribute("name");
			child_field->type = field_type::type_uint16;
			child_field->offset = std::stoul(child_element->Attribute("offset"), nullptr, 16);

			parent_field_list.push_back(child_field);
			}
			else if (element_name == "uint32")
			{
			std::shared_ptr<_plugin_field> child_field = std::make_shared<_plugin_field>();

			child_field->name = child_element->Attribute("name");
			child_field->type = field_type::type_uint32;
			child_field->offset = std::stoul(child_element->Attribute("offset"), nullptr, 16);

			parent_field_list.push_back(child_field);
			}
			else if (element_name == "float32")
			{
			std::shared_ptr<_plugin_field> child_field = std::make_shared<_plugin_field>();

			child_field->name = child_element->Attribute("name");
			child_field->type = field_type::type_float32;
			child_field->offset = std::stoul(child_element->Attribute("offset"), nullptr, 16);

			parent_field_list.push_back(child_field);
			}
			else if (element_name == "ascii")
			{
			std::shared_ptr<_plugin_field> child_field = std::make_shared<_plugin_field>();

			child_field->name = child_element->Attribute("name");
			child_field->type = field_type::type_ascii;
			child_field->offset = std::stoul(child_element->Attribute("offset"), nullptr, 16);
			if(child_element->Attribute("size"))
				child_field->string_size = std::stoul(child_element->Attribute("size"), nullptr, 16);
			else
				child_field->string_size = std::stoul(child_element->Attribute("length"), nullptr, 16);


			parent_field_list.push_back(child_field);
			}
			else if (element_name == "utf16")
			{
			std::shared_ptr<_plugin_field> child_field = std::make_shared<_plugin_field>();

			child_field->name = child_element->Attribute("name");
			child_field->type = field_type::type_utf16;
			child_field->offset = std::stoul(child_element->Attribute("offset"), nullptr, 16);
			if (child_element->Attribute("size"))
				child_field->string_size = std::stoul(child_element->Attribute("size"), nullptr, 16);
			else
				child_field->string_size = std::stoul(child_element->Attribute("length"), nullptr, 16);

			parent_field_list.push_back(child_field);
			}
			else if (element_name == "colorf" || element_name=="colourf")
			{
			std::shared_ptr<_plugin_field> child_field = std::make_shared<_plugin_field>();

			child_field->name = child_element->Attribute("name");
			child_field->type = field_type::colorf;
			child_field->offset = std::stoul(child_element->Attribute("offset"), nullptr, 16);
			child_field->colorfomat = child_element->Attribute("format");

			parent_field_list.push_back(child_field);
			}
			else if (element_name == "degree")
			{
			std::shared_ptr<_plugin_field> child_field = std::make_shared<_plugin_field>();

			child_field->name = child_element->Attribute("name");
			child_field->type = field_type::angle;
			child_field->offset = std::stoul(child_element->Attribute("offset"), nullptr, 16);

			parent_field_list.push_back(child_field);
			}			

			child_element = child_element->NextSiblingElement();
		}
	}
	void _fill_enum_elements(tinyxml2::XMLElement* child_element, std::vector<_enum> &enum_elements)
	{
		while (child_element)
		{
			_enum t;

			t.name = child_element->Attribute("name");
			std::string value = child_element->Attribute("value");
			if (value.find("0x") != -1)
				t.value = std::stoul(value, nullptr, 16);
			else
				t.value = std::stoul(value, nullptr, 10);
			
			enum_elements.push_back(t);

			child_element = child_element->NextSiblingElement();
		}
	}
	void _fill_bitfield_elements(tinyxml2::XMLElement* child_element, std::vector<_bitfield> &bitfield_element)
	{
		while (child_element)
		{
			_bitfield t;

			t.name = child_element->Attribute("name");
			std::string value = child_element->Attribute("index");
			if(value.find("0x")!=-1)
				t.index = std::stoul(value, nullptr, 16);
			else
				t.index = std::stoul(value, nullptr, 10);

			bitfield_element.push_back(t);

			child_element = child_element->NextSiblingElement();
		}
	}
}