#include "main.ih"

bool combine(size_t argc, char **argv)
{
    if(argc == 1)       // test whether arguements are provided
    {
        cout << "No arguements provided\n";
        return false;
    }

    return true;
}
