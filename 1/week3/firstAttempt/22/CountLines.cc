#include "main.ih"

size_t CountLines(string input)
{
    size_t count = 0;
    string line;

    while(getline(cin, line))       // user input
    {
        ++count; 
    }

    return count;
}