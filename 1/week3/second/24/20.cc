#include<iostream>
#include<string>
using namespace std;

string addHello(string &&s)
{
    s += ", hoe gaat het?";
    return move(s);
}

int main()
{
    string&& s = "hello";
    cout << addHello(move(s)) << "\n";
}