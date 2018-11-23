#include "main.ih"

// function if parameters are doubles
double sum(std::initializer_list<double> list)        
{
    double doubleSum = 0;
    
    for(double value: list)
        doubleSum += value;

    return doubleSum;
}