#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
   
   // Base Condition.
   if(i<1) return;
   
   // Function call to print (n-1) integers.
   printf("%d ",i);
   func(i+1,n);
   

}

int main(){
  
  // Here, let’s take the value of n to be 4.
  int n = 4;
  func(n,n);
  return 0;

}