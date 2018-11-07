#include "main.ih"

int main(int argc, char *argv[])
{
    Strings s1;
    s1.add("hoi");
    s1.add("what");

    Strings s2;
    s2.add("nope");
    s2.add("nee");
    s2.add("nananana"); 

    s1 = s2;

    cout << s1.at(0) << '\n';
    cout << s1.at(1) << '\n';
    cout << s1.at(2) << '\n';
}
