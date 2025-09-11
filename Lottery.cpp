#include <iostream>
using namespace std;

bool distributingMoney(int x, int y, int z, int K) {
    int total = x + y + z + K;

    // Check if total can be divided equally among 3 sisters
    if (total % 3 != 0) {
        return false; // Not divisible, can't distribute equally
    }

    int T = total / 3;

    // Check if each sister can reach T without losing money
    if (T >= x && T >= y && T >= z) {
        return true;
    } else {
        return false;
    }
}


int main() {
    int x, y, z, K;
    cout << "Enter the amounts of money each sister has (x, y, z) and the amount K to be distributed: ";
    cin >> x >> y >> z >> K;

    if (distributingMoney(x, y, z, K)) {
        cout << "YES, the money can be distributed equally among the three sisters." << endl;
    } else {
        cout << "NO, the money cannot be distributed equally among the three sisters." << endl;
    }

    return 0;
}