#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main() {
    // Testing ClapTrap
    ClapTrap clap("Clap");
    clap.attack("Target A");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "-------------------------------------" << std::endl;

    // Testing ScavTrap
    ScavTrap scav("Scav");
    scav.attack("Target B");
    scav.takeDamage(10);
    scav.beRepaired(5);
    scav.guardGate(); // ScavTrap-specific behavior

    std::cout << "-------------------------------------" << std::endl;

    // Testing FragTrap
    FragTrap frag("Frag");
    frag.attack("Target C");
    frag.takeDamage(15);
    frag.beRepaired(10);
    frag.highFivesGuys(); // FragTrap-specific behavior

    std::cout << "-------------------------------------" << std::endl;

    // Mixed pointers to demonstrate polymorphism
    ClapTrap* trap = &frag; 
    trap->attack("Target D");

    return 0;
}
