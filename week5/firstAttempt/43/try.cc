#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::cout << argv[0];

    ++(*((*argv) + 2));

    std::cout <<  argv[0];
}
