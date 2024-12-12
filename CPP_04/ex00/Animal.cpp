#include "./Animal.hpp"
#include <iostream>
#include <string>

Animal::Animal() {
	this->_type = "Tyrannosaurus Rex";
	std::cout << "Default constructor of Animal class called !" << std::endl;
}

Animal::Animal(const std::string &type) : _type(type)
{
	std::cout << "Type constructor of Animal class called !" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
	std::cout << "Copy constructor of Animal class called !" << std::endl;
}

Animal	&Animal::operator=(const Animal &other)
{
	if (this != &other)
		*this = other;
	std::cout << "Assigment operator of Animal class called !" << std::endl;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "RRRRRRRRRRRRRRRRRRRRRRRRR!" << std::endl;
}

Animal::~Animal() {
	std::cout << "Destructor of Animal class called !" << std::endl;
}
