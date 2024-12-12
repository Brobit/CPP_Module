#pragma	once

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap &copy);
		void	guardGate();
		ScavTrap &operator=(const ScavTrap &other);
		~ScavTrap();

};
