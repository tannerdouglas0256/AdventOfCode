// Day1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

int main(int argc, char * argv[])
{
    std::cout << "Hello World!\n";
    std::ifstream inFile;
    std::string line;

    std::string argv_str(argv[0]);
    std::string base = argv_str.substr(0, argv_str.find_last_of("/"));

    std::cout << base << std::endl;

    inFile.open("input.txt");

    if (!inFile)
    {
        std::cerr << "Unable to open file!" << std::endl;
        exit(1); //terminate with error
    }

    while (std::getline(inFile, line))
    {
        std::cout << "Line is: " << line << std::endl;
        
    }


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
