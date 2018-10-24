#include "strings.ih"

string **Strings::enlarge(size_t capacity)
{
    d_capacity = capacity;                       // increase capacity
    string **ret = new string*[d_capacity];       // room for an extra string *

    for (size_t index = 0; index != d_size; ++index)// copy existing pointers
        ret[index] = new string(*d_str[index]);

    return ret;
}