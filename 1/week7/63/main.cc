#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    double value = 12.04;

    cout << setw(15) << value << '\n'
         << setw(15) << left << value << '\n'
         << setw(15) << right << value << '\n'
         << setw(15) << setprecision(3) << showpoint << value << '\n'
         << setw(15) << fixed << setprecision(4) << value << '\n'
         << setw(15) << resetiosflags(ios::fixed) << value << '\n';
}