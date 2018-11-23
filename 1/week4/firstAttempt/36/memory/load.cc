#include "memory.ih"

int Memory::load(size_t const &address)
{
    // if address in range, return value at that address
    if (address < RAM::SIZE)
        return d_mem[address];

    // else return 0
    return 0;    
}