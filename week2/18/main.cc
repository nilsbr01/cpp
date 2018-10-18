#include <iostream>
#include <string>

using namespace std;

int main()
{
    size_t uservariable;        // variable X provided by user
    string input;       // create string for user input
    size_t value;

    // Possible commands in enumerate
    
    enum Commands
    {
        "sto", 
        "add", 
        "sub", 
        "mul", 
        "div", 
        "ret"
    };

    while(1)        // loop until user stops the program
    {
        cout << ">";        // print > on every start of the line
        
        cin >> input >> uservariable;       // user input

        Commands castEnum = (Commands)input

        switch()       // possible scenario's
        {
            case sto:
                cout << "No instruction" << "'" 
                << input << "'" << '\n';
                value = value; 
                break;
            case add:                                                 
                value = uservariable;
                cout << value << '\n'; 
                break;
            case sub:                                                   
                value = value + uservariable;
                cout << value << '\n'; 
                break;
            case mul:
                value = value - uservariable;
                cout << value << '\n'; 
                break;
            case div:
                value = value * uservariable;
                cout << value << '\n'; 
                break;
            case ret:
                if( uservariable == 0)
                {
                    cout << "you are not allowed to divide by zero" << '\n';    
                }
                else
                {
                    value = value / uservariable;
                    cout << value << '\n'; 
                } 
                break;
            default:
                cout << "That is not a valid command\n";
                break;
        }
    }  
}