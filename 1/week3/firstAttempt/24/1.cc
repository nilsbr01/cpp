#include<iostream>
using namespace std;

int multiplyBy3(int n)
{
    n = n * 3;
    return n;
}

int main()
{
    int n = 5;
    cout << multiplyBy3(n) << "\n";     // function output
}