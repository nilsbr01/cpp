#include "wrapper.ih"

void Wrapper::Data::copy(Data const &other, Tag tag)
{
    if (tag == STRINGS)
        new (this) Strings(other.u_words);
    else if (tag == STRING)
        new (this) string(other.u_word);
    else
        u_value = other.u_value;
}