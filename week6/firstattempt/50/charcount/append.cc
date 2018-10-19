#include "charcount.ih"

void CharCount::append(char ch, size_t idx) // in fact:insert at d_info.nChar
{
    insert(ch, d_info.nChar);
}