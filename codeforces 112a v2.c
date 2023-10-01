#include<stdio.h>
#include<string.h>

int main(){

char a[102];
char b[102];

fgets(a,sizeof(a),stdin);
fgets(b,sizeof(b),stdin);
int x=0,y=0;

for(int i=0;i<strlen(a)-1;i++)
{


    if(a[i]>='A' && a[i]<='Z'){

        a[i]+=32;

    }
    if(b[i]>='A' && b[i]<='Z'){

        b[i]+=32;

    }

}



for(int i=0;i<strlen(a)-1;i++){


    if(a[i]!=b[i]){

        if(a[i]>b[i]){

            printf("1");
            return 0;
        }
        else if(a[i]<b[i]){
                printf("-1");
                return 0;

        }



}


}
printf("0");
}
