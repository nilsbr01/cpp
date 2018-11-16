#include "data.ih"

Data::Data(Strings const &strs)
:
    d_tag(STRINGS),
    d_union(strs)
{}
