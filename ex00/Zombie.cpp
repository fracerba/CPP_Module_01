#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{
    this->name = str;
}

Zombie::~Zombie()
{
    std::cout<<this->name<<" was blown up to pieces\n";
}

void Zombie::announce(void)
{
	std::cout<<this->name<<": BraiiiiiiinnnzzzZ...\n";
}