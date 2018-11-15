#include "strings.ih"

void Strings::iterate(char **environLike)
{
    for (size_t index = 0; index != d_nIterate; ++index)
    {
        size_t index2 = 0;
        while (environLike[index2] != 0)
            add(environLike[index2++]);
    }

    if (d_size >= 6)
    {
        cout << d_str[0] << '\n';
        cout << d_str[1] << '\n';
        cout << d_str[2] << '\n';
        cout << d_str[d_size - 3] << '\n';
        cout << d_str[d_size - 2] << '\n';
        cout << d_str[d_size - 1] << '\n';
    }
    else
    {
        cout << "Couldn't print, not enough strings added\n";
    }
}