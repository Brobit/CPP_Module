#include "./ScavTrap.hpp"

int main() {
    ScavTrap scav("Gatekeeper");

    scav.attack("Enemy");
    scav.takeDamage(20);
    scav.beRepaired(15);

    scav.guardGate();

    return 0;
}
