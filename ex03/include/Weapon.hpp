#ifndef __WEAPON__
	#define __WEAPON__

	#include <iostream>
	#include <string>

	class Weapon {
		private:
			std::string	_type;
		public:
			Weapon(std::string type);
			~Weapon(void);
			const std::string &getType(void);
			void setType(std::string type);
	};

#endif