#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    size_t value = stoul(argv[1], 0, 16);   // initialize hexadecimal value
    size_t nibble = stoul(argv[2]);         // nibble to replace
    size_t replacement = stoul(argv[3]) % 16;   // new nibble (= 0 .. 15)

    size_t value_shifted;
    size_t value_masked;
    size_t value_reshifted;
    size_t value_right;

    value_shifted = (value >> (nibble * 4 + 4)) << 4; 
    value_masked = value_shifted | replacement; 
    value_reshifted = value_masked << (nibble * 4);
    value_right = value << 12;
    value = value_reshifted | value_right;

    // insert your code here
    cout << hex << value_shifted << '\n';
    cout << hex << value_masked << '\n';
    cout << hex << value_reshifted << '\n';
    cout << hex << value_right << '\n';
    cout << hex << value << '\n';       // show the new value
}
        