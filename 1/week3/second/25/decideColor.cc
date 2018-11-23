#include "main.ih"

size_t decideColor()
{
    // decide color of person with 50 / 50 chance by odd vs even
    return (rand() & 1 ? brown : blue);
}