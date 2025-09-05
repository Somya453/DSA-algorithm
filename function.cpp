#include<iostream>
using namespace std;

int findDivisor(int l, int r, int k){
    int count=0;
    for(int i=l; i<=r; i++){
        if(i%k==0){
            count++;
        }
    }
    return count;
}

int main(){
    int l, k ,r;
    cin>>l>>r>>k;
    cout<<findDivisor(l, r, k);
    return 0;
}