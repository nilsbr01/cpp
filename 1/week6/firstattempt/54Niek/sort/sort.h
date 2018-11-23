#ifndef INCLUDED_SORT_
#define INCLUDED_SORT_

#include <iosfwd>
#include <cstdlib>

class Sort
{
    int (*d_compare)(std::string const **lhs, std::string const **rhs);

    public:
        Sort(int (*compare)(std::string const **lhs, std::string const **rhs) );
        void sort(std::string **data, size_t size);
};
        
#endif