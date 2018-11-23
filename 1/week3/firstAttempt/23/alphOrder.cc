#include "main.ih"

bool alphOrder(string first, string second)
{

    if (first.empty() || second.empty()) {
        return false;
    }
    size_t firstSize = first.size();
    size_t secondSize = second.size();

    size_t bound = (firstSize < secondSize ? firstSize : secondSize);

    for (size_t index = 0; index < bound; ++index)
    {
        if (tolower(first[index]) < tolower(second[index]))
            return true;
        if (tolower(first[index]) > tolower(second[index]))
            return false;
    }
    return false;
}