#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("ClapTrap"), hp(10), ep(10), ad(0) {
	std::cout << "ClapTrap: Default contructor called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	*this = src;
	std::cout << name << " was built as a clone!" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : name(name), hp(10), ep(10), ad(0) {
	std::cout << name << " was built!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << name << " was destroyed :O" << std::endl;
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
		std::cout << name << " tried to attack but is already dead!" << std::endl;
		return;
	}
	if (!ep)
	{
		std::cout << name << " tried to attack but is out of energy!" << std::endl;
		return;
	}

	std::cout << name << " attacked "<< target << " dealing a total of " << ad << " damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (!hp)
	{
		std::cout << name << " is already dead!" << std::endl;
		return;
	}

	amount = std::min(amount, (unsigned int) hp);
	hp -= amount;

	std::cout << name << " lost " << amount << " hp!" << std::endl;
	if (!hp)
		std::cout << name << " died!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (!hp)
	{
		std::cout << name << " tried to repair but is already dead!" << std::endl;
		return;
	}
	if (!ep)
	{
		std::cout << name << " tried to repair but is out of energy!" << std::endl;
		return;
	}

	amount = std::min(amount, (unsigned int) ep);

	hp += amount;
	ep -= amount;

	std::cout << name << " repaired for " << amount << " hp!" << std::endl;
}
