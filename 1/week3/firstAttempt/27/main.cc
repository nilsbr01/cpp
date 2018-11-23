#include "main.ih"

extern size_t nRequired; // use global variable

int main(int argc, char **argv)
try
{
    cout << "What is the minimum number of items you want to print?\n";
    cin >> nRequired; // ask for nRequired

    size_t numberArguments = argc - 1;  // arguments from terminal minus a.out
    bool bits[numberArguments];         // make bool array

    combis(numberArguments - 1, bits);  // call combis function
}
catch (...)
{
    return 1;
}
