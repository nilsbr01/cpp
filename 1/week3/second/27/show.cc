#include "main.ih"

extern size_t nRequired;
extern size_t nTotal;

void show(size_t size, bool *bits)
{
    // if enough arguments are shown in this option, print
    if (nTotal >= nRequired) 
    {
        // for loop over array
        for (size_t index = 0; index < size; ++index) 
            // if array shows true at this position
            if (bits[index])            
                cout << index << ' ';   // print option
        cout << '\n';   // print new line after displayed option         
    }
}