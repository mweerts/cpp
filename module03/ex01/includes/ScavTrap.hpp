#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
   public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &other);
    ~ScavTrap();
    ScavTrap &operator=(const ScavTrap &other);
    void      guardGate(void);
    bool      getMode(void) const;
    void      attack(const std::string &target);

   private:
    bool _gateKeeperMode;
};

#endif