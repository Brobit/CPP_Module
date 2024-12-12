#include "./Cat.hpp"
#include "./Animal.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat")
{
	std::cout << "Default constructor of the Cat class called !" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Copy constructor of the Cat class called !" << std::endl;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
		*this = other;
	std::cout << "Assignment operator of the Cat class called !" << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Miaouuuuu" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Destructor of the Cat class called !" << std::endl;
}
