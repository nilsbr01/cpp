#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    map<string, size_t> words;
    string word;

    while (cin >> word)
    	++words[word];

    for (const auto &entry : words)
    	cout << entry.first << ' ' << entry.second << '\n';
}