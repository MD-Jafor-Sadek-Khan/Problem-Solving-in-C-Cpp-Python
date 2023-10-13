#include<stdio.h>
#include<math.h>
fib_by_ref(int* a, int* b){
    int c=0;


    c=*a+*b;
    *a=*b;
    *b=c;


}

fib_by_value(int n){

     int a=1;
     int b=0;
     int c=0;
     printf("\nFibonacci generated using a function using \"Pass by Value\" method \n\n");
     for(int i=0;i<n;i++){

        c=a+b;
        a=b;
        b=c;
        printf("%d ",a);

     }
     printf("\n\n\n");



}
int main()
{

    int n;
    scanf("%d",&n);
    int a=1,b=0;

    //printing fibbonacci serise using a function and pass by reference method
    printf("\nFibonacci  generated using a function using \"Pass by Reference\" method \n\n");
    for(int i=0;i<n;i++){
      fib_by_ref(&a,&b);
      printf("%d ",a);

    }
    printf("\n\n\n");

    //printing fibbonacci serise using a function and pass by value method
    fib_by_value(n);







}

