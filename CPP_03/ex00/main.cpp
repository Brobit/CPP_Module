#include "ClapTrap.hpp"
#include <iostream>

int main() {
    std::cout << "--- Creating ClapTraps ---" << std::endl;
    ClapTrap clap1("Clapster");
    ClapTrap clap2("Trapster");

    std::cout << "\n--- Performing Actions ---" << std::endl;
    clap1.attack("a dummy target");
    clap2.takeDamage(5);
    clap2.beRepaired(3);

    std::cout << "\n--- Overdriving ClapTrap ---" << std::endl;
    clap2.takeDamage(20);
    clap1.attack("nothing"); // Test energy management
    clap1.attack("nothing again"); // Energy exhausted

    std::cout << "\n--- Cloning ClapTrap ---" << std::endl;
    ClapTrap clap3 = clap1;
    clap3.attack("a clone target");

    std::cout << "\n--- Destructing ClapTraps ---" << std::endl;
    return 0;
}
