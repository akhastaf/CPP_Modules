#include "FragTrap.hpp"

int main()
{
    FragTrap a("wow");
    FragTrap b("zoz");
    b.attack("Wow");
    a.takeDamage(15);
    b.highFivesGuys();

    return 0;
}