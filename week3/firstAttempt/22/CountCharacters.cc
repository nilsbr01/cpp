#include "main.ih"

size_t CountCharacters(string input)
{   
    size_t count = 0;
    string line;

    while(getline(cin, line))       // user input
        count += line.size();       // count characters in line
    
    return count;
}