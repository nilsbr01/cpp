#include "main.ih"

size_t countWords()
{
    size_t count = 0;
    string word;

    // get words as long as possible
    while(cin >> word)
        ++count;

    return count;
}