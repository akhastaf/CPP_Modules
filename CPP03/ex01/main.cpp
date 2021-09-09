#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("wow");
    ScavTrap b("zoz");
    // b.attack("Wow");
    // a.takeDamage(15);
    // b.guardGate();

    std::cout << b.getName() << " " << b.getAttackDamage() << " " << b.getEnergyPoints() << " " << b.getHitPoints() << std::endl;
    return 0;
}