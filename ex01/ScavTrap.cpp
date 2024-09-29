#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("", 100, 50, 20)
{
	std::cout << "ScavTrap constructor" << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap name constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor" << std::endl;
}

ScavTrap::ScavTrap (ScavTrap const& a) : ClapTrap(a.name, a.hitPoints, a.energyPoints, a.attackDamage)
{
    std::cout << "ScavTrap copy constructor called"<< std::endl;
};

void ScavTrap::attack(const std::string& target)
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
    std::cout << "ScavTrap " << name<<" attacks "<< target<<", causing "<<attackDamage<<" points of damage!"<<std::endl;
    this->energyPoints--;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& other) 
{
    if (this == &other)
        return *this;
    this->name = other.name;
    this->energyPoints = other.energyPoints;
    this->hitPoints = other.hitPoints;
    this->attackDamage = other.attackDamage;
    return *this;
};

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap has enterred Gate keeper mode." << std::endl;
}