#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("ClapTrap"), hp(10), ep(10), ad(0) {
	std::cout << CLAPTRAP << "Default contructor called!" << RESET << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : name(name), hp(10), ep(10), ad(0) {
	std::cout << CLAPTRAP << "Name constructor called!" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	std::cout << CLAPTRAP << "Copy constructor called!" << RESET << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap() {
	std::cout << CLAPTRAP << name << " was destroyed!" << RESET << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
	this->hp = src.hp;
	this->ep = src.ep;
	this->ad = src.ad;
	this->name = src.name;
	return *this;
}

void ClapTrap::attack(const std::string &target) {
	if (!hp)
	{
		std::cout << CLAPTRAP << name << " tried to attack but is already dead!" << RESET << std::endl;
		return;
	}
	if (!ep)
	{
		std::cout << CLAPTRAP << name << " tried to attack but is out of energy!" << RESET << std::endl;
		return;
	}

	std::cout << CLAPTRAP << name << " attacked "<< target << " dealing a total of " << ad << " damage!" << RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (!hp)
	{
		std::cout << CLAPTRAP << name << " is already dead!" << RESET << std::endl;
		return;
	}

	amount = std::min(amount, (unsigned int) hp);
	hp -= amount;

	std::cout << CLAPTRAP << name << " lost " << amount << " hp!" << RESET << std::endl;
	if (!hp)
		std::cout << CLAPTRAP << name << " died!" << RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (!hp)
	{
		std::cout << CLAPTRAP << name << " tried to repair but is already dead!" << RESET << std::endl;
		return;
	}
	if (!ep)
	{
		std::cout << CLAPTRAP << name << " tried to repair but is out of energy!" << RESET << std::endl;
		return;
	}

	amount = std::min(amount, (unsigned int) ep);

	hp += amount;
	ep -= amount;

	std::cout << CLAPTRAP << name << " repaired for " << amount << " hp!" << RESET << std::endl;
}

