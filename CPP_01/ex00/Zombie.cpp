#include "./Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string &name) : _name(name) {
	std::cout << _name << ": created !" << std::endl;
}

void	Zombie::announce() const
{
		std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << _name << ": destroyed !" << std::endl;
}
