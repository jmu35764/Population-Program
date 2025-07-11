// Population Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int days, tot_days, population;
    float increase;

    std::cout << "What is the starting number of organisms? \n";
    std::cin >> population;
    
    if (population < 2)
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
        std::cout << "Value is too low. \n";
        return 0;

    }
    std::cout << " \n";

    //mult = (increase/100) +1;

    for (days = 1; days < tot_days; days++)
    {
        population = population * ((increase / 100) + 1);
        std::cout << "On day " << days << " the total population will be " << population << std::endl;
    }
}
