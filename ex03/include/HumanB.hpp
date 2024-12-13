#ifndef __HUMANB__
	#define __HUMANB__

	#include <iostream>
	#include <string>
	#include "./Weapon.hpp"

	class HumanB {
		private:
			std::string	_name;
			Weapon		*_weapon;
		public:
			HumanB(std::string name);
			~HumanB(void);
			void	attack(void);
			void	setWeapon(Weapon &weapon);
	};

#endif