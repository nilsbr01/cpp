#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    ++argv;
    // define numberArgs, also to make it size_t instead of int
    size_t numberArgs = argc - 1;               
    size_t upperbound = 1;

    // compute upperbound = pow(2, argc), but without math library 
    for (size_t index = 0; index < numberArgs; ++index)        
        upperbound *= 2;

    for (size_t index = 0; index < upperbound; ++index) // go over all options
    {
        string total = "";                              // initialize output string
        size_t compare = 1;                                // initialize comparisson int
        for (size_t index2 = 0; index2 < numberArgs; ++index2)   // go over all commandline opts
        {
            if (index & compare)                        // bitwise comparison
            {
                total += argv[index2];                  // add argument to outputstring
                total += " ";                           // add space
            }

            compare *= 2;                               // comparisson times 2 for next argument
        }
        
        cout << index + 1 << ": " << total << "\n";     // give output
    }
}