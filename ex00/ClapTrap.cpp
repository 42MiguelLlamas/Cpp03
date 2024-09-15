#include "ClapTrap.hpp"

ClapTrap::ClapTrap () : name("Default name"), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "Default constructor called"<< std::endl;
};

ClapTrap::ClapTrap (std::string n) : name(n), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "Name constructor called"<< std::endl;
};

ClapTrap::ClapTrap (ClapTrap const& a) : name(a.name), hitPoints(a.hitPoints), energyPoints(a.energyPoints), attackDamage(a.attackDamage)
{
    std::cout << "Copy constructor called"<< std::endl;
};

ClapTrap& ClapTrap::operator=(ClapTrap const& other) 
{
    if (this == &other)
        return *this;
    this->name = other.name;
    this->energyPoints = other.energyPoints;
    this->hitPoints = other.hitPoints;
    this->attackDamage = other.attackDamage;
    return *this;
};


ClapTrap::~ClapTrap ()
{
    std::cout << "Destructor called"<< std::endl;
};

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap "<<name<<" attacks"<< target<<", causing "<<attackDamage<<" points of damage!"<<std::endl;
    
}
void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap "<<name<<" has received"<< amount<<"points of damage!"<<std::endl;
    this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap "<<name<<" has repaired itself"<< amount <<"points of health!"<<std::endl;
    this->hitPoints += amount;
}
