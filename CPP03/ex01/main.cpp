#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("wow");
    ScavTrap b("zoz");
    b.attack("Wow");
    a.takeDamage(15);
    b.guardGate();
    return 0;
}