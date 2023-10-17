#ifndef Weapon_HPP
#define Weapon_HPP

#include <string>
#include <iostream>
#include <sstream> 
#include <cstdlib>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        ~Weapon();
        std::string getType(void) const;
        void setType(std::string str);
};

#endif