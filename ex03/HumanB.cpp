#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack(void)
{
    if (weapon)
        std::cout<<this->name<<" attacks with their "<<this->weapon->getType()<<"\n";
    else
        std::cout<<this->name<<" attacks with their bare hands\n";
}