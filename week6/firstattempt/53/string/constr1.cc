#include "strings.ih"

Strings::Strings(int argc, char *argv[])
:
    d_size(argc),
    d_str(new string*[argc]),
    d_capacity(argc)
{
    fill(argv);
}