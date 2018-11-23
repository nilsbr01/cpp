#include "sort.ih"

Sort::Sort(int (*compare)(std::string const **lhs, std::string const **rhs) )
:
    d_compare(compare)
{}

