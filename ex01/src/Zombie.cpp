#include "../include/Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << this << " is created." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this << " is destroyed." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}