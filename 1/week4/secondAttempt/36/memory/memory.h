#ifndef INCLUDED_MEMORY_
#define INCLUDED_MEMORY_

#include <string>
#include <iostream>

#include "../enums.h"

class Memory
{
    int d_mem[RAM::SIZE];

    public:
        Memory();
        void store(size_t const &address, int const &value);
        int load(size_t const &address) const;

    private:
};
        
#endif
