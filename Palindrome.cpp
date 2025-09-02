#include <iostream>
using namespace std;

int main(){

    int n,

    temp=n,
    reverse=0;

    cin>>n;

    while(n>0){
        reverse=reverse*10+n%10;
        n=n/10;
    }

    if(reverse==n){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }

    return 0;
}