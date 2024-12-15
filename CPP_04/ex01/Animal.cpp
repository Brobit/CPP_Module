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
	this->_type = copy._type;
	std::cout << "Copy constructor of Animal class called !" << std::endl;
}

Animal	&Animal::operator=(const Animal &other)
{
	if (this != &other)
		this->_type = other._type;
	std::cout << "Assigment operator of Animal class called !" << std::endl;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "RRRRRRRRRRRRRRRRRRRRRRRRR!" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->_type);
}

Animal::~Animal() {
	std::cout << "Destructor of Animal class called !" << std::endl;
}
