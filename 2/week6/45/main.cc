#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    set<string> words;

    // read words from cin
    copy(istream_iterator<string>{ cin },
         istream_iterator<string>{},
         inserter(words, words.begin()));

    // output words to cout
    copy(words.begin(), words.end(), ostream_iterator<string>(cout, "\n"));
}