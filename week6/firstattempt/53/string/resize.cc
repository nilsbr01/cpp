#include "strings.ih"

void Strings::resize(size_t size)
{
    // check if size does not exceed capacity
    size_t upBound = (size < d_capacity ? size : d_capacity);

    // make all new strings
    for (size_t index = d_size; index < upBound; ++index)
        d_str[index] = new string;

    d_size = upBound;
}