#include "wrapper.ih"

void Wrapper::Data::destroyWords()
{
    u_words.~Strings();
}