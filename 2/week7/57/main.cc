#include <string>
#include <chrono>
#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string arg(argv[1]);
    char unit = arg.back(); // s/m/h
    arg.pop_back();
    size_t value = stoi(arg);

    chrono::time_point<chrono::system_clock>
                            start{chrono::system_clock::now()};
    time_t startTime = chrono::system_clock::to_time_t(start);

    cout << put_time(localtime(&startTime), "%c\n");
    cout << put_time(gmtime(&startTime), "%c\n");

    switch (unit)
    {
        case 'h':
            startTime = chrono::system_clock::to_time_t(start - chrono::hours(value));
            break;
        case 'm':
            startTime = chrono::system_clock::to_time_t(start - chrono::minutes(value));
            break;
        case 's':
            startTime = chrono::system_clock::to_time_t(start - chrono::seconds(value));
            break;
    }

    cout << put_time(localtime(&startTime), "%c\n");
}