#include <iostream>
using namespace std;

int main(){

//Example 1:
int a = 7;
int *c = &a;
c = c + 3;
cout<< c << endl;
cout << *c << endl;


return 0;
}