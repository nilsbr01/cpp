#include "main.ih"

void insert(Person person, Person *array, size_t place, size_t size)
{
    Person temp; // temporary storage

    // insert new person and then shift each person one to the right
    for (; place <= size; ++place)
    {
        temp = array[place];
        array[place] = person;
        person = temp;
    }
}