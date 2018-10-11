#include "main.ih"

extern char **environ;

int main(int argc, char **argv)
{
    // swap pointers
    char **tmp = argv;
    argv = environ;
    environ = tmp;

    size_t index = 0;
    // print all ntbs in argv
    while(argv[index] != 0)
    {
        cout << argv[index] << '\n';
        ++index;
    }  
    
    index = 0;
    // print all ntbs in environ
    while(environ[index] != 0)
    {
        cout << environ[index] << '\n';
        ++index;
    }  
}