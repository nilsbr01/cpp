#include "strings.ih"

void Strings::add(string const &next)
{
    if (d_size == d_capacity)
    {
        // make room for the next string
        string *tmp = enlarge(2 * d_capacity);
        destroy();                          // return old memory
        d_str = tmp;                        // update d_str and d_size
    }

    new (d_str + d_size) std::string{ next };         // store next
    ++d_size;
}