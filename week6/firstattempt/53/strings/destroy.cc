#include "strings.ih"

void Strings::destroy()
{   
    // delete all individual strings, only untill size, after index size
    // only null pointers exist

    delete[] d_str;
}