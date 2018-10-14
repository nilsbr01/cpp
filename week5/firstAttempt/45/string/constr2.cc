#include "string.ih"

String::String(char **environ)
{
    size_t size = 0;
    size_t index = 0;

    while (environ[index] != 0)
        add(environ[index]);
}