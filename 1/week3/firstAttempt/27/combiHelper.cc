#include "main.ih"

extern size_t nRequired;
extern size_t nTotal;

void combiHelper(size_t size, size_t index, bool *bits, bool value)
{
    // update nTotal if necessary
    if (!bits[index] && value)
        ++nTotal;
    else if (bits[index] && !value)
        --nTotal;
    
    // update array
    bits[index] = value;

    //if at beginning of array, print options
    if (index == 0)
        show(size, bits);
    else // otherwise go deeper into recursion
    {
        --index;
        combiHelper (size, index, bits, false);
        combiHelper (size, index, bits, true);
    }
        
}