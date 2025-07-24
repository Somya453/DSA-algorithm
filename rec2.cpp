#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
   
   // Base Condition.
   if(i>n) return;
   printf("%d ",i);

   // Function call to print (n-1) integers.
   func(i+1,n);
//    printf("%d",i);

}

int main(){

  // Here, let’s take the value of n to be 5.
  int n = 5;
  func(1,n);
  return 0;

}