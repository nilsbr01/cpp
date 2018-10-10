#include "memory.ih"

void Memory::store(size_t const &address, int const &value)
{
    // if address in range, store value at that address
    if (address < RAM::SIZE)
        d_mem[address] = value;
}
