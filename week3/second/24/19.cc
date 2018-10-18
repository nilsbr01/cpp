#include<iostream>
using namespace std;

int incrementFive(int &&x)
{
    x = x * 5;
    return move(x);
}

int main()
{
    int&& x = 5;
    cout << incrementFive(move(x)) << "\n";
}