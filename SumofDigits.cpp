#include <iostream>
using namespace std;

int findSumDigits(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    return sum;
}

int main() {
    int count;
    cout << "Enter how many numbers: ";
    cin >> count;

    long long total = 0; // store sum of digit sums

    for (int i = 0; i < count; i++) {
        int num;
        cin >> num;                 // read each number
        total += findSumDigits(num);
    }

    cout << "Sum of digits of all numbers: " << total << endl;
    return 0;
}
