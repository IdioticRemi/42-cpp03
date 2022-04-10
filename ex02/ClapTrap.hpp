#ifndef CPP03_CLAPTRAP_HPP
#define CPP03_CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <cmath>

#define CLAPTRAP "\e[37m"
#define SCAVTRAP "\e[35m"
#define FRAGTRAP "\e[36m"
#define RESET "\e[0m"

class ClapTrap {
public:
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap &src);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	virtual ~ClapTrap();

	ClapTrap &operator=(const ClapTrap &src);

protected:
	ClapTrap();

	std::string name;
	int hp;
	int ep;
	int ad;
};


#endif
