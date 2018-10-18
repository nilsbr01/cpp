#include "main.ih"

extern size_t nRequired;

void combis(size_t index, bool *bits)
{
    // call recursive helper function two times, with two options
    combiHelper (index + 1, index, bits, false);
    combiHelper (index + 1, index, bits, true);
}