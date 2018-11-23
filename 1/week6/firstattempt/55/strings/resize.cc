#include "strings.ih"

void Strings::resize(size_t size)
{
    if (size > d_size)
    {
        if (size > d_capacity)  // check if we need more capacity
            reserve(size);
        
        // initialize strings
        for (size_t index = d_size; index < size; ++index)
            new (d_str + index) std::string{  };

        d_size = size;          // update size
    }
    else if (size < d_size) // delete strings
    {
        for (string *sp = d_str + d_size; sp-- != (d_str + size); )
            sp->~string();

        d_size = size;          // update size
    }
}