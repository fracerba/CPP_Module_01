#include "Zombie.hpp"

int main()
{
    Zombie *Bob;
    int N = 8;

    Bob = zombieHorde(N, "Bob");
    for (int i = 0; i < N; i++)
        Bob[i].announce();
    delete[] Bob;
    return (0);
}