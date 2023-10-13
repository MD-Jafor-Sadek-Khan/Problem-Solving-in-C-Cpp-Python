#include<stdio.h>

int tp(int i,int j,int arr);

int main(){


        int arr[3][3];
        int a2[3][3];


        for(int i=0;i<3;i++){

            for(int j=0;j<3;j++){

            scanf("%d",&arr[i][j]);

        }

        }

     for(int i=0;i<3;i++){

            for(int j=0;j<3;j++){

            a2[j][i]=tp(i,j,arr[i][j]);

            }
     }



for(int i=0;i<3;i++){

            for(int j=0;j<3;j++){

            printf("%d ",a2[i][j]);

        }
        printf("\n");

        }

}


int tp(int i,int j,int arr){


        int tp[3][3];

        return tp[j][i]=arr;













}
