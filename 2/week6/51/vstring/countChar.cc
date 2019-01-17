#include "vstring.ih"

size_t Vstring::countChar(std::string const &str, CharMap &cmap,
                                bool (*accept)(char, CharMap &))
{
    size_t cnt = 0;

    for_each(str.begin(), str.end(), [&](char c)
    {
        if (accept(c, cmap))
            ++cnt;
    });

    return cnt;
}