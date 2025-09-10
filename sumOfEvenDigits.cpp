#include <iostream>
using namespace std;

int countEven(int num) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        int n = i, sum = 0;
        // calculate digit sum
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        if (sum % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int num;
    cin >> num; // input from user
    cout << countEven(num) << endl;
    return 0;
}
