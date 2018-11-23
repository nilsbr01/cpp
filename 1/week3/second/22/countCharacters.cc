#include "main.ih"

size_t countCharacters()
{   
    size_t count = 0;

    // ignore every character
    while(cin.ignore())
        ++count;      

    return count;
}