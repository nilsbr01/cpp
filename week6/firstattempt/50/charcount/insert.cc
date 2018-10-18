#include "charcount.ih"

void CharCount::insert(char ch, size_t idx)
{
    Char *ptr = new Char[d_info.nChar + 1];

    transfer(ptr, 0, idx);          // transfer d_info.ptr[0..idx] to ptr[0]

    ptr[idx] = Char{ ch, 1 };       // insert the new element

                                    // transfer the rest
    transfer(ptr + idx + 1, idx, d_info.nChar);

    delete[] d_info.ptr;            // delete garbage memory

    ++d_info.nChar;                 // added new element
    d_info.ptr = ptr;               // point at the new Char array
}