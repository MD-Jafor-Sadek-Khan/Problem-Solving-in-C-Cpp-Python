#include<Stdio.h>

count(int arr[],int n);
int main(){


int n;
scanf("%d",&n);

int arr[n+1];

for(int i=0;i<n;i++){

    scanf("%d",&arr[i]);


}



count(arr,n);




}


count(int arr[],int n){
        int k,g=0;
        scanf("%d",&k);
        for(int i=0;i<n;i++){

            if(arr[i]>k || arr[i]<k)
            g++;




        }

        printf("%d",g);






}

