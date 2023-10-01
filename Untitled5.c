#include<Stdio.h>


int main(){

char n[48];

char m[100];


fgets(m,sizeof(n),stdin);

int l1=0,l2=0;

l2=strlen(m);

printf("\nCharecters of M\n");
for(int i=0;i<70;i++){

    printf("\nIndex %d == %c      %d == %d  \n",i,m[i],i,m[i]);



}}
