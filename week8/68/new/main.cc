#include "main.ih"
#include "strings/strings.h"

extern char **environ;
    
int main()
{
    Strings a(50);
    Strings b(50);

    a.iterate(environ);
    b.iterate(environ);
}