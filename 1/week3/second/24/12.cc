#include<iostream>
#include<string>
using namespace std;

string checkHello(string const &s)
{
    if(s == "hello")
    {
        string reactie = "U heeft net hallo geschreven!";
        return reactie;
    }
}

int main()
{
    string s;
    cin >> s;
    cout << checkHello(s) << "\n";
    cout << s << "\n";
}