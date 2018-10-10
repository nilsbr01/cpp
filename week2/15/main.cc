#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string line;

    // first loop to remove empty lines at beginning
    while (getline(cin, line))      
    {
        // line is not empty if true
        if(line.find_first_not_of(' ') != std::string::npos) 
        {
            cout << line << "\n";
            break;
        }
    }

    size_t count = 0;

    while (getline(cin, line))      // second loop to remove lines at end
    {
        if(line.find_first_not_of(' ') == std::string::npos) // line is empty if true
            ++count;                // count empty lines that are after each other
        
        else                        // if non empty line is discovered
        {
            for ( ; count > 0; --count)    // print the counted empty lines first
                cout << "\n";
            
            cout << line << "\n";               // print non-empty line
        }
    }  
}
