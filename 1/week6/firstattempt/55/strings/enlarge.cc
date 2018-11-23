#include "strings.ih"

string *Strings::enlarge(size_t capacity)
{
    d_capacity = capacity;                       // increase capacity
    string *ret = static_cast<string *>(   // make new array
                            operator new(d_capacity * sizeof(string)));

    for (size_t index = 0; index != d_size; ++index)// copy existing pointers
        new (ret + index) std::string{ *(d_str + index) };

    return ret;
}