#include "./ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap(const std::string &name) : _name(name) {
	std::cout << "Constructor called for Claptrap : " << this->_name << std::endl; 
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << " ClapTrap : " << this->_name << " take " << amount << " points of damage !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0)
	{
		std::cout << "ClapTrap : " << this->_name << " repairs itself ! it recovered " << amount << " hit points back !" << std::endl;
		this->_energyPoints--;
	}
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called for Claptrap : " << this->_name << std::endl; 
}
