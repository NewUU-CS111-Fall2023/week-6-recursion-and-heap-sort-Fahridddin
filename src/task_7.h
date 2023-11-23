#include <iostream>

using namespace std;

int reverseNumber(int number) {
    if (number == 0) {
        return 0;
    }

    int reversedNumber = 0;
    int digit = 1;

    while (number > 0) {
        reversedNumber += (number % 10) * digit;
        digit *= 10;
        number /= 10;
    }

    return reversedNumber;
}

int main() {
    int number;
    cin >> number;

    int reversedNumber = reverseNumber(number);
    cout << reversedNumber << endl;

    return 0;
}