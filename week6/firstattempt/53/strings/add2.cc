#include "strings.ih"

void Strings::add(string const &next)
{
    if (d_size == d_capacity)
    {
        string **tmp = enlarge();            // make room for the next string,
        destroy();                          // return old memory
        d_str = tmp;                        // update d_str and d_size
    }

    d_str[d_size] = new string(next);         // store next
    ++d_size;
}