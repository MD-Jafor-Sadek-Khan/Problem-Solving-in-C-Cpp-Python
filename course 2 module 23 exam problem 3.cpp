#include<stdio.h>
#include<string.h>

int I_respect_you(int l,char arr[]){
    int f1=0,f7=0,f9=0;
    for(int i=0;i<l;i++){

        if(arr[i]=='1'){
            f1=1;

        }
        else if(arr[i]=='9'){
            f9=1;
        }
        else if(arr[i]=='7'){
            f7=1;
        }



    }
    if(f1==1 && f9==1 && f7==1){
        return 1;
    }

    return 0;




}



int main(){

char arr[10000];

scanf("%s",arr);

int l=strlen(arr);

int j=I_respect_you(l,arr);

if(j==1){
    printf("YES");
    return 0;
}
printf("NO");









}
