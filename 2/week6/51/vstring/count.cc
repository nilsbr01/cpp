#include "vstring.ih"

size_t Vstring::count(CharMap &cmap, bool (*accept)(char, CharMap &))
{
    size_t cnt = 0;

    for_each(begin(), end(), [&](string &str)
    {
        cnt += countChar(str, cmap, accept);
    });

    return cnt;
}