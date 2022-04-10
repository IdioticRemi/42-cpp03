#ifndef CPP03_FRAGTRAP_HPP
#define CPP03_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
public:
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &src);
	FragTrap();

	void highFivesGuys();

	~FragTrap();
};



#endif
