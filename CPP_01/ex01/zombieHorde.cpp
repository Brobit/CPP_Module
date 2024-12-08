#include "./Zombie.hpp"
#include <cstddef>
#include <string>

Zombie*	zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);

	Zombie* pointerToHorde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		pointerToHorde[i].setName(name);
	}
	return (pointerToHorde);
}
