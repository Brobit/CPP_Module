#include "./Animal.hpp"
#include "./Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog")
{
	std::cout << "Default constructor of the Dog class called !" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Copy constructor of the Dog class called !" << std::endl;
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
		*this = other;
	std::cout << "Assignment operator of the Dog class called !" << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Wouaf Wouaf !" << std::endl;
}

Dog::~Dog() 
{
	std::cout << "Destructor of the Dog class called !" << std::endl;
}
