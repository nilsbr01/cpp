#include "vstring.ih"

Vstring::Vstring(istream &in)
{
    copy(istream_iterator<string>{ cin },
         istream_iterator<string>{},
         back_inserter(*this));
}