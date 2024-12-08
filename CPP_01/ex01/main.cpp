#include "./Zombie.hpp"
#include <iostream>

Zombie*	zombieHorde(int N, std::string name);

int main() {
    int N = 10;
    std::cout << "Creating a horde of " << N << " zombies..." << std::endl;

    Zombie* horde = zombieHorde(N, "HordeZombie");

    if (horde) {
        for (int i = 0; i < N; i++) {
            horde[i].announce();
        }
        delete[] horde;
    } else {
        std::cerr << "Failed to create zombie horde!" << std::endl;
    }

    return 0;
}
