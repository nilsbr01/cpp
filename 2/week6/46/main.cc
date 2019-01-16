#include <vector>
#include <algorithm>
#include <cstdlib>
#include <string>
#include <iostream>
#include <iterator>

using namespace std;

int main(int argc, char *argv[])
{
    size_t numValues = stoi(argv[1]);
    size_t endRandom = stoi(argv[2]) + 1;
    size_t lookup = stoi(argv[3]);

    srand(time(0)); // seed random number generator

    vector<size_t> numbers(numValues);

    // fill numbers vector with random numbers
    generate(numbers.begin(), numbers.end(), [&endRandom]() {
        return rand() % endRandom;
    });

    // print all the random values
    copy(numbers.begin(), numbers.end(), ostream_iterator<size_t>(cout, " "));
    cout << '\n';

    // find the iterator corresponding to the first value greater than lookup
    vector<size_t>::iterator iter;
    iter = upper_bound(numbers.begin(), numbers.end(), lookup);

    if (iter != numbers.end())
        cout << "The first value exceeding " << lookup << " is at index " << iter - numbers.begin() << '\n';
    else
        cout << "No random value exceeds " << lookup << '\n';
}