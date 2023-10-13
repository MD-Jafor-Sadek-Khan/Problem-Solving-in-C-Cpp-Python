#include<stdio.h>
#include<string.h>


int main(){


char j[10000];
fgets(j,sizeof(j),stdin);

int l=strlen(j)-1;

int c=0;
for(int i=0;i<l;i++){

    if(j[i]==97 || j[i]=='u' || j[i]=='o' || j[i]==105 || j[i]==101){

        c++;


    }




}
printf("Vowels-%d\nConsonant-%d",c,l-c);



}
