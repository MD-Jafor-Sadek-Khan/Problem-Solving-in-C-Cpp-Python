#include<stdio.h>
#include<string.h>
int main(){

char ar[110];
char a2[210];



int i,j=-1;
fgets(ar,sizeof(ar),stdin);
int l=strlen(ar)-1;
for( i=0;i<l;i++){

    if(ar[i]=='A' || ar[i]=='E' || ar[i]=='Y' || ar[i]=='I' || ar[i]=='O' || ar[i]=='U' || ar[i]=='a' || ar[i]=='e' || ar[i]=='y' || ar[i]=='i' || ar[i]=='o' || ar[i]=='u'  ){

        continue;

    }
    else if(ar[i]>96 && ar[i]<123)
    {

        j++;
        a2[j]='.';
        j++;
        a2[j]=ar[i];

        continue;


    }
    else if(ar[i]>64 && ar[i]<91){
        j++;
        a2[j]='.';
        j++;
        a2[j]=ar[i]+32;

        continue;
    }


}



for(int i=0;i<j+1;i++){

    printf("%c",a2[i]);


}



}
