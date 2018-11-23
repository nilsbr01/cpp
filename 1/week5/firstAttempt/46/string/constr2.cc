#include "string.ih"

String::String(char **environ)
{
    d_size = 0; // set size of string array to zero

    size_t index = 0;

    // add all ntbs with member add
    while (environ[index] != 0)
        add(environ[index]);
}