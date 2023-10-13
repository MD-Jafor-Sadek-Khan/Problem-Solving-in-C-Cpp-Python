// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
#include<iostream>
#include<climits>
using namespace std;


int main() {
  unsigned long long int n,i,k,l;
  k=0; l=0;
  i=1;
  scanf("%lld",&n);
  if(i<=n){
      
      for(i=1;i<=floor(sqrt(n));i++)
      {
          if(n%i==0){
              l=n/i;
          printf("%lld=%lld ",i,l);
      }
      }
      
      
      
      
      
      
      
      
  }
    return 0;
}

