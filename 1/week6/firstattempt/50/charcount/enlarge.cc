#include "charcount.ih"

void CharCount::enlarge()
{
     // allocate bigger chunk of memory, but not bigger than #ASCII chars
    const size_t ASCII_TABLE_LENGTH = 255;
    const size_t newCapacity = d_capacity * 2 > ASCII_TABLE_LENGTH ? 
                                        ASCII_TABLE_LENGTH
                                    : 
                                        d_capacity * 2;
    Char *temp = new Char[newCapacity];
    
    transfer(temp, 0, d_capacity); // move d_info.ptr elements to temp
    delete[] d_info.ptr; // free old memory chunk

    d_info.ptr = temp; // point old pointer to new chunk of memory

    d_capacity = newCapacity;
}