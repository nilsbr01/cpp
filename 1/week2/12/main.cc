#include <iostream>

using namespace std;

int main()
{
    string letters;     // define a string called letters

    // test for the first 255 ASCI Characters
    for(size_t character = 0; character <= 255; ++character)    
    {
        if (isalpha(character))
        {
            // if ASCI character is letter add it to letters
            letters += char(character);     
        }
    }

    cout << letters << '\n';        // print string
}
