#include "./include/utils.hpp"

int main(void)
{
	Zombie *horde = zombieHorde(10, "Zom");
	for (int i = 0; i < 10; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}