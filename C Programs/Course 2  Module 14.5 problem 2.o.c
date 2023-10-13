#include<Stdio.h>
#include<string.h>


int main(){

char a[100000];

for(int i=0;a[i-1]!=10;i++){

    scanf("%c",&a[i]);
    if(!(a[i]==48 || a[i]==49)){

        printf("NO");
        return 0;

    }

    printf("Yes");
    return 0;

}












}
