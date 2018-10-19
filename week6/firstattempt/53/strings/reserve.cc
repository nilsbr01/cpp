#include "strings.ih"

void Strings::reserve(size_t size)
{
    // delete all reserved strings
    for (size_t index = size; index < d_size; ++index)
        delete d_str[index];

    d_size = size;
}