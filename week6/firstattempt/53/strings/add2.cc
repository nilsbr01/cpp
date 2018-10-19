#include "strings.ih"

void Strings::add(string const &next)
{
    if (d_size == d_capacity)
    {
        string **tmp = enlarge();            // make room for the next string,
        destroy();                          // return old memory
        d_str = tmp;                        // update d_str and d_size
    }

    cout << "hierook\n";
    string *newString = &string(next);
    d_str[d_size] = newString;         // store next
    ++d_size;
}