#include<iostream>
#include<string>
using namespace std;

string checkHello(string const &s, string input)
{
    if(input == "hello")
    {
        return s;
    }
}

int main()
{
    string input;
    string s = "hallo dit is een hele lange zin";
    cin >> input;
    checkHello(s,input);
}