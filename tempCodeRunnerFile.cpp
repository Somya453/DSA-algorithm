#include <bits/stdc++.h>
using namespace std;


void f(int n, int i){
    if(i<1) return;
    
    f(n - 1, i + 1);
    cout << i << " ";
}





int main(){

    int n = 5;
    f(n, n);
    return 0;


    
}