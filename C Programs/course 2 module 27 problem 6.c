#include<stdio.h>
int div3(int n,int arr[]);
int div5(int c,int n,int arr[]);

int main(){

int n;
scanf("%d",&n);

int arr[n];
for(int i=0;i<n;i++){

scanf("%d",&arr[i]);


}

int l=0;
l=div3(n,arr);


if(l==0){
    printf("-1");
}
else
{
    printf("%d",l);
}




}

int div3(int n,int arr[]){
int c=0;

for(int i=0;i<n;i++){

    if(arr[i]%3==0){
        arr[i]=1;
        c++;


    }




}

return div5(c,n,arr);





}
int div5(int c,int n,int arr[]){
int g=0;

for(int i=0;i<n;i++){

    if(arr[i]%5==0){

        g++;


    }




}
g+=c;
return g;




}
