#include "bitset.ih"

std::string operator "" _bits(char const *bitLiteral)
{
    return std::string{ bitLiteral };
}