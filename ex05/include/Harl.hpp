#ifndef __HARL__
	#define __HARL__

	#include <iostream>

	class Harl
	{
		private:
			void	debug(void);
			void	info(void);
			void	warning(void);
			void	error(void);
		public:
			Harl(void);
			~Harl(void);
			void	complain(std::string level);
	};
	

#endif