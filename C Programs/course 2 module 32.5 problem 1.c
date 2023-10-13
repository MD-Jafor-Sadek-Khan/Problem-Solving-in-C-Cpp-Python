#include<stdio.h>

int power(int n,int m)
{

    if(m==0)
    {
        return 1;
    }
    int sum=n*power(n,m-1);

    return sum;




}


int main()
{
    int n,m;

    scanf("%d%d",&n,&m);

    int z=power(n,m);
    printf("%d",z);




}
