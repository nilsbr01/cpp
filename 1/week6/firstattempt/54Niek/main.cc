#include "main.ih"
#include "sort/sort.h"

int main(int argc, char **argv)
{
    size_t nStrings = 5;
    
    string **stringArray = new string *[nStrings];
    stringArray[0] = new string("ad");
    stringArray[1] = new string("ae");
    stringArray[2] = new string("ac");
    stringArray[3] = new string("aa");
    stringArray[4] = new string("ab");


    std::cout << "deze tekst staat niet op volgorde \n";
    for (size_t i = 0; i < nStrings; ++i)
        std::cout << *stringArray[i] << '\n';

    Sort x(&increasing); 
    x.sort(stringArray, nStrings);

    std::cout << "deze wel \n";
    for (size_t i = 0; i < nStrings; ++i)
        std::cout << *stringArray[i] << '\n';

}
