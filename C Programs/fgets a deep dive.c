#include<Stdio.h>


int main(){

char n[50];

char m[100];


fgets(m,sizeof(m),stdin);

int L2=0;

L2=strlen(m);

printf("\nCharecters of M\n");
for(int i=0;i<L2;i++){

    printf("\nIndex %d == %c      %d == %d  \n",i,m[i],i,m[i]);



}}
