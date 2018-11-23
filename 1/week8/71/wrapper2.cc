#include "wrapper.ih"

Wrapper::Wrapper(string const &str)
:
    d_tag(STRING),
    d_union(str)
{}
