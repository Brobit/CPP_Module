#pragma once

#include <string>
class Zombie {
	public:
		Zombie(std::string &name);
		void	announce(void) const;
		~Zombie();

	private:
		std::string	_name;
};
