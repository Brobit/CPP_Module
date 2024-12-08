#include "./Zombie.hpp"
#include <string>

void	randomChump(std::string name)
{
	Zombie	zombsOnStack(name);
	zombsOnStack.announce();
}
