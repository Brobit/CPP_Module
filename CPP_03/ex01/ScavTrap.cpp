#include "./ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Constructor called for ScavTrap : " << this->_name << std::endl; 
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	*this = copy;
	std::cout << "ScavTrap copy constructor called for : " << this->_name << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "ScavTrap assigment operator called for : " << this->_name << std::endl;
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap : " << this->_name << " is now in Gate Keeper mode !" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called for ScavTrap : " << this->_name << std::endl;
}
