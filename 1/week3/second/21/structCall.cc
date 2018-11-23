#include "main.ih"

void structCall(size_t argc, char **argv)
{
    // localy defined struct ReturnValues
    ReturnValues structCall;
    
    structCall = combine(argc, argv);
    
    if (structCall.ok)
    {
        cout << "The argument number is " << structCall.nr << '\n';
        cout << "The requested argument is " << structCall.value << '\n';
    }
    else
        cout << "The requested argument does not exist" << '\n';
}