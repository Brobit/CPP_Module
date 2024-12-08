#include <cctype>
#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	argv++;
	std::locale loc;
	for (std::string::size_type i = 0; argv[i]; i++) {
		std::string string = argv[i];
		for(std::string::size_type j = 0; j < string.length(); j++) {
			std::cout << std::toupper(string[j], loc);
		}
	}
	std::cout << std::endl;
	return (0);
}
