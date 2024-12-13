#include "../include/utils.hpp"

void	randomChump(std::string name)
{
	Zombie	tmpZombie(name);
	tmpZombie.announce();
}