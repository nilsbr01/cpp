#include "strings.ih"

std::ostream &Strings::insertInto(std::ostream &out)
{
    for (size_t idx = 0; idx < this->size(); ++idx)
        out << this->at(idx);
    return out;
}