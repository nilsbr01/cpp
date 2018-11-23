#include "main.ih"

extern size_t nRequired;    // use global variable

int main(int argc, char **argv)
{
    cout << "What is the minimum number of items you want to print?\n";
    cin >> nRequired;   // ask for nRequired

    // arguments from terminal minus a.out
    size_t numberArguments = argc - 1;  
    // make bool array, initialize at false
    bool bits[numberArguments] = {false};         

    combis(numberArguments - 1, bits);  // call combis function
}