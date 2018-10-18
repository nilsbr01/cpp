#include "strings.ih"

string **Strings::enlarge()
{
    d_capacity *= 2;                                // increase capacity
    string **ret = new string*[d_capacity];       // room for an extra string

    for (size_t index = 0; index != d_size; ++index)// copy existing pointers
        ret[index] = d_str[index];

    return ret;
}