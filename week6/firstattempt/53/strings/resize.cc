#include "strings.ih"

void Strings::resize(size_t size)
{
    if (size > d_size)
    {
        if (size > d_capacity)  // check if we need more capacity
            reserve(size);
        
        // initialize strings
        for (size_t index = d_size; index < size; ++index)
            d_str[index] = new string;

        d_size = size;          // update size
    }
    else if (size < d_size) // delete strings
    {
        for (size_t index = size; index < d_size; ++index)
            delete d_str[index];

        d_size = size;          // update size
    }
}