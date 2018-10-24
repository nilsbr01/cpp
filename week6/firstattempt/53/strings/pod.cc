#include "strings.ih"

Strings::POD Strings::release()
{
    POD ret{ d_size, d_str, d_capacity };       // initialize the POD for the caller

    d_size = 0;                     // reinitialize our data members
    d_str = 0;
    d_capacity = 0;

    return ret;
}