#include<iostream>
using namespace std;

// define two global variables
int n = 5;
int y = 6;

int multiply(int n, int y)
{
    n = n + 10;
    return n * y;
}
int main()
{
    cout << multiply(n, y) << "\n";     // function output
    cout << n << "\n";      // n is unchanged
}
