#include "FragTrap.hpp"

int main(void)
{
    ClapTrap A("Clapper", 10, 10, 0);
    ScavTrap B("Crad", 100, 50, 20);
    FragTrap C("Perry");

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
    C.attack("Peter");
    C.print();
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
    C.beRepaired(3);
    C.print();
    C.takeDamage(4);
    C.print();
    C.takeDamage(4);
    C.print();
    C.attack("Peter");
    C.print();
    C.takeDamage(4);
    C.print();
    C.takeDamage(4);
    C.print();
    C.attack("Peter");
    C.print();
    C.highFiveGuys();
}