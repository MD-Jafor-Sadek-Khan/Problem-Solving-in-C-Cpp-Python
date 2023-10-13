#include<stdio.h>

int median(int s,int arr[])
{
    if(s==2){

        return (arr[s-1]+arr[s])/2;

    }
    else if(s==1){

        return arr[s];

    }
    else if(s==0){

        return 0;

    }
    else{

        int temp=0;
    for(int i=1;i<=s;i++){

        for(int j=1;j<=s;j++){

            if(arr[j]>arr[j+1]){

                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }



        }


    }

    if(s%2==1){
            return arr[(s/2)+1];



    }
    else{

        return (arr[s/2]+arr[(s/2)+1])/2;


    }

    }




}


int main(){

int s;
printf("enter the size of arry ");
scanf("%d",&s);
int arr[s+2];
printf("enter the arry ");

for(int i=1;i<=s;i++){

    scanf("%d",&arr[i]);


}
printf("\n%d",median(s,arr));







}
