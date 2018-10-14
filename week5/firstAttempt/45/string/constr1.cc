#include "string.ih"

String::String(int argc, char **argv)
{
    size_t size = 0;

    for (size_t index = 0; index < argc; ++index)
        add(argv[index]);
}