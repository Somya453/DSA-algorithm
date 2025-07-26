#include <iostream>
using namespace std;

int main() {
    int a;
    int i;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> a ;

    while(i<=a){
        cin>>i;
        sum += i;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}