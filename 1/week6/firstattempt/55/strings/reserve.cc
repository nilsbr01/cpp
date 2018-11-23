#include "strings.ih"

void Strings::reserve(size_t capacity)
{
    if (capacity > d_capacity) 
    {
        string *tmp = enlarge(capacity);
        destroy();                                    // destroy old
        d_str = tmp;                                  //update new
    }
    else if (capacity < d_size)
    {
        d_capacity = capacity;                        // decrease capacity
        string *tmp = static_cast<string *>(   // make new array
                            operator new(d_capacity * sizeof(string)));

        for (size_t index = 0; index != d_capacity; ++index)// copy existing pointers
            new (tmp + index) std::string{ *(d_str + index) };

        destroy();                                    // destroy old

        d_str = tmp;
        d_size = capacity;                            //decrease size
    }
}