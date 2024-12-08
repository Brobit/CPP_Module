#include "./Zombie.hpp"
#include <iostream>

Zombie::Zombie() {
	std::cout << "A new zombie is created !" << std::endl;
}

void	Zombie::announce() const
{
		std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string &name)
{
	this->_name = name;
}

Zombie::~Zombie() {
	std::cout << _name << ": destroyed !" << std::endl;
}
