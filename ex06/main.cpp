#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        if (argc > 2)
            std::cout<<"Too many arguments!\n";
        else
            std::cout<<"Not enough arguments!\n";
        return(1);
    }
    Harl harl;
    harl.complain(argv[1]);
    return (0);
}