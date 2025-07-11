// Population Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int starting_org, days, tot_days, population;
    float increase;

    std::cout << "What is the starting number of organisms? \n";
    std::cin >> starting_org;
    
    if (starting_org < 2)
    {
        std::cout << "Value is too low \n";
        return 0;
    }
    std::cout << "What is the average daily increase in population? \n";
    std::cin >> increase;

    if (increase < 0)
    {
        std::cout << "Value is too low \n";
        return 0;
    }

    std::cout << "How many days will the organisms be multiplying? \n";
    std::cin >> tot_days;

    if (tot_days < 1)
    {
        std::cout << "Value is too low \n";
        return 0;

    }

}
