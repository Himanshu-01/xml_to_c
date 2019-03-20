// xml_to_c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "..\Header Files\pch.h"
#include <iostream>
#include"..\Header Files\_generate_struct.h"
#include"..\Header Files\_plugin_field.h"
#include"..\Header Files\_dump_c_struct.h"

char* SharedMapBase;

int main()
{
    std::cout << "Hello World!\n";
	tag_struct* temp = struct_generator::_generate_tag_struct("C:\\Users\\asus\\Desktop\\test\\foot.xml");
	_dump_tag_struct(temp);
	

	getchar();
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
