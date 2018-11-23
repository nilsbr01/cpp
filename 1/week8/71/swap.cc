#include "wrapper.ih"

void Wrapper::Data::swap(Data &other, Tag otherTag, Tag tag)
{
    Data tmp(*this, tag);    	// save lhs

    destroy(tag);             	// destroy lhs
    copy(other, otherTag);      // assign rhs

    other.destroy(otherTag);    // destroy rhs
    other.copy(tmp, tag);       // save lhs via tmp
}