#ifndef	__ZOMBIE__
	#define __ZOMBIE__

	#include <iostream>
	#include <string>

	class Zombie
	{
		private: 
			std::string _name;
		public:
			Zombie(std::string name);
			~Zombie(void);
			void	announce(void);
	};

#endif