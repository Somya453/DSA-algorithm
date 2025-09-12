#include <iostream>
using namespace std;

long long calculateDifference(int A, int B) {
    long long sum1 = 0;
    long long sum2 = 0;

    for (int i = 1; i <= A; i++) {
        sum1 += sum1 + i;
       
    }

    for (int i = 1; i <= B; i++) {
        sum2 += sum2 + i;
    }
    // sum2 *= sum2; // Square the sum

    return sum2 - sum1; // Return the difference
}

int main() {
    int A, B;
    cout << "Enter two integers A and B: ";
    cin >> A >> B;

    long long result = calculateDifference(A, B);
    cout << "The difference is: " << result << endl;

    return 0;
}
   