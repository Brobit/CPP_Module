#include "./FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Constructor called for FragTrap : " << this->_name << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	*this = copy;
	std::cout << "Copy constructor called for FragTrap : " << this->_name << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
		*this = other;
	return (*this);
	std::cout << "FragTrap assignment operator called for : " << this->_name << std::endl;
}

void	FragTrap::highFivesGuys() const
{
	std::cout << "FragTrap -> " << this->_name << " request a High Five !!!!!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called for : " << this->_name << std::endl;
}
