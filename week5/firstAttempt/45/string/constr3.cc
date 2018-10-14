#include "string.ih"

String::String(std::istream &in)
{
    d_size = 0; // set size of string array to zero

    string line;
    
    // add all strings with member add
    while (getline(in, line))
        add(line);
}