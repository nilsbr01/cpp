#include "main.ih"

Person *makeList(size_t number, Person *firstPerson)
{
    Person *head = firstPerson; // set head of the list

    // make right amount of people and insert into list
    for (size_t index = 0; index < number; ++index) 
    {
        Person *newPerson = new Person; // initialize new person
        newPerson->place = index;       // assign index to person
        Person *copyList = head;// give copylist the start of the list of people
        Person *previous = nullptr;     // set previous person to nothing
        
        // while no person with blue eyes is encountered, 
        // or end of list, go to next person.
        while (copyList != nullptr && copyList->color == brown)
        {
            previous = copyList;
            copyList = copyList->nextPerson;
        }
        
        // set the new persons next to the list item we are at now
        newPerson->nextPerson = copyList; 

        // if at beginning of the list, reset the variable head
        if (copyList == head) 
            head = newPerson;
        else // link the previous part of list to the new person
            previous->nextPerson = newPerson;
        
        decideColor(newPerson); // lastly randomly decide color of persons eyes.
    }

    return head; // return first item of list
}