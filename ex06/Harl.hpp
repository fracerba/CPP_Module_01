#ifndef Harl_HPP
#define Harl_HPP

#include <string>
#include <iostream>
#include <sstream> 
#include <cstdlib>

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        Harl();
        ~Harl();
		void complain(std::string level);
};

#endif