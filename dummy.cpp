
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);


    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int k;
    int countt=0,comp=0;
    scanf("%d",&k);

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            comp++;
            if(arr[i]+arr[j]==k)
            {
                countt++;

            }
        }
    }


    printf("%d\n%d",countt,comp);

}
