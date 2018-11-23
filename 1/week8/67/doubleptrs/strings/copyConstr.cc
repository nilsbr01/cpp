#include "strings.ih"

Strings::Strings(Strings const &other)
:
    d_size(other.d_size),
    d_capacity(other.d_capacity),
    d_str(rawPointers(other.d_size))
{
    for (size_t index = 0; index != d_size; ++index)
        d_str[index] = new string(*other.d_str[index]);
}
