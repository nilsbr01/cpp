#include<iostream>
#include<string>
using namespace std;

bool checkHello(string const &s)
{
    if(s == "hello")
    {
        return true;
    }
}

int hoimain()
{
    string s;
    cin >> s;
    cout << checkHello(s) << "\n";
}