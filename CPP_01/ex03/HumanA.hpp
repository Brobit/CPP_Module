#pragma once

#include "./Weapon.hpp"
#include <string>

class HumanA {
	public:
		HumanA(std::string &name, Weapon &weapon);
		void	attack() const;
		~HumanA();

	private:
		Weapon&			_weapon;
		std::string		_name;
};
