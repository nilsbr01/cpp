#include "sort.ih"

void Sort::sort(string **data, size_t size)
{
    qsort(data, size, sizeof(string *), 
            reinterpret_cast<int (*)(void const *, void const *)>(d_compare));
}
