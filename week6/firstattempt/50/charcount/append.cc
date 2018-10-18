#include "charcount.ih"

void CharCount::append(char ch)     // in fact:insert at d_nfo.nChar
{
    insert(ch, d_info.nChar);
}