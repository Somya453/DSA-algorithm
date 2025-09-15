// Pointer Declaration
//&-address of operator
//*-value of operator

#include <iostream>
using namespace std;

int main(){
    // int num=10;
    // cout<<num<<endl;
    // int *ptr=&num;

    // cout<<"Address is: " << ptr << endl;
    // cout<<"Value is: "<< *ptr << endl;


    // int *ptr = 0;
    // int a = 10;
    // *ptr = a;
    // cout << *ptr << endl;



    char ch = 'a';
    char* ptr = &ch;
    ch++;
    // ch++; increments the value of ch by 1, changing it to 'b'
    cout << *ptr << endl;


    return 0;
}
