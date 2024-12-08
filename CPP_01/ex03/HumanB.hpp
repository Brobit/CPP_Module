#pragma once

#include "./Weapon.hpp"
#include <string>

class HumanB {
	public:
		HumanB(std::string &name);
		void	attack() const;
		void	setWeapon(Weapon &weapon);
		~HumanB();

	private:
		Weapon*			_weapon;
		std::string		_name;
};
