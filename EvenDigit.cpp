#include <iostream>
using namespace std;

class Solution {
public:
    int countEven(int num) {
        int count = 0;
        for (int i = 1; i <= num; i++) {
            int n = i, sum = 0;
            // calculate digit sum
            while (n > 0) {
                sum += n % 10;
                n /= 10;
            }
            // check if digit sum is even
            if (sum % 2 == 0) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution sol;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int result = sol.countEven(num);
    cout << "Count of numbers with even digit sum from 1 to " << num << " is: " << result << endl;
    return 0;
}
