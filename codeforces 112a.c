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

}

for(int i=0;i<strlen(b)-1;i++){

    if(b[i]>='A' && b[i]<='Z'){

        b[i]+=32;

    }

}

for(int i=0;i<strlen(a)-1;i++){


    if(a[i]==b[i]){

        x+=a[i];
        y+=b[i];

    }
    else{

       x+=a[i];
        y+=b[i];
        break;

    }



}


if(x>y){
    printf("1");


}
else if(y>x){

printf("-1");

}
else{

printf("0");
}


}
