#include<stdio.h>

int main(){

    int n,c;
    scanf("%d",&n);

    for(int i=0;i<n+1;i++){
        c=0;
        char w[101];
        gets(w);


        for(int j=0;w[j]!=0;j++){

         c++;


        }

        if(c>10){

            printf("%c%d%c\n",w[0],c-2,w[c-1]);



        }
        else{
        puts(w);
        printf("\n");
        }






    }






}
