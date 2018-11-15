#include "main.ih"
#include "strings/strings.h"

extern char **environ;
    
int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        cout << "Wrong use of program\n";
        return -1;
    }    

    size_t nIterate = stoul(argv[1]);
    
    bool copy = true;
    if (argc == 3)
        copy = stoul(argv[2]);
    
    Strings strings(nIterate, copy);
    strings.iterate(environ);
}
