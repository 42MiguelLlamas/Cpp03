#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
        FragTrap();
        FragTrap(ClapTrap const& a);
        FragTrap (std::string n);
        FragTrap& operator=(ClapTrap const& other);
        ~FragTrap();
        void attack(const std::string& target);
        void highFiveGuys(void);
};

#endif