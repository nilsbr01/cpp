#include <iostream>

using namespace std;

int main() {
    size_t base, number, digit;
    string stringDigit, answer;

    cin >> base >> number;  //extract number and base

    while (number != 0){

        if ((digit = number % base) < 10)   // digit = remainder of number / base
            stringDigit = '0' + digit;      // ascii int value of 0 + digit
        else
            stringDigit = digit - 10 + 'A'; // rewrite becase remainder too big

        answer = stringDigit + answer;      // update answer

        number /= base;                     // update number
    }
    cout << answer;                         // give answer
}