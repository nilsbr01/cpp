#include "showexcepts.h"
#include <iostream>

void print()
{
    std::cout << "print!" << '\n';
}

int main()
{
    ShowExcepts se(5, print);
    se.asNoexcept();
}