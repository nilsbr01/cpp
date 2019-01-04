#include <unordered_map>
#include <iterator>
#include <string>
#include <iostream>
    
using namespace std;

int main(int argc, char **argv)
{
    unordered_multimap<string, string> map = {
        {"1","1"},
        {"2","2"},
        {"3","3"},
        {"3","4"}
    };
    
    size_t nElements = map.size();    // total number of elements
    size_t nDuplicats = 0;              // initialize number of duplicates
    
    for (auto iter = map.begin(); iter != map.end(); ++iter)
    {
        // counts occurence of key
        size_t keyDuplicats = map.count(iter -> first);
        // add duplicats minus one (since this is unique)
        nDuplicats += keyDuplicats - 1;
        // move to next item
        advance(iter,keyDuplicats - 1);
    }    
    
    size_t nUniqueKeys = nElements - nDuplicats;
    cout << "There are " << nUniqueKeys << " in the container\n";
}