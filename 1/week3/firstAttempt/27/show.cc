#include "main.ih"

extern size_t nRequired;
extern size_t nTotal;

void show(size_t size, bool *bits)
{
    // if enough arguments are shown in this option, print
    if (nTotal >= nRequired) 
    {
        for (size_t index = 0; index < size; ++index) // for loop over array
            if (bits[index])            // if array shows true at this position
                cout << index << " ";   // print option
        cout << "\n";                   // print new line after displayed option
    }
}