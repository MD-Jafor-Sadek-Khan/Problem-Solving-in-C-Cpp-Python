#include<stdio.h>

int main(){

     int t;
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
         int a=1,b=1,c=1,counter=0;
        if (arr[i][0]%2==1 && arr[i][1]%2==1 && arr[i][2]>1)
        {
            printf("NO\n");
            continue;
        }
        else if(arr[i][0]%2==1 && arr[i][1]%2==1 && arr[i][2]==1){
            printf("YES\n");
            continue;
        }
        else if(arr[i][2]==1){
            printf("YES\n");
            continue;
        }
        else if(arr[i][0]%2==1){





            for(int s=3;s<8;s+=2){
                if(arr[i][1]%s==0){

                    if(arr[i][2]>arr[i][1]/s){
                        printf("NO\n");
                        break;
                    }
                    else{
                        printf("YES\n");
                        break;
                    }

                }
                else{
                    if(arr[i][2]>arr[i][1]){
                         printf("NO\n");
                        break;
                    }
                    else{
                        printf("YES\n");
                        break;
                    }

                }
            }


        }
        else if(arr[i][1]%2==1){

            for(int s=3;s<8;s+=2){
                if(arr[i][0]%s==0){

                    if(arr[i][2]>arr[i][0]/s){
                        printf("NO\n");
                        break;
                    }
                    else{
                        printf("YES\n");
                        break;
                    }

                }
                else{
                    if(arr[i][2]>arr[i][0]){
                         printf("NO\n");
                        break;
                    }
                    else{
                        printf("YES\n");
                        break;
                    }

                }
            }

        }
        else if(arr[i][0]%2==0 && arr[i][1]%2==0){
                for(int j = 0; j < 2; j++)
            {
                for (int z = 3; z < 8; z+=2)
                {
                    if(arr[i][j]%z==0){
                        c=c*(arr[i][j]/z);
                    }
                    counter++;
                    if(counter>3){
                        c=c*arr[i][j];

                    }

                }

            }


            if(c>=arr[i][2]) {

                printf("YES\n");
                    continue;

            }
            else{
                printf("NO\n");
                continue;
            }


        }












}
}
