#include<Stdio.h>
//int kala(int* p,)

int main(){

    int n;
    scanf("%d",&n);

    int arr[n+1];
    arr[0]=0;
    for(int i=1;i<=n;i++){

        scanf("%d",&arr[i]);



    }

    int* p=&arr;

    printf("%d",*(p+5));

    int temp= *(p+5);

    printf("%d",temp);

    *(p+0)=temp;

    printf("%d",arr[0]);

    *(p+3)= *(p+4);

    printf("%d%d",arr[3],*(p+4));



}
