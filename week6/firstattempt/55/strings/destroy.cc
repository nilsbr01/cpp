#include "strings.ih"

void Strings::destroy()
{   
    // delete all individual strings, only untill size, after index size
    // only null pointers exist
    for (string *sp = d_str + d_size; sp-- != d_str; )
        sp->~string();

    operator delete(d_str);
}