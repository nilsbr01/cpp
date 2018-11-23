#include "main.ih"

int main(int argc, char **argv)
{
    size_t nStrings = 5;
    
    string **stringArray = new string*[nStrings];
    stringArray[0] = new string("aa");
    stringArray[1] = new string("ab");
    stringArray[2] = new string("ac");
    stringArray[3] = new string("ae");
    stringArray[4] = new string("ad");


    std::cout << "deze tekst staat niet op volgorde \n";
    for (size_t i = 0; i < nStrings; ++i)
    {
        std::cout << *stringArray[i] << '\n';
    }

    qsort
    (
        stringArray, nStrings, sizeof(string*),
        reinterpret_cast<int(*)(void const *, void const *)>(increasing)
    );

    std::cout << "gesorteerd met increasing \n";
    for (size_t i = 0; i < nStrings; ++i)
    {
        std::cout << *stringArray[i] << '\n';
    }

    qsort(stringArray, nStrings, sizeof(string*), nocasedec);

    std::cout << "gesorteerd met nocasedec \n";
    for (size_t i = 0; i < nStrings; ++i)
    {
        std::cout << *stringArray[i] << '\n';
    }
}
