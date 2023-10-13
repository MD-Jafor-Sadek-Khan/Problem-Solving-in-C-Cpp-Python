#include<stdio.h>
#include<string.h>

come(char arr[]);

int main(){

char arr[10000];

arr[0]='0';
for(int i=1;arr[i-1]!=10;i++){
    scanf("%c",&arr[i]);
}

come(arr);

}

come(char arr[]){
int n=strlen(arr);
for(int i=1;i<n;i++){

    if(i%2==0){
        printf("%c%c",arr[i],arr[i]);
    }
    else{
        printf("%c",arr[i]);
    }

}

}
