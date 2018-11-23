#include "strings.ih"

Strings &Strings::operator=(Strings &&tmp)
{
    Strings copy{ tmp };
    swap(copy);
    return *this;
}