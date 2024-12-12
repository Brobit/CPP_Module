#pragma once

#include "ClapTrap.hpp"
class FragTrap : public ClapTrap
{
	public:
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &copy);
		FragTrap &operator=(const FragTrap &other);
		void	highFivesGuys() const;
		~FragTrap();
};
