#ifndef __HUMANA__
	#define __HUMANA__

	#include <iostream>
	#include <string>
	#include "./Weapon.hpp"

	class HumanA {
		private:
			std::string	_name;
			Weapon	&_weapon;
		public:
			HumanA(std::string name, Weapon &weapon);
			~HumanA(void);
			void	attack(void);
			void	setWeapon(Weapon weapon);
	};

#endif