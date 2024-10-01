#include "FragTrap.hpp"

FragTrap::FragTrap() : ScavTrap("", 100, 100, 30)
{
	std::cout << "FragTrap constructor " << name << std::endl;
}
FragTrap::FragTrap(std::string name) : ScavTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap name constructor " << name << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor " << name << std::endl;
}

FragTrap::FragTrap (FragTrap const& a) : ScavTrap(a.name, a.hitPoints, a.energyPoints, a.attackDamage)
{
    std::cout << "FragTrap copy constructor called "<< name << std::endl;
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

void FragTrap::highFiveGuys()
{
	std::cout << "FragTrap has enterred Gate keeper mode." << std::endl;
}