#include "main.ih"

int nocasedec(void const *string1, void const *string2)
{
    
    const char* char1 = *static_cast<const char* const*>(string1);
    const char* char2 = *static_cast<const char* const*>(string2);

    // cout << "chars: " << *char1 << *char2 << '\n';

    // for(size_t i = 0; i < 2; ++i)
    // {
    //     if (char1[i] < char2[i])
    //     {
    //         return 1;
    //     }
        

    //     if (char2[i] > char1[i])
    //     {
    //         return -1;
    //     }
    // }
        return 0;
}