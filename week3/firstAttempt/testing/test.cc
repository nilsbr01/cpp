#include <iostream>

using namespace std;

int main(int argc, char **argv)
try
{
    
    for ( size_t i = 0; i < 20; ++i)
        {
            srand(5);
            cout << random() % 100 << "\n";
        }

}
catch (...)
{
    return 1;
}
