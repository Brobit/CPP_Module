#pragma once

#include "./Weapon.hpp"
#include <string>

class HumanA {
	public:
		HumanA(const std::string &name, Weapon &weapon);
		void	attack() const;
		~HumanA();

	private:
		std::string		_name;
		Weapon&			_weapon;
};
