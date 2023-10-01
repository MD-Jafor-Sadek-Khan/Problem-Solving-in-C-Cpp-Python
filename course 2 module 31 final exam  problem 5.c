#include<Stdio.h>
#include<stdlib.h>
int main(){

    int N;
    scanf("%d",&N);

    int* p;

    p=(int*) malloc(N*sizeof(int));


    for(int i=0;i<N;i++)
        scanf("%d",(p+i));

    for(int i=0;i<N;i++)
    printf("%d ",*(p+i));







free(p);



}
