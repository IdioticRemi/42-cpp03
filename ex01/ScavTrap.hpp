#ifndef CPP03_SCAVTRAP_HPP
#define CPP03_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
public:
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &src);
	ScavTrap();

	void guardGate();

	~ScavTrap();
};


#endif
