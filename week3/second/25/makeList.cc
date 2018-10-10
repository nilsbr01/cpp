#include "main.ih"

void makeList(Person *array, size_t number)
{
    for (size_t index = 0; index < number; ++index)
    {
        // make new person
        Person newPerson;
        newPerson.place = index + 1;

        // determine place where person needs to be
        size_t place = determinePlace(array, index);

        // insert the person, then decide its color
        insert(newPerson, array, place, index + 1);
        array[place].color = decideColor();
    }
}