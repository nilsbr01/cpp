#include "strings.ih"

void Strings::reserve(size_t capacity)
{
    if (capacity > d_capacity) 
    {
        string **tmp = enlarge(capacity);
        destroy();                                    // destroy old
        d_str = tmp;                                  //update new
    }
    else if (capacity < d_size)
    {
        d_capacity = capacity;                        // decrease capacity
        string **ret = new string*[d_capacity];       // room for an extra string *

        for (size_t index = 0; index != d_capacity; ++index)// copy existing pointers
            ret[index] = d_str[index];

        destroy();                                    // destroy old

        d_str = ret;
        d_size = capacity;                            //decrease size
    }
}