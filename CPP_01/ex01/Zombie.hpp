#pragma once

#include <string>
class Zombie {
	public:
		Zombie();
		void	announce(void) const;
		void	setName(std::string &name);
		~Zombie();

	private:
		std::string	_name;
};
