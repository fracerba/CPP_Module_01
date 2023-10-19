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
    unsigned long j = 0;
    std::string s1 = argv[2];
    std::string s2;
    std::string s3;
    std::ifstream infile(argv[1]);
    if (!infile.good() || !s1.length())
    {
        if (!infile.good())
            std::cout<<"File not found!\n";
        else if (!s1.length())
            std::cout<<"The first string can't be empty!\n";
        infile.close();
        return (1);
    }
    getline(infile, s3);
    if (!s3.length())
    {
        s3.clear();
        std::cout<<"The file is empty!\n";
        infile.close();
        return (1);
    }
    s2 = ((std::string)argv[1] + ".replace");
    std::ofstream outfile(s2.c_str());
    s2.clear();
    s2 = argv[3];
    if (!outfile.is_open())
    {
        std::cout<<"Failed to create "<<(std::string)argv[1]<<".replace\n";
        infile.close();
        return (1);
    }
    do{
        i = 0;
        while (i < s3.length())
        {
            j = s3.find(s1, i);
            if (j < s3.length())
            {
                outfile << s3.substr(i, (j - i));
                outfile << s2;
                j += s1.length();
            }
            else
                outfile << s3.substr(i, (s3.length() - i));
            i = j;
        }
        outfile << std::endl;
        s3.clear();
    }while (getline(infile, s3));
    infile.close();
    outfile.close();
    return (0);
}