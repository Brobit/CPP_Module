#include "./Harl.hpp"
#include <string>
#include <iostream>

Harl::Harl() {
}

void	Harl::complain(std::string level)
{
	std::string	choice[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*privateMethod[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (std::string::size_type i = 0; i < 4; i++) {
		if (level == choice[i])
			return ((this->*privateMethod[i])());
	}
	std::cout << "[ HARL 2.0] : " << level << " not found !" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::~Harl() {
}
