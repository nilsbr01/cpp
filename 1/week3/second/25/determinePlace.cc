#include "main.ih"

size_t determinePlace(Person *array, size_t size)
{
    // look for first blue color, return that index
    for(size_t index2 = 0; index2 < size; ++index2)
        if (array[index2].color == blue)
            return index2;
    
    // return size if no blue color was found
    return size;
}