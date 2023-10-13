#include<stdio.h>
#include<math.h>
fib(int* a, int* b){
    int c=0;


    c=*a+*b;
    *a=*b;
    *b=c;


}
int main()
{

    int n;
    scanf("%d",&n);
    int a=1,b=0;


    for(int i=0;i<n;i++){
      fib(&a,&b);
      printf("%d ",a);

    }







}

