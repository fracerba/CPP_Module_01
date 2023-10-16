#include "Zombie.hpp"

int main()
{
    Zombie *Bob;

    randomChump("Alice");
    Bob = newZombie("Bob");
    Bob->announce();
    delete Bob;
    return (0);
}