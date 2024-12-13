#ifndef	__ZOMBIE__
	#define __ZOMBIE__

	#include <iostream>
	#include <string>

	class Zombie
	{
		private: 
			std::string _name;
		public:
			Zombie(void);
			~Zombie(void);
			void	announce(void);
			void	setName(std::string);
	};

#endif