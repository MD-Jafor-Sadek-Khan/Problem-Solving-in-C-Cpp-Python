#include<stdio.h>
#include<string.h>
int main(){

char ar[110];
char a2[210];



int i,j=-1;
fgets(ar,sizeof(ar),stdin);

for(int i=0;i<strlen(ar)-1;i++){
    if(ar[i]>='A' && ar[i]<='Z'){
        ar[i]+=32;
    }
}

for( i=0;i<strlen(ar)-1;i++){

    if(!(ar[i]=='a' || ar[i]=='e' || ar[i]=='y' || ar[i]=='i' || ar[i]=='o' || ar[i]=='u')){

        j++;
        a2[j]='.';
        j++;
        a2[j]=ar[i];

        continue;

    }
}



for(int i=0;i<j+1;i++){

    printf("%c",a2[i]);


}



}
