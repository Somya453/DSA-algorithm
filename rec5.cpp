#include<bits/stdc++.h>
using namespace std;

//Print numbers 1 to n using recursion

void func(int i, int n){
   
   // Base Condition.
   if(i<1) return;
   
   // Function call to print (n-1) integers.
//    printf("%d ",i);
   func(i-1,n);

    printf("%d ",i);
    
}

int main(){

  // Here, let’s take the value of n to be 5.
  int n = 5;
  func(n,n);
  
  return 0;

}