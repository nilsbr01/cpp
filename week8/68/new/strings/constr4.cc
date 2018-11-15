#include "strings.ih"

Strings::Strings(size_t nIterate, bool copy)
:
    d_size(0),
    d_str(0),
    d_nIterate(nIterate)
{
    if (copy)
        ptr = &Strings::enlargeByCopy;
    else
        ptr = &Strings::enlargeByMove;
}
