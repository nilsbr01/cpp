#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    set<string> s;
    string word;

    while (cin >> word)
        s.insert(word);

    for (auto iter = s.begin(); iter != s.end(); ++iter)
    	cout << *iter << '\n';
}