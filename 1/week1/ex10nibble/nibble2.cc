#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    size_t value = stoul(argv[1], 0, 16);   // initialize hexadecimal value
    size_t nibble = stoul(argv[2]);         // nibble to replace
    size_t replacement = stoul(argv[3]) % 16;   // new nibble (= 0 .. 15)

    size_t orgVal = value;              // make copy of value for later
    size_t remain = 0;                  //initialize remain at zero

    value >>= ((nibble+1)*4);           // shift value so that last bits fall of
    value <<= 4;                        // get 4 bits back, initialized at zero
    value |= replacement;               // take bitwise or of replacement and value
    value <<= nibble * 4;               // shift value back to original length

    for(int i = 0; i < (nibble); i++)           // construct the remainder
    {
        remain |= ((orgVal & 15) << (i * 4));   //get last 4 bits and shift to right place
        orgVal >>= 4;                           // shift the original value to next 4 bits
    }

    value |= remain;                    // bitwise or of value and the remainder that has fallen of

    cout << hex << value << '\n';       // show the new value
}
        