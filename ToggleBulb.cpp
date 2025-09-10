#include <iostream>
using namespace std;

int ToggleBulb(int n){
    for(int i=1; i*i<=n; i++){
        if(i*i == n){
            return 1; // perfect square
        }
    }
    return 0; // not a perfect square
}


int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(ToggleBulb(n)){
        cout << "Bulb is ON" << endl;
    } else {
        cout << "Bulb is OFF" << endl;
    }
    return 0;
}