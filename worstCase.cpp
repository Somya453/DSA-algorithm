#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;

    while(a!=b){

        if (a>b){

             a=a-b;
        cout<<"a";

        }
           
        else{
            b=b-a;
        cout<<"b";
        }
            

    }
        
    return 0;
}