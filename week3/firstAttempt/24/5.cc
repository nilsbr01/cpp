#include<iostream>
using namespace std;

// define global variable
int x = 5;

int incrementFive(int &x)
{
    x += 5;
    return x;
}

main()
{
    cout << incrementFive(x) << "\n";
    cout << x << "\n";
}