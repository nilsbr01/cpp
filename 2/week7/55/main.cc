#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include <iomanip>

using namespace std;

void eratosthenes(size_t numPrimes)
{
    vector<size_t> primes{2};
    size_t next = 3;

    while (primes.size() < numPrimes)
    {
        bool isPrime = true;
        for (auto prime : primes)
            if (next % prime == 0)
            {
                isPrime = false;
                break;
            }

        if (isPrime)
            primes.push_back(next);
        ++next;
    }

    cout << '\n';
    for (auto prime : primes)
        cout << prime << ' ';
    cout << '\n';
}

void printDots()
{
    while (true)
    {
        cerr << '.';
        this_thread::sleep_for(1s);
    }
}

int main(int argc, char *argv[])
{
    vector<size_t> primes;
    size_t numPrimes = stoi(argv[1]);
    chrono::time_point<chrono::system_clock>
                            start{chrono::system_clock::now()};
    time_t startTime = chrono::system_clock::to_time_t(start);

    thread eratos(eratosthenes, numPrimes); // start calculating primes
    thread dots(printDots); // start printing dots
    dots.detach(); // printing dots ends when main ends
    eratos.join(); // wait for primes to be calculated

    chrono::time_point<chrono::system_clock>
                            end{chrono::system_clock::now()};
    time_t endTime = chrono::system_clock::to_time_t(end);


    auto duration = end - start;
    cout << put_time(gmtime(&startTime), "%c\n");
    cout << "Computation of " << numPrimes << " primes took " 
         << std::chrono::duration_cast<std::chrono::seconds>(end - start).count() << " seconds\n";
    cout << put_time(gmtime(&endTime), "%c\n");
}