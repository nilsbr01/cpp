#include "main.ih"

void quickSort (string *argv, int left, int right)
{
    // copy left and right index
    int index = left; 
    int rIndex = right;

    partition(argv, &index, &rIndex);

    if (left < rIndex) // go into recursion
        quickSort(argv, left, rIndex);

    if (index < right) // go into other recursion
        quickSort(argv, index, right);

}