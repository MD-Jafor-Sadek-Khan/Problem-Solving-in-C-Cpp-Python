#include<stdio.h>
#include<string.h>

int main(){

int n;
scanf("%d\r",&n);
//getchar();
int i=0;
while(i<n)
    {

        char w[105];
        fgets(w,sizeof(w),stdin);

        int l=strlen(w);

        if(l>10){

            printf("%c%d%c",w[0],l-2,w[l-1]);
            printf("\n");

        }
        else{
            printf("%s",w);
            printf("\n");



        }

            i++;

}





}
