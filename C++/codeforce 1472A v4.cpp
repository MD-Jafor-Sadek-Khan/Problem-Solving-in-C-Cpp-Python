#include<stdio.h>

int main(){

     int t,counter=0;
     scanf("%d",&t);
     long long int arr[t][3];
     for (int  i = 0; i < t; i++)
     {
        for (int j = 0; j < 3; j++)
        {
            scanf("%lld",&arr[i][j]);
        }

     }

    int z=3,i=0,j=0;
     for (int i = 0; i < t; i++)
     {
         int c=1;
        if (arr[i][0]%2==1 && arr[i][1]%2==1 && arr[i][2]>1)
        {
            printf("NO\n");
            continue;
        }
        else if(arr[i][2]==1){
            printf("YES\n");
            continue;
        }
        else{
            for(int j = 0; j < 2; j++)
            {
                for (int z = 3; z < 8; z+=2)
                {
                    if(arr[i][j]%2==0 && arr[i][j]%z==0){
                        c=c*(arr[i][j]/z);
                    }
                    counter++;
                    if(counter>3){
                        c=c*arr[i][j];

                    }

                }

            }
        }
        (c>=arr[i][2]) ?
        printf("YES\n"):
        printf("NO\n");

     }




}
