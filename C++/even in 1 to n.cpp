// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,i;
    i=1;
    scanf("%d",&n);
    
    if(i<n){
       for(i=1;i<n;i++){
           if(i%2==0){
               printf("%d ",i);
           }
        
       } 
    }

    return 0;
}

