#include<stdio.h>

int sum(int* p,int n)
{
    int s;

     s=s+sum(p,n-1)%10;

    if(n==1)
    {
        return s;
    }

    return *(p+n);


}


int main()
{
    int n;
    scanf("%d",&n);

    int arr[n+1];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }

    int* p;
    p=&arr;

    int z=sum(p,n);

    printf("%d",z);





}
