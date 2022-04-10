#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << SCAVTRAP << "Default constructor called!" << RESET << std::endl;
	this->name = "ScavTrap";
	this->hp = 100;
	this->ep = 50;
	this->ad = 20;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	std::cout << SCAVTRAP << "Name constructor called!" << RESET << std::endl;
	this->hp = 100;
	this->ep = 50;
	this->ad = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap() {
	std::cout << SCAVTRAP << "Copy constructor called!" << RESET << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap() {
	std::cout << SCAVTRAP << this->name << " got destroyed!" << RESET << std::endl;
}

void ScavTrap::guardGate() {
	if (!hp)
	{
		std::cout << SCAVTRAP << this->name << " tried to guard a gate but is dead!" << RESET << std::endl;
		return;
	}
	std::cout << SCAVTRAP << this->name << " is now guarding a gate!" << RESET << std::endl;
}
