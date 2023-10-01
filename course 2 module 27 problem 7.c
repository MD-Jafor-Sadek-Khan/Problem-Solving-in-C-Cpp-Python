#include<stdio.h>

swap(int* p);
int main(){

    int n;
    scanf("%d",&n);

    int arr[n+1];

    for(int i=1;i<=n;i++){

        scanf("%d",&arr[i]);

    }
    int* p=&arr;
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){

        swap(p);
    }

    for(int i=1;i<=n;i++){
        printf("%d ",*(p+i));

    }



}

swap(int* p){
    int l,r;
    int temp=0;

    scanf("%d%d",&l,&r);

    temp= *(p+l);
    *(p+l)= *(p+r);
    *(p+r)=temp;

}
