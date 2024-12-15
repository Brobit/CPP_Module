#include "./Cat.hpp"
#include "./Animal.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat") , _brain(new Brain())
{
	std::cout << "Default constructor of the Cat class called !" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy), _brain(new Brain(*copy._brain))
{
	std::cout << "Copy constructor of the Cat class called !" << std::endl;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		*this = other;
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	std::cout << "Assignment operator of the Cat class called !" << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Miaouuuuu" << std::endl;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Destructor of the Cat class called !" << std::endl;
}
