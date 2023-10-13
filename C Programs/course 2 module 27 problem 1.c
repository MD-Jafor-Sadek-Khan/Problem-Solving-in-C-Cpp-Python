#include<stdio.h>

int main(){

    int n,sum=0;
    int c=0,flag=0;
    scanf("%d",&n);


    for(int i=1;i<=n;i++){
        c++;
        if(c>3){

            if(flag==1){
                flag=0;
            }
            else if(flag==0){
                flag=1;
            }
            c=1;
        }

        if(flag==0){

            sum+=i;

        }
        else if(flag==1){
            sum-=i;
        }



    }








    printf("%d",sum);







}
