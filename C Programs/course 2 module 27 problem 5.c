#include<stdio.h>

int func(int n,int arr[]);
int main()
{

    int n;
    scanf("%d",&n);

    int arr[n+1];

    for(int i=1; i<=n; i++)
    {

        scanf("%d",&arr[i]);




    }


    int s=func(n,arr);
    printf("%d",s);








}


int func(int n,int arr[])
{

    int sum=0;
    for(int i=1; i<=n; i++)
    {

        if(i%2==0 && arr[i]%2==0)
        {

            sum+=i;
            sum+=arr[i];

        }
        if(i%2==1 && arr[i]%2==1)
        {
             sum+=i;
            sum+=arr[i];

        }







    }
        return sum;


}
