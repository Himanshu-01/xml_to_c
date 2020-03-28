// xml_to_c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "..\Header Files\pch.h"
#include <iostream>
#include<windows.h>
#include"..\Header Files\_generate_struct.h"
#include"..\Header Files\_plugin_field.h"
#include"..\Header Files\_dump_c_struct.h"
//#include"..\Blam\Cache\Tags\ConvertedSamples\scnr.h"
//#include"..\Blam\Cache\Tags\ConvertedSamples\ugh!.h"

char* SharedMapBase;
LPCWSTR string_to_w_char(std::string str)
{
	WCHAR* ret = new WCHAR[str.length()];

	int i = 0;
	for (; i < str.length(); i++)
		ret[i] = (WCHAR)str[i];
	ret[i] = '\0';
	return ret;
}
std::string Wchar_to_string(WCHAR* wch)
{
	std::string ret = "";

	while (*wch)
		ret += *wch++;

	return ret;
}
void read_directory(const std::string& name, std::vector<std::string>& v)
{
	std::string pattern(name);
	if (pattern.find_last_of("\\") == (pattern.length() - 1))
		pattern.append("*");
	else if (pattern.find_last_of("\\*") != (pattern.length() - 1))
		pattern.append("\\*");
	WIN32_FIND_DATA data;
	HANDLE hFind;
	if ((hFind = FindFirstFile(string_to_w_char(pattern), &data)) != INVALID_HANDLE_VALUE) {
		do {
			v.push_back(Wchar_to_string(data.cFileName));

		} while (FindNextFile(hFind, &data) != 0);
		FindClose(hFind);
	}
}
int main()
{	
	char temp[256];
	std::string directory;
	GetCurrentDirectoryA(sizeof(temp), temp);
	directory = temp;
	directory += "\\";

	std::vector<std::string> plugin_list;
	read_directory(directory, plugin_list);
	for (int i = 2; i < plugin_list.size(); i++)//first two elements arent of our intrest
	{
		
		if ((plugin_list[i].rfind(".xml"))!=std::string::npos)
		{
			std::cout << "dumping plugin %s\n" << plugin_list[i];
			tag_struct* temp = struct_generator::_generate_tag_struct(plugin_list[i]);
			_dump_tag_struct(temp);
		}		
	}
	
	getchar();
}
void test()
{


}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
