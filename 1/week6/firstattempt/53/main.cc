#include "main.ih"
#include "strings/strings.h"

extern char **environ;
    
int main()
{
    for (size_t iter = 0; iter != 1000; ++iter)
    {
        Strings env(environ);

        for (size_t rept = 0; rept != 100; ++rept)
        {
            for (char **ptr = environ; *ptr; ++ptr)
                env.add(*ptr); 
        }

        // string **data = env.data();

        // for (size_t index = 0; index < env.size(); ++index)
        //     cout << *(data[index]) << '\n';
    }
}