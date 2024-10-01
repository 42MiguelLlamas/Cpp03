#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <string>
# include "ScavTrap.hpp"

class FragTrap: public ScavTrap
{
    public:
        FragTrap();
        FragTrap(FragTrap const& a);
        FragTrap (std::string n);
        FragTrap& operator=(FragTrap const& other);
        ~FragTrap();
        void attack(const std::string& target);
        void highFiveGuys(void);
};

#endif