#ifndef PROXY_H
#define PROXY_H

#include "../bitset/bitmemory.h"
#include <cstddef>

class BitMemory::Proxy
{
    private:

    public:
        Proxy(BitMemory::memory_t memory, size_t bit);
        Proxy &operator=(const Proxy &rhs);
        Proxy &operator=(const size_t &rhs);
        Proxy &operator|=(const size_t &rhs);
        Proxy &operator&=(const size_t &rhs);
        size_t value();
};

#endif