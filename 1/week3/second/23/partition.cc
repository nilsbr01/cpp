#include "main.ih"

void partition(string *arr, int *index, int *rIndex)
{

    string tmp; // used as intermediate storage variable
    string pivot = arr[*index]; // make middle

    while (*index <= *rIndex) 
        {
        // alphOrder is true when first argument is before second
        while ( alphOrder(arr[*index], pivot))   // argv[index] < pivot
            ++*index;
        while (alphOrder(pivot, arr[*rIndex]))  // argv[rIndex] > pivot
            --*rIndex;
        if (*index <= *rIndex) // swap the two strings at indexes
        {
            tmp = arr[*index];
            arr[*index] = arr[*rIndex];
            arr[*rIndex] = tmp;
            ++*index;
            --*rIndex;
        }
    }
}

