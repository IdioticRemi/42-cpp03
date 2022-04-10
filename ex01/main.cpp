#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "======== INITIALIZATION ========" << std::endl;

	ClapTrap clap("Clap");
	ScavTrap clop("Clooop");
	ScavTrap scav;

	std::cout << "======== ACTIONS ========" << std::endl;

	scav.attack("Momo");
	clap.attack("Trap");
	clap.takeDamage(50);
	clap.beRepaired(50);
	clop.takeDamage(5);
	clop.beRepaired(20);
	clop.takeDamage(20);
	clop.takeDamage(20);
	scav.guardGate();
	clop.takeDamage(200);
	scav.guardGate();
	scav.attack("Momo");
	clop.attack("Clap");

	std::cout << "======== DESTRUCTION ========" << std::endl;
}