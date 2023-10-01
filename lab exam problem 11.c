#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int max=0;
    printf("outside %d\n",max);
    scanf("%d",&n);

    int arr[n+1];

    for(int i=0;i<n;i++){

        scanf("%d",&arr[i]);

        }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){
            printf("inside 1 i=%d j=%d arr[i]==%d arr[j]==%d\n",i,j,arr[i],arr[j]);
            if(i!=j){
                if(arr[i]==0 && arr[j]==0){

                    continue;

                }
                else{

                    if((arr[i]+arr[j])%2==0){

                if((arr[i]+arr[j])>max){


                    max=arr[i]+arr[j];
                    printf("inside2 i=%d j=%d %d\n",i,j,max);
                }


            }

                }



            }


        }

    }
    printf("last %d",max);

    return 0;
}

