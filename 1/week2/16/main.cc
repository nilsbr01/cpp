#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

    ++argv;                 // skip program name
    size_t count = 1;       // set count to 1

    cout << count << ":\n"; // print first empty option
    ++count;                // increment count
    for (int index = 0; index < argc - 1; ++index)          // go over all arguments
    {
        string out = argv[index];                           // get next argument
        cout << count << ": " << out << "\n";               // print single argument
        ++count;                                            // increment count 

        // for loop that loops over previous arguments
        for (int index2 = index - 1; index2 >= 0; --index2) 
        {
            string extraArg = argv[index2];             // save argument as string
            out =  extraArg + " " + out;                // combine strings
            cout << count << ": " << out << "\n";       // print strings
            ++count;                                    // increment count
        }
    }
}