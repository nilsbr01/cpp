#include "main.ih"
#include "strings/strings.h"

extern char **environ;
    
int main()
{
    for (size_t iter = 0; iter != 2; ++iter)
    {
        Strings env(environ);

        for (size_t rept = 0; rept != 2; ++rept)
        {
            for (char **ptr = environ; *ptr; ++ptr)
                env.add(*ptr);
        }
    }
}