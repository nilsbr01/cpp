#include "main.ih"

void quickSort (string *argv, int left, int right)
{
    // copy left and right index
    int index = left; 
    int rIndex = right;
    string tmp; // used as intermediate storage variable
    string pivot = argv[(left + right) / 2]; // make middle

    while (index <= rIndex) 
        {
        //alphOrder is true when first argument is before second
        while ( alphOrder(argv[index], pivot))   // argv[index] < pivot
            ++index;
        while (alphOrder(pivot, argv[rIndex]))  // argv[rIndex] > pivot
            --rIndex;
        if (index <= rIndex) // swap the two strings at indexes
        {
            tmp = argv[index];
            argv[index] = argv[rIndex];
            argv[rIndex] = tmp;
            ++index;
            --rIndex;
        }
    }

    if (left < rIndex) // go into recursion
        quickSort(argv, left, rIndex);

    if (index < right) // go into other recursion
        quickSort(argv, index, right);

}