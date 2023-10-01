#include<Stdio.h>


int factorial(int x);

int fact_ratio(int x,int y);


int main(){



  printf("Factorial=%d\n",factorial(3));

  printf("Ratio=%d",fact_ratio(3,3));















}



int factorial(int x){
    int sum=1;
    for(int i=1;i<=x;i++)
    sum*=i;


return sum;



}

int fact_ratio(int x,int y){

int rat=0;

rat=factorial(x)/factorial(y);

return rat;




}
