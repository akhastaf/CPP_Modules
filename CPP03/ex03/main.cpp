#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a("zoz");

    a.whoAmI();
    std::cout << a.getHitPoints() << " " << a.getEnergyPoints() << " " << a.getAttackDamage() << std::endl;
    a.attack("test");
    return 0;
}