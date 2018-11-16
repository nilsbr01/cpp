#include "strings.ih"

string *Strings::enlarge()
{
    return (this->*ptr)();
}