#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int sum=0;
    int temp=n;

//Armstrong Number
while (temp>0) {
    int a=temp%10;
    sum+=a*a*a;
    temp=temp/10;

}


if (sum==n) {
    cout<<n<<" is an Armstrong number.";
} else {
    cout<<n<<" is not an Armstrong number.";
}

    return 0;
}   




