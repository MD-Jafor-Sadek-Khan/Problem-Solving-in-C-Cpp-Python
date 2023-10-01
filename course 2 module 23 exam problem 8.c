#include<stdio.h>
#include<string.h>

char shifter(int n,char arr);

int main(){

char arr[1000000];

scanf("%s",arr);


int n;
scanf("%d",&n);

for(int i=0;i<strlen(arr);i++){


    printf("%c",shifter(n,arr[i]));

}











}



char shifter(int n,char arr){

        for(int i=0;i<n;i++){
            if(arr=='z'){
                arr='a';


            }
            else if(arr=='Z'){
                arr='A';
            }
            else{
                arr+=1;
            }



        }
        return arr;








}
