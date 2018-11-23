#include "main.ih"

int increasing(string const **lhs, string const **rhs)
{
    return (*lhs)->compare(**rhs);
}
