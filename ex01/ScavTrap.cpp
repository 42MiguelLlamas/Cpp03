#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("", 100, 50, 20)
{
	std::cout << "ScavTrap constructor " << name << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap name constructor " << name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor " << name << std::endl;
}

ScavTrap::ScavTrap (ScavTrap const& a) : ClapTrap(a.name, a.hitPoints, a.energyPoints, a.attackDamage)
{
    std::cout << "ScavTrap copy constructor called "<< name<< std::endl;
};


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
    this->energyPoints--;
}