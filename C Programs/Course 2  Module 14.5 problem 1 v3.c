#include<Stdio.h>
#include<string.h>


int main(){

char arr[10000];
char a2[10000];
int m;
scanf("%d",&m);
getchar();
for(int i=0;i<m;i++){

    fgets(arr,sizeof(arr),stdin);

    arr[strlen(arr)-1]=32;
    strcat(a2,arr);


}


puts(a2);

}
