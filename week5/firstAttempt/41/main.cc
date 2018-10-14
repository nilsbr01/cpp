#include "main.ih"

int main(int argc, char **argv)
{
    // swap pointers
    char **tmp = argv;
    argv = environ;
    environ = tmp;

    size_t index = 0;
    // print all ntbs in argv
    while (argv[index] != 0)
    {
        cout << argv[index] << '\n';
        ++index;
    }  
    
    index = 0;
    // print all ntbs in environ
    for (size_t index = 0; index < argc; ++index)
        cout << environ[index] << '\n';
}