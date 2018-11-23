#include <iostream>
using namespace std;

main(int argc, char *argv[])
{
    size_t value;                           // declare value to be an integer
    cin >> value;                           // ask for user input and store in value               
    
    // Test if value modulo 2 is zero, if true value is even.
    cout << (value % 2 == 0 ? "even" : "odd") << '\n';
    
    // if value + 1 divided by 2 is the same as original value divided by 2, number is even              
    cout << (value / 2 == (value + 1) / 2 ? "even" : "odd") << '\n';
    
    // shift bits to the right, then to the left. If value doesnt change, the number is even.    
    cout << (value >> 1 << 1 == value ? "even" : "odd") << '\n';        
    
    // check if value still the same after bitwise or with int value 1.
    cout << ((value | 1) == value ? "odd" : "even") << '\n';
    
    // Check if least significant bit is 0, if true value is even.
    cout << ((value & 1) == 0 ? "even" : "odd") << '\n';                
}


