#include<stdio.h>

int main(){

int t;
scanf("%d",&t);

for(int i=0;i<t;i++){

    int n,t=0,h=0;
    scanf("%d",&n);

    char arr[n];
    scanf("%s",arr);

    for(int j=0;j<n;j++){
        if(arr[i]==72){
            h++;

        }
        else{
            t++;
        }
    }
    if(h>t){
        printf("England");

    }
    else{
        printf("Pakistan");
    }





}



}