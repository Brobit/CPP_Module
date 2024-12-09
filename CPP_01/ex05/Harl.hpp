#pragma once

#include <string>
class Harl {
	public:
		Harl();
		void	complain(std::string level);
		~Harl();

	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
};
