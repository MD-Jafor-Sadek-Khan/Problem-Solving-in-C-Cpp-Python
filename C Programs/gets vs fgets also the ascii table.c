#include<Stdio.h>


int main(){

char n[100];

char m[100];


gets(n);
fgets(m,sizeof(m),stdin);

int l1=0,l2=0;


l1=strlen(n);
l2=strlen(m);




printf("Length of n == %d  Length of m == %d\n",l1,l2);

printf("\nCharecters of N\n");
for(int i=0;i<l1+1;i++){

    printf("\nIndex %d == %c  ",i,n[i]);


}

printf("\nCharecters of M\n");
for(int i=0;i<l2+1;i++){

    printf("\nIndex %d == %c  ",i,m[i]);


}

printf("\nASCII value of each index of N\n");
for(int i=0;i<l1+1;i++){

    printf("\nIndex %d == %d  ",i,n[i]);


}

printf("\nASCII value of each index of M\n");
for(int i=0;i<l2+1;i++){

    printf("\nIndex %d == %d  ",i,m[i]);


}




printf("\n\nASCII Table\n");

char arr[355];

for(int i=0;i<355;i++){

    arr[i]=i;

}

for(int i=0;i<270;i++){

    printf("%d==%c\n",i,arr[i]);

}



}
