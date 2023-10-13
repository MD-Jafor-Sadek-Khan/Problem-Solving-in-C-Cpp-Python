#include<stdio.h>

int add(int a[]){
    int c=0;

    c=a[0]+a[1];

    return c;
}

int Main()
{


    int a[2];
    printf("Enter 2 numbers to add\n");
    scanf("%d%d",&a[0],&a[1]);


     a[2]=add(a);
    printf("%d",a[2]);
}
