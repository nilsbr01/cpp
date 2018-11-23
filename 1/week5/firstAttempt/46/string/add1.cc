#include "string.ih"

void String::add(char *str)
{
    // make new array
    string *newStrings = new string[d_size + 1];

    // copy items
    for (size_t index = 0; index < d_size; ++index)
        newStrings[index] = d_str[index];
    
    // insert new item
    newStrings[d_size] = *str;

    //delete old array
    delete[] d_str;

    // set pointer to new array
    d_str = newStrings;
}