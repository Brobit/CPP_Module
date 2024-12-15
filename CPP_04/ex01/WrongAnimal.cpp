#include "./WrongAnimal.hpp"
#include <iostream>
#include <string>

WrongAnimal::WrongAnimal() {
	this->_type = "Sanic";
	std::cout << "Default constructor of WrongAnimal class called !" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type)
{
	std::cout << "Type constructor of WrongAnimal class called !" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
	std::cout << "Copy constructor of WrongAnimal class called !" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
		*this = other;
	std::cout << "Assigment operator of WrongAnimal class called !" << std::endl;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "GneuGneu!" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor of WrongAnimal class called !" << std::endl;
}
