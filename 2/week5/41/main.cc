#include <unordered_map>
#include <iterator>
#include <string>
#include <iostream>
    
using namespace std;

int main()
{
    unordered_multimap<string, string> map = {
        {"1","1"},
        {"2","2"},
        {"3","3"},
        {"3","4"}
    };
    
    size_t nUniqueKeys = 0;

    for (auto iter = map.begin(); iter != map.end(); iter = map.equal_range(iter->first).second)
        ++nUniqueKeys;

    cout << "There are " << nUniqueKeys << " in the container\n";
}