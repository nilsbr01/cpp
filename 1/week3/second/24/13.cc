#include<iostream>
using namespace std;


int Function(int const &x, int y)
{
    if(y == 5)
        return x;
}

main()
{
    int y = 5;
    int x = 1000000;
    cout << Function(x, y) << "\n";
}