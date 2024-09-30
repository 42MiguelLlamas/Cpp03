#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap A("Clapper", 10, 10, 0);
    ScavTrap B("Brad");
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
    B.attack("Peter");
    B.print();
    B.beRepaired(3);
    B.print();
    B.takeDamage(4);
    B.print();
    B.takeDamage(4);
    B.print();
    B.attack("Peter");
    B.print();
    B.takeDamage(4);
    B.print();
    B.takeDamage(4);
    B.print();
    B.attack("Peter");
    B.print();
    B.guardGate();
}