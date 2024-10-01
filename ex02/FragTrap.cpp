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
	std::cout << "FragTrap has high fived some random guys" << std::endl;
}