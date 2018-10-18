#include "main.ih"

void boundCall(size_t argc, char **argv)
{   
    auto [ok, nr, value] = combine(argc, argv);
    
    if (ok)
    {
        cout << "The argument number is " << nr << '\n';
        cout << "The requested argument is " << value << '\n';
    }
    else 
        cout << "The requested argument does not exist" << '\n';
        
}