#include <iostream>

using namespace std;

int main()
{      
    string input, firstword, lastword;

    getline (cin, input);                     // store user input    
    size_t space = input.find(" ");           // find end of first word      
    firstword = input.substr(0, space);       // store first word
    size_t lastSpace = input.find_last_of(" ");// find begin of last word
    lastword = input.substr(lastSpace + 1);   // store last word
    
    // replace first word with last word
    input.replace(0, firstword.length(), lastword);  

    cout << input << '\n';                                  // print output
}