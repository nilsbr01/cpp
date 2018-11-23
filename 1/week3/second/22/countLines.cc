#include "main.ih"

size_t countLines()
{
    size_t count = 0;
    string line;

    // get line as long as possible
    while(getline(cin, line))
        ++count; 

    return count;
}