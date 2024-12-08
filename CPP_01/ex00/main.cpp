#include "./Zombie.hpp"
#include <iostream>

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int main (void)
{
	std::cout << "Creating a zombie on the heap..." << std::endl;

    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    
    std::cout << "Creating a zombie on the stack..." << std::endl;
    randomChump("StackZombie");
    
    std::cout << "Deleting the heap zombie..." << std::endl;
    delete heapZombie;

	return (0);
}
