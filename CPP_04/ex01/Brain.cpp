#include "./Brain.hpp"
#include <iostream>
#include <string>

Brain::Brain() {
	std::cout << "Default constructor of the brain class called !" << std::endl;
	for (std::string::size_type i = 0; i < 100; i++)
		this->ideas[i] = "pilou";
}

Brain::Brain(const Brain &copy)
{
	for (std::string::size_type i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
}

Brain	&Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (std::string::size_type i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
		std::cout << "Assigment operator for the Brain class called !" << std::endl;
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "Destructor of the Brain class called !" << std::endl;
}
