#include<stdio.h>

int main(){

     int t,c;
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
     {  c=1;
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




                    if(arr[i][0]%2==0 && arr[i][0]%3==0){
                        c=c*(arr[i][0]/3);

                    }
                    else if(arr[i][0]%2==0 && arr[i][0]%5==0){
                        c=c*(arr[i][0]/5);

                    }
                    else if(arr[i][0]%2==0 && arr[i][0]%7==0){
                        c=c*(arr[i][0]/7);

                    }
                    else{
                        c=c*arr[i][0];

                    }







                    if(arr[i][1]%2==0 && arr[i][1]%3==0){
                        c=c*(arr[i][1]/3);

                    }
                    else if(arr[i][1]%2==0 && arr[i][1]%5==0){
                        c=c*(arr[i][1]/5);

                    }
                    else if (arr[i][1]%2==0 && arr[i][1]%7==0){
                        c=c*(arr[i][1]/7);

                    }
                    else{
                        c=c*arr[i][1];

                    }



        }
        (c>=arr[i][2]) ?
        printf("YES\n"):
        printf("NO\n");

     }




}
