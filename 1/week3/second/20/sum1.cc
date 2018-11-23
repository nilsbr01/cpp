#include "main.ih"

// function if parameters are integrals
int sum(std::initializer_list<int> list)     
{
    int intSum = 0;
    
    for(int value: list)
        intSum += value;

    return intSum;
}

