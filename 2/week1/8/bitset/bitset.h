#ifndef BITSET_H
#define BITSET_H

#include "bitmemory.h"
#include <iostream>
#include <string>

class BitSet
{
    private:
        BitMemory d_bits;

    public:
        BitSet(BitSet const &other); // copy constructor
        BitSet& operator=(BitSet const &other); // copy assignment operator
        BitSet(size_t nBits = 8);
        BitSet(std::string const &bits);
        ~BitSet();

        BitSet operator|(const BitSet &rhs);
        BitSet operator<<(const BitSet &rhs);
        BitSet &operator|=(const BitSet &rhs);
        BitSet &operator&=(const BitSet &rhs);
        BitSet &operator<<=(const BitSet &rhs);
        size_t &operator[](size_t index);
        size_t operator[](size_t index) const;
        std::ostream &operator<<(std::ostream out);
        std::istream &operator>>(std::istream in);

        size_t size();

};

std::string operator "" _bits(char const *bitLiteral);

#endif