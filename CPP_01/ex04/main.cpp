#include <iostream>
#include <string>
#include <fstream>

bool	checkString(const std::string s1, const std::string s2)
{
	if (s1.empty() || s2.empty())
		return (false);
	if (s1 == s2)
		return (false);
	return (true);
}

bool	searchAndReplace(const std::string &filename, const std::string &s1, const std::string &s2)
{
	if (!checkString(s1, s2))
		return (false);

	std::ifstream inputFile(filename.c_str());
	if (!inputFile)
		return (std::cout << "Error occur while opening the file" << std::endl, false);

	std::ofstream outputFile((filename + ".replace").c_str());
	if (!outputFile)
		return (std::cout << "Error occur while creating the output file" << std::endl, inputFile.close(), false);

	std::string line;
	while (std::getline(inputFile, line))
	{
		std::string lineToPut;
		for (std::string::size_type i = 0; i < line.length(); i++) {
			if (line.substr(i, s1.length()) == s1)
			{
				lineToPut += s2;
				i += s1.length() - 1;
			}
			else
				lineToPut += line[i];
		}
		outputFile << lineToPut << std::endl;
	}
	return (true);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cout << argv[0] << " <filename> <string to replace> <string that replace>" << std::endl, 1);
	if (!searchAndReplace(argv[1], argv[2], argv[3]))
		return (1);
	return (0);
}
