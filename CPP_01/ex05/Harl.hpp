#pragma once

#include <string>
class Harl {
	public:
		Harl();
		void	complain(std::string level);
		~Harl();

	private:
		void	_debug();
		void	_info();
		void	_warning();
		void	_error();
};
