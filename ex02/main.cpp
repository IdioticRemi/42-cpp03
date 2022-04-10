#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << "======== INITIALIZATION ========" << std::endl;

	ClapTrap clap("Clap");
	ClapTrap claap(clap);
	ScavTrap clop("Clooop");
	ScavTrap scav;
	FragTrap fraggy("Fraaaagggyyyy");
	FragTrap frag;

	std::cout << "======== ACTIONS ========" << std::endl;

	claap.takeDamage(999);
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
	fraggy.attack("Froggg");
	fraggy.takeDamage(50);
	fraggy.beRepaired(100);
	fraggy.takeDamage(149);
	fraggy.beRepaired(500);
	fraggy.takeDamage(999);
	fraggy.highFivesGuys();
	frag.highFivesGuys();
	frag.takeDamage(5000);
	frag.attack("Something");

	std::cout << "======== DESTRUCTION ========" << std::endl;
}