#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <sstream> 
#include <cstdlib>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void set_name(std::string str);
		void announce(void);

};

Zombie* zombieHorde(int N, std::string name);

#endif