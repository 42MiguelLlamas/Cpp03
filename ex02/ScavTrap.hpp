#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(ScavTrap const& a);
        ScavTrap (std::string n, int a, int b, int c);
        ScavTrap& operator=(ScavTrap const& other);
        ~ScavTrap();
        void guardGate(void);
};

#endif