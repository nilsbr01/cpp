#include "strings.ih"

Strings::Strings(size_t size)
:
    d_str(new string*[size]),
    d_capacity(size)
{}
