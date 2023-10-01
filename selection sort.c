#include<stdio.h>

int main(){

int n;
scanf("%d",&n);

int arr[n];
for(int i=0;i<n;i++){

scanf("%d",&arr[i]);

}
int sorted[n];
for(int j=0;j<n;j++){

int min=0;
for(int i=0;i<n;i++){

    if(arr[min]>arr[i]){

    min=i;

    }

}
sorted[j]=arr[min];
arr[min]=999;
}

for(int i=0;i<n;i++){
printf("%d ",sorted[i]);

}



}
