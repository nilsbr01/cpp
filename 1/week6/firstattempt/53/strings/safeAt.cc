#include "strings.ih"

namespace {
    string empt;
}

std::string &Strings::safeAt(size_t idx) const
{
    if (idx >= d_size)
    {
        empt.clear();
        return empt;
    }

    return *d_str[idx];
}