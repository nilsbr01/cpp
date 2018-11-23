#include "main.ih"

size_t sizeArray(char **array)
{
    size_t size = 0; // initialize size at 0
    while (array[size] != 0) // determine size
        ++size;

    return size;
}