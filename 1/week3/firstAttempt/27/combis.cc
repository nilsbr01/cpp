#include "main.ih"

extern size_t nRequired;

void combis(size_t index, bool *bits)
{
    for (size_t idx = 0; idx <= index; ++idx) // initialize array at false
        bits[idx] = false;

    // call recursive helper function two times, with two options
    combiHelper (index + 1, index, bits, false);
    combiHelper (index + 1, index, bits, true);
}