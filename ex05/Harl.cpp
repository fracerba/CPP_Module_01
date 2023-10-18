#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
    std::cout<<"[ DEBUG ]\n";
    std::cout<<"I love having extra bacon for my 7XL-double-";
    std::cout<<"cheese-triple-pickle-special-ketchup burger.\n";
    std::cout<<"I really do!\n";
}

void Harl::info(void)
{
    std::cout<<"[ INFO ]\n";
    std::cout<<"I cannot believe adding extra bacon costs more money.\n";
    std::cout<<"You didn't put enough bacon in my burger!\n";
    std::cout<<"If you did, I wouldn't be asking for more!\n";
}

void Harl::warning(void)
{
    std::cout<<"[ WARNING ]\n";
    std::cout<<"I think I deserve to have some extra bacon for free.\n";
    std::cout<<"I've been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
    std::cout<<"[ ERROR ]\n";
    std::cout<<"This is unacceptable!\n";
    std::cout<<"I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
    int i = 0;
    std::string str[4];
    void (Harl::*fun[4])(void);
    str[0] = "DEBUG";
    str[1] = "INFO";
    str[2] = "WARNING";
    str[3] = "ERROR";
    fun[0] = &Harl::debug;
    fun[1] = &Harl::info;
    fun[2] = &Harl::warning;
    fun[3] = &Harl::error;

    while (i < 4)
    {
        if(level == str[i])
            break;
        i++;
    }
    if (i < 4)
        (this->*fun[i])();
    else
        std::cout<<"[ Probably complaining about insignificant problems ]\n";
}