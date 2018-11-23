#include "main.ih"

int increasing(void const *string1, void const *string2)
{
    string const * char1 = static_cast< string  const *>(string1);
    string const * char2 = static_cast< string  const *>(string2);

    
    cout << *string1 <<'\n';
    // return strcmp(char1, char2);
    return 0;
}