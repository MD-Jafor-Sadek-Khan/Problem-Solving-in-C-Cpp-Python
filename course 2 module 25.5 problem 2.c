#include<stdio.h>


int sort(int n,int arr[]){
    int temp=0;
    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){

            if(arr[i]<arr[i+1]){

                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;


            }



        }


    }


    return &arr;

}

int main(){

int n;
scanf("%d",&n);
int arr[n];

for(int i=0;i<n;i++){

    scanf("%d",&arr[i]);




}

int* p=sort(n,arr);



for(int i=0;i<n;i++){
    printf("%p ",arr);
}










}
