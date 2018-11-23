#include "main.ih"

size_t CountWords(string input)
{
    size_t count = 0;
    string line;

    while(getline(cin, line))       // ask for input of user
    {
       for(size_t i = 0; i < line.length(); i++)
            {
                if(isspace(line.at(i)) > 0)     // this statement returns true if it encounters a space
                {
                    count = count + 1;
                }  
            }
    }

    return count;
}