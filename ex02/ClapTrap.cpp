#include "ClapTrap.hpp"

ClapTrap::ClapTrap () : name("Default name"), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "Default constructor called "<< name << std::endl;
};

ClapTrap::ClapTrap (std::string n, int a, int b, int c) : name(n), hitPoints(a), energyPoints(b), attackDamage(c)
{
    std::cout << "Name constructor called: " << name << std::endl;
};

ClapTrap::ClapTrap (ClapTrap const& a) : name(a.name), hitPoints(a.hitPoints), energyPoints(a.energyPoints), attackDamage(a.attackDamage)
{
    std::cout << "Copy constructor called " << name << std::endl;
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
    std::cout << "Destructor called " << name << std::endl;
};

void ClapTrap::attack(const std::string& target)
{
    if (this->energyPoints == 0)
    {
        std::cout << name<<" is out of energy. " <<std::endl;
        return;
    }
    if (this->hitPoints == 0)
    {
        std::cout << name << " is dead. " << std::endl;
        return;
    } 
    std::cout << name<<" attacks "<< target<<", causing "<<attackDamage<<" points of damage!"<<std::endl;
    this->energyPoints--;
    
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->energyPoints == 0)
    {
        std::cout << name<<" is out of energy. " <<std::endl;
        return;
    }
    if (this->hitPoints == 0)
    {
        std::cout << name << " is dead. " << std::endl;
        return;
    }  
    std::cout << name<<" has received "<< amount<<" points of damage!"<<std::endl;
    if (this->hitPoints < amount)
        this->hitPoints = 0;
    else
        this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints == 0)
    {
        std::cout << name<<" is out of energy. " <<std::endl;
        return;
    }
    if (this->hitPoints == 0)
    {
        std::cout << name << " is dead. " << std::endl;
        return;
    } 
    std::cout << name<<" has repaired itself "<< amount <<" points of health!"<<std::endl;
    this->hitPoints += amount;
}

void ClapTrap::print(void)
{
    std::cout << name<<" has "<< hitPoints <<" points of health and " << energyPoints << " energy points."<<std::endl;    
};