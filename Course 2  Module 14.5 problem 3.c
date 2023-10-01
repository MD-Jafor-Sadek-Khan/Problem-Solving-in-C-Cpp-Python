#include<Stdio.h>
#include<string.h>


int main(){

char a[100000];
int t=0;
fgets(a,sizeof(a),stdin);

for(int i=0;i<strlen(a)-1;i++){


    t+=a[i]%96;


}

int c=0;
int i;
for( i=t;t%2==0;){

    t/=2;
    i=t;
    c++;

}

if(i==1){

    printf("YES\n2^%d",c);

}
else{

    printf("NO");
}


































}
