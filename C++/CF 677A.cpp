
#include <stdio.h>

int main() {
    int x,i,num,h,res;
    res=0;
    scanf("%d%d",&num,&h);
    for(i=0;i<num;i++){
        scanf("%d",&x);
        if(x<=h){
            res=res+1;
        
        }
        else{
            res=res+2;
        }
    }
 
   

 printf("%d",res);
    return 0;
}
