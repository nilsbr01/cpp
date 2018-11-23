#include "strings.ih"

Strings::Strings(int argc, char *argv[])
:
    d_size(argc),
    d_str(static_cast<string *>(
                            operator new(argc * sizeof(string)))),
    d_capacity(argc)
{
    fill(argv);
}