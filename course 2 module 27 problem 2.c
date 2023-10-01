#include<Stdio.h>
#include<String.h>
rev(int l,char arr[]);
int main(){


    char arr[1000000];

    scanf("%s",arr);

    int l=strlen(arr);


    rev(l,arr);

}

rev(int l,char arr[]){
    char temp;
    for(int i=0;i<l;i++){

        for(int j=0;j<l;j++){

            if(arr[j]<arr[j+1]){

                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }



        }


    }
    for(int i=0;i<l;i++){

        printf("%c",arr[i]);


    }



}
