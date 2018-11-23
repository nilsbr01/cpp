#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string cmdArg = "";             // initialize command line argument
    if (argc > 1)                   // if there is more than 1 command line argument
    {
        cmdArg = argv[1];           // set cmdArg to second command line argument
    }
    
    size_t count = 0;
    string line;

    if (cmdArg == "OK")             // cmdArg is equal to the string OK, use right way
    {
        while (getline(cin, line))  // read line from cin until crtl+d
            ++count;                // increment count
    }
    else                            // cmdArg not equal to string OK, use wrong way
    {
        while (!cin.eof())          // while not end of file
        {
            getline(cin, line);     // get next line
            ++count;                // increment count
        }
    }

    cout << count;                  // print count
}