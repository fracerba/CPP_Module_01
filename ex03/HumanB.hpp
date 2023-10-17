#ifndef HumanB_HPP
#define HumanB_HPP

#include <string>
#include <iostream>
#include <sstream> 
#include <cstdlib>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon *weapon;
    public:
        HumanB(std::string name);
        ~HumanB();
        void setWeapon(Weapon &weapon);
		void attack(void);
};

#endif