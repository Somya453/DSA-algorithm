// Pointer Declaration
//&-address of operator
//*-value of operator

#include <iostream>
using namespace std;

int main(){
    int num=10;
    cout<<num<<endl;
    int *ptr=&num;

    cout<<"Address is: " << ptr << endl;
    cout<<"Value is: "<< *ptr << endl;


    return 0;
}
