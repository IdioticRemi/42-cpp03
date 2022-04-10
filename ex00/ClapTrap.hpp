#ifndef CPP03_CLAPTRAP_HPP
#define CPP03_CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <cmath>

class ClapTrap {
public:
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap &src);
	ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	virtual ~ClapTrap();

	ClapTrap &operator=(const ClapTrap &src);

private:
	std::string name;
	int hp, ep, ad;
};


#endif
