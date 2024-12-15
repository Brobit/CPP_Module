#include "./Animal.hpp"
#include "Brain.hpp"
#include "./Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog"), _brain(new Brain())
{
	std::cout << "Default constructor of the Dog class called !" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy), _brain(new Brain(*copy._brain))
{
	std::cout << "Copy constructor of the Dog class called !" << std::endl;
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		*this = other;
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	std::cout << "Assignment operator of the Dog class called !" << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Wouaf Wouaf !" << std::endl;
}

Dog::~Dog() 
{
	delete this->_brain;
	std::cout << "Destructor of the Dog class called !" << std::endl;
}
