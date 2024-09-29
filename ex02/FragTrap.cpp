#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("", 100, 50, 20)
{
	std::cout << "FragTrap constructor" << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "FragTrap name constructor" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor" << std::endl;
}

FragTrap::FragTrap (FragTrap const& a) : ClapTrap(a.name, a.hitPoints, a.energyPoints, a.attackDamage)
{
    std::cout << "FragTrap copy constructor called"<< std::endl;
};

void FragTrap::attack(const std::string& target)
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
    std::cout << "FragTrap " << name<<" attacks "<< target<<", causing "<<attackDamage<<" points of damage!"<<std::endl;
    this->energyPoints--;
}

FragTrap& FragTrap::operator=(FragTrap const& other) 
{
    if (this == &other)
        return *this;
    this->name = other.name;
    this->energyPoints = other.energyPoints;
    this->hitPoints = other.hitPoints;
    this->attackDamage = other.attackDamage;
    return *this;
};

void FragTrap::guardGate()
{
	std::cout << "FragTrap has enterred Gate keeper mode." << std::endl;
}