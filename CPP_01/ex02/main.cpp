#include <string>
#include <iostream>

#define MEMORY_ADRESS		"The memory address of "
#define VALUE_OF			"The value of "
#define STR					"str : "
#define STRP				"strPointer : "
#define STRR				"strReference : "

int main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	strPointer = &str;
	std::string&	strReference = str;

	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << MEMORY_ADRESS << STR << &str << std::endl;
	std::cout << MEMORY_ADRESS << STRP << strPointer << std::endl;
	std::cout << MEMORY_ADRESS << STRR << &strReference << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
	std::cout << VALUE_OF << STR << str << std::endl;
	std::cout << VALUE_OF << STRP << *strPointer << std::endl;
	std::cout << VALUE_OF << STRR << strReference << std::endl;
	std::cout << "---------------------------------------------------" << std::endl;
	return (0);
}
