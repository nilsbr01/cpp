#include "main.ih"

size_t sizeExpr(string input)
{
    size_t count = 0;
    size_t elements = 0;

    while(getline(cin, input, ','))
    {
        count = count + 1;
    }
    
    elements = (count + (count - 1)) / 3;
    
    return elements;
}