
#include <iostream>
#include <string>

using namespace std;

int main()
{
    size_t value;       // Variable on which the user can do operations
    size_t uservariable;// variable X provided by user
    string input;       // create string for user input

    // store commands in enum. Numbers are the result of the stoul function 
    // on the string of the command
    enum commands {
        sto = 37356,
        add = 13441,
        sub = 37379,
        mul = 29613,
        div = 17527,
        ret = 35525
    };
    

    while(true)        // loop until user stops the program
    {
        cout << ">";        // print > on every start of the line
    
        cin >> input;       // user input
        
        if (input == "ret") // break here to save space with next input
            break;

        size_t newVar = stoul(input, 0, 36); //cast to size_t
        cin >> uservariable;                // ask next var from user

        switch(newVar)       // possible scenario's
        {
            case sto:
                value = uservariable; 
                break;
            case add:                                              
                value += uservariable;
                break;
            case sub:                                                   
                value -= uservariable; 
                break;
            case mul:
                value *= uservariable;
                break;
            case div:
                if( uservariable == 0)
                    cout << "you are not allowed to divide by zero" << '\n';    
                else
                    value = value / uservariable;
                break;
            default:
                cout << "No instruction \'" << input << "\'\n";;
                break;
        }
        cout << value << '\n'; 
    }  
}