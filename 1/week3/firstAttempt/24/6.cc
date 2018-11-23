#include<iostream>
#include<string>
using namespace std;

// define string
string s = "hello";

string addHello(string &s)
{
    s += "hello";
    return s;
}

int main()
{
    cout << addHello(s) << "\n";
    cout << s << "\n";
}