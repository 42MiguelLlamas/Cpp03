#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap A("Clapper", 10, 10, 0);

    A.attack("Peter");
    A.print();
    A.beRepaired(3);
    A.print();
    A.takeDamage(4);
    A.print();
    A.takeDamage(4);
    A.print();
    A.attack("Peter");
    A.print();
    A.takeDamage(4);
    A.print();
    A.takeDamage(4);
    A.print();
    A.attack("Peter");
    A.print();
}