#include "main.ih"

void decideColor(Person *person)
{
    // decide color of person with 50 / 50 chance on brown vs blue
    person->color = (rand() % 100 < 50 ? brown : blue);
}