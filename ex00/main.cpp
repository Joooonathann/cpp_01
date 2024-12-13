#include "./include/utils.hpp"

int main(void)
{
	Zombie	*heapZombie;
	heapZombie = newZombie("Tekila");
	
	heapZombie->announce();
	randomChump("Kawa");
	delete heapZombie;
	return (0);
}