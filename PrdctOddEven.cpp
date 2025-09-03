#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int finalResult;
    int Oddsum=0;
    int evenSum=0;

    while(n>0){
        if(n%2==0){
            evenSum+=n;
            n=n/10;
        }else{
            Oddsum+=n;
            n=n/10;
        }
    
        
    }

    finalResult=Oddsum*evenSum;
    cout<<finalResult;
    
    return 0;
}
