#include <iostream>
using namespace std;

//Using Do while loop
// int main(){
//     int n;
//     cin>>n;
//     int fact=1;
//     int i=1;
//     do{
//         fact*=i;
//         i++;
//     }while(i<=n);
//     cout<<fact;
//     return 0;
// }

int factorial(int N) {
    int fact = 1;      // factorial result
    int i = 1;         // counter

    do {
        fact *= i;     // multiply current number
        i++;           // move to next number
    } while (i <= N);  // repeat until i > N

    return fact;
}


int main(){
    int N;
    cin >> N;
    cout << factorial(N);
    return 0;
}