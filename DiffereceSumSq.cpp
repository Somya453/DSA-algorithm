#include <iostream>
using namespace std;

int differenceBetween(int n) {
    int sumOfSquares = 0;
    int sumOfnumbers = 0;
   
    for(int i=1; i<=n; i++){
        sumOfnumbers += i;
        sumOfSquares += i*i;
    }

    return sumOfSquares - sumOfnumbers;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Difference between sum of squares and sum of numbers: " << differenceBetween(n) << endl;
    return 0;
}   
    