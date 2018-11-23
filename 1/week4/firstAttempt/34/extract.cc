#include "main.ih"

void extract(Person person[], size_t size)
{
    for (size_t count = 0; count < size; count++)
    {
        cout << "? ";
        
        person[count].extract(cin); 
    }
}