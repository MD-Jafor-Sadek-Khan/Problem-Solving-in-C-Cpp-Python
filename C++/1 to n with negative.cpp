#include<stdio.h>

int main(){

    
    int n;
    int i=0;
    scanf("%d",&n);

    if(n<0){
      
        for( i=1;i>=n;i--){
            printf("%d ",i);

        }
       }
    else{
        for( i=1;i<=n;i++){
            printf("%d ",i);
            
            
        }
    }



}

