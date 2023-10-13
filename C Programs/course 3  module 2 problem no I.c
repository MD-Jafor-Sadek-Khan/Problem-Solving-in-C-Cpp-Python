#include<stdio.h>




int main()
{
    int flag=0;
    int n;

    scanf("%d",&n);

    unsigned int arr[n+1];
    unsigned int a2[n+1];

    for(int i=0;i<n;i++)
    {
        scanf("%u",&arr[i]);

        int c=0;
        for(int j=0;j<=i;j++)
        {
            if(arr[i]==a2[j])
            {
                c+=1;
                break;
            }


        }
        if(c==0)
        {
           a2[flag]=arr[i];
           flag+=1;
        }
    }


    printf("%d",flag);






}
