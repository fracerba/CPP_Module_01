#ifndef HumanA_HPP
#define HumanA_HPP

#include <string>
#include <iostream>
#include <sstream> 
#include <cstdlib>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon *weapon;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
		void attack(void);
};

#endif