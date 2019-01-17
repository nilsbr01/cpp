#include "vstring/vstring.h"
#include <iostream>
#include <algorithm>

using namespace std;

bool vowels(char c, Vstring::CharMap &cmap)
{
    if (string("aeiuoAEIOU").find(c) != string::npos)
    {
        ++cmap[c];
        return true;
    }
    return false;
}

int main()
{
    Vstring vstring(cin);
    Vstring::CharMap vmap;

    cout << "Vowels: " << vstring.count(vmap, vowels) << '\n';

    // Display all elements of vmap
    for_each(vmap.begin(), vmap.end(), [](std::pair<char, size_t> pair)
    {
        cout << pair.first << ": " << pair.second << '\n';
    });
}