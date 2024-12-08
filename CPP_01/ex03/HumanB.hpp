#pragma once

#include "./Weapon.hpp"
#include <string>

class HumanB {
	public:
		HumanB(const std::string &name);
		void	attack() const;
		void	setWeapon(Weapon &weapon);
		~HumanB();

	private:
		std::string		_name;
		Weapon*			_weapon;
};
