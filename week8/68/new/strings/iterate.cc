#include "strings.ih"

void Strings::iterate(char **environLike)
{
    for (size_t index = 0; index != d_nIterate; ++index)
        add(environLike[index]);
}