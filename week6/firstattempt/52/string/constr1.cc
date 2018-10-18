#include "string.ih"

String::String(int argc, char **argv)
{
    d_size = 0; // set size of string array to zero

    // add all ntbs with member add
    for (size_t index = 0; index < argc; ++index)
        add(argv[index]);
}