#include "Zombie.hpp"

std::string set_nmb(int i)
{
    std::stringstream s;
    s << i + 1;
    return(s.str());
}

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *Z = new Zombie[N];
    std::string s;
    
    for (int i = 0; i < N; i++)
    {
        s = set_nmb(i);
        Z[i].set_name(name + s);
    }
    return(Z);
}