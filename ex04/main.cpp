#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        if (argc > 4)
            std::cout<<"Too many arguments!\n";
        else
            std::cout<<"Not enough arguments!\n";
        return(1);
    }
    unsigned long i = 0;
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string s3;
    std::ifstream infile(argv[1]);
    if (!infile.good())
    {
        std::cout<<"File not found\n";
        infile.close();
        return (1);
    }
    if (!getline(infile, s3))
    {
        s3.clear();
        std::cout<<"The file is empty!\n";
        infile.close();
        return (1);
    }
    s3.clear();
    s3 = (std::string)argv[1] + ".replace";
    std::ofstream outfile(s3.c_str());
    s3.clear();
    if (!((std::string)argv[1]).length())
    {
        std::cout<<"The first string can't be empty!\n";
        return (1);
    }
    if (!outfile.is_open())
    {
        std::cout<<"Failed to create "<<(std::string)argv[1]<<".replace\n";
        infile.close();
        return (1);
    }
    while (getline(infile, s3))
    {
        i = 0;
        while (i < s3.length())
        {
            if (s3.substr(i, s1.length()) == s1)
            {
                outfile << s2;
                i += s1.length() - 1;
            }
            else
                outfile << s3.substr(i, 1);
            i++;
        }
        outfile << std::endl;
        s3.clear();
    }
    infile.close();
    outfile.close();
    return (0);
}