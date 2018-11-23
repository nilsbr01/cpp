#include "wrapper.ih"

Wrapper::~Wrapper()
{
    d_union.destroy(d_tag);
}