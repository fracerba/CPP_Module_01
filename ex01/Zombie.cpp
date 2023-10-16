#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout<<this->name<<" was blown up to pieces\n";
}

void Zombie::set_name(std::string str)
{
    this->name = str;
}

void Zombie::announce(void)
{
	std::cout<<this->name<<": BraiiiiiiinnnzzzZ...\n";
}