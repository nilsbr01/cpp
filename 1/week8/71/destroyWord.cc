#include "wrapper.ih"

void Wrapper::Data::destroyWord()
{
    u_word.~string();
}