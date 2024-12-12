#include "./ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap(const std::string &name) : _name(name) , _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Constructor called for ClapTrap : " << this->_name << std::endl; 
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage
			<< " points of damage! " << "It have " << this->_hitPoints << " hit points and "
			<< this->_energyPoints << " energy points" << std::endl;
	}
	else if (this->_hitPoints <= 0)
		std::cout << "ClapTrap : " << this->_name << " have no enough hit points to attack !" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "ClapTrap : " << this->_name << " have no enough energy points to attack !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (static_cast<int>(amount) >= this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	std::cout << " ClapTrap : " << this->_name << " take " << amount << " points of damage ! "
	<< "It have " << this->_hitPoints << " hit points and " << this->_energyPoints << " energy points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints--;
		this->_hitPoints += amount;
		std::cout << "ClapTrap : " << this->_name << " repairs itself ! it recovered " << amount << " hit points back ! "
		<< "It have " << this->_hitPoints << " hit points and " << this->_energyPoints << " energy points" << std::endl;
	}
	else if (this->_hitPoints <= 0)
		std::cout << "ClapTrap : " << this->_name << " have no enough hit points to repair itself !" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "ClapTrap : " << this->_name << " have no enough energy points to repair itself !" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called for ClapTrap : " << this->_name << std::endl; 
}
