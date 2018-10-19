#include "strings.ih"

void Strings::destroy()
{   
    // delete all individual strings, only untill size, after index size
    // only null pointers exist
    // for (size_t index = 0; index < d_size; ++index)
    //     delete d_str[index];

    delete[] d_str;
}