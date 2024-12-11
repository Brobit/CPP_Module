#pragma  once

#include <string>
class ClapTrap {
	public:
		ClapTrap(const std::string &name);
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		~ClapTrap();

	private:
		std::string	_name;
		int			_hitPoints = 10;
		int			_energyPoints = 10;
		int			_attackDamage = 0;
};
