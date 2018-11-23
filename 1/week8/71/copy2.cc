#include "wrapper.ih"

void Wrapper::Data::copy(Data &&tmp, Tag tag)
{
    if (tag == STRINGS)
        new (this) Strings(std::move(tmp.u_words));
    else if (tag == STRING)
        new (this) string(std::move(tmp.u_word));
    else
        u_value = tmp.u_value;
}