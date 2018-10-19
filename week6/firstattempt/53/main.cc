#include "main.ih"
#include "strings/strings.h"

extern char **environ;
    
int main()
{
    Strings hoi(environ);
    hoi.add("hallo");
    hoi.add("whatgebeurter?");

    string **data = hoi.data();
    size_t size = hoi.size();

    for (size_t index = 0; index < size; ++index)
        cout << *data[index] << '\n';

    // for (size_t iter = 0; iter != 1000; ++iter)
    // {
    //     Strings env(environ);

    //     for (size_t rept = 0; rept != 100; ++rept)
    //     {
    //         for (char **ptr = environ; *ptr; ++ptr)
    //             env.add(*ptr);
    //     }
    // }
}