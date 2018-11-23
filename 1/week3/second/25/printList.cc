#include "main.ih"

void printArray(Person *array, size_t size)
{
    for (size_t index = 0; index < size; ++index)
        cout << (array[index].color == brown ? "Brown" : "Blue") << 
            " (" << array[index].place << ")" << '\n';
}