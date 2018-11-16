#include "data.ih"

Data::Data(string const &str)
:
    d_tag(STRING),
    d_union(str)
{}
