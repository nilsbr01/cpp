#include "wrapper.ih"

void Wrapper::Data::copyValue(Data const &other)
{
    u_value = other.u_value;
}