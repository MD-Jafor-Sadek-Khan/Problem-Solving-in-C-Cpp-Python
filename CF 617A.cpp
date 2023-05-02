#include <stdio.h>

int main() {
    int a,res;
    scanf("%d",&a);
   if(a%5==0){
       res=a/5;
       
   } 
   else{
     res=(a/5)+1;
   
}
 printf("%d",res);
    return 0;
}
