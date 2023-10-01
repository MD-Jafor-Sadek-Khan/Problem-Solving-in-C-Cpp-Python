#include<stdio.h>




int main()
{

    int n;
    int c=0;
    int flag=0;

    scanf("%d",&n);

    unsigned int arr[n];


    for(int i=0;i<n;i++)
    {
        scanf("%u",&c);
        for(int j=0;j<=i;j++)
        {
            if(c==arr[j])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            arr[i]=c;
        }


    }

    printf("%d",(sizeof(arr)));






}
