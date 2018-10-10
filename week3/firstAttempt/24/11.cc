#include<iostream>
using namespace std;


int incrementFive(int x)
{
    int n = x * 5;
    return n;
}

int main()
{
    int x = 5;
    cout << incrementFive(x) << "\n";
}