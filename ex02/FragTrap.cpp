#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << FRAGTRAP << "Default constructor called!" << RESET << std::endl;
	this->name = "FragTrap";
	this->hp = 100;
	this->ep = 100;
	this->ad = 30;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	std::cout << FRAGTRAP << "Name constructor called!" << RESET << std::endl;
	this->hp = 100;
	this->ep = 100;
	this->ad = 30;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap() {
	std::cout << FRAGTRAP << "Copy constructor called!" << RESET << std::endl;
	*this = src;
}

FragTrap::~FragTrap() {
	std::cout << FRAGTRAP << this->name << " got destroyed!" << RESET << std::endl;
}

void FragTrap::highFivesGuys() {
	if (!hp)
	{
		std::cout << FRAGTRAP << this->name << " tried to high five but is dead!" << RESET << std::endl;
		return;
	}
	std::cout << FRAGTRAP << this->name << " wants to high five!" << RESET << std::endl;
}
