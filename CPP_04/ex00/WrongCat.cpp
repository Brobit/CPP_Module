#include "./WrongCat.hpp"
#include "./WrongAnimal.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "Default constructor of the WrongCat class called !" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	std::cout << "Copy constructor of the WrongCat class called !" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "miaou miaou" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
		*this = other;
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "Destructor of the WrongCat class called !" << std::endl;
}
