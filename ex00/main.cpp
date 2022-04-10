#include "ClapTrap.hpp"

int main()
{
	std::cout << "======== INITIALIZATION ========" << std::endl;

	ClapTrap clap("Clap");
	ClapTrap clop(clap);

	std::cout << "======== ACTIONS ========" << std::endl;

	clap.attack("Trap");
	clap.takeDamage(50);
	clap.beRepaired(50);
	clop.takeDamage(5);
	clop.beRepaired(20);
	clop.takeDamage(20);
	clop.takeDamage(20);
	clop.attack("Clap");

	std::cout << "======== DESTRUCTION ========" << std::endl;
}