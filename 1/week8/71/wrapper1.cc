#include "wrapper.ih"

Wrapper::Wrapper(Strings const &strs)
:
    d_tag(STRINGS),
    d_union(strs)
{}
