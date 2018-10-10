#include <iostream>
using namespace std;

main(int argc, char *argv[])
{
    int value;                  // declare value to be an integer
    cin >> value;               // ask for user input and store in value 

    // power of 2 tested by bitwise and, then printed
    cout << ((value & (value - 1)) == 0 ? "The value x is an exact power of two" : "the value x is not an exact power of two") << '\n'; 
}