#include "string.ih"

String::String(std::istream &in)
{
    string line;

    while (getline(in, line))
        add(line);
}