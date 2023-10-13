#include<stdio.h>

int main(){
int n,m;
scanf("%d%d",&n,&m);

int a1[n][m],a2[n][m];


for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){

        scanf("%d",&a1[i][j]);
    }
}



for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        scanf("%d",&a2[i][j]);

    }
}

printf("\n");



for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        printf("%d ",a1[i][j]+a2[i][j]);

    }
    printf("\n");
}

}
