#include "strings.ih"

std::istream &Strings::extractFrom(std::istream &in)
{
    std::string temp;
    while (getline(in, temp)) // will evaluate to false when read fails (i.e. EOF)
        this->add(temp);
    return in;
}