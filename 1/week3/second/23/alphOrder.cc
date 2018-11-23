#include "main.ih"

bool alphOrder(string first, string second)
{

    if (first.empty() || second.empty())
        return false;
    
    //set sizes of strings
    size_t firstSize = first.size();
    size_t secondSize = second.size();

    // smallest size of the two strings
    size_t bound = (firstSize < secondSize ?
        firstSize : secondSize);

    // compare strings by characters
    for (size_t index = 0; index < bound; ++index)
    {
        //save chars of both strings to avoid IRE
        size_t charFirst = tolower(first[index]);
        size_t charSecond = tolower(second[index]);

        if (charFirst < charSecond)
            return true;
        if (charFirst > charSecond)
            return false;
    }
    //return according to size of the string
    return (firstSize < secondSize ? true : false);
}