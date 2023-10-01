#include<Stdio.h>
#include<string.h>


int main(){

int arr[100][100];
char a2[100];
int m;
scanf("%d",&m);
getchar();

int z=-1;

for(int i=0;i<m;i++){
    for(int j=0;;j++){

        scanf("%c",&arr[i][j]);

        if(arr[i][j]==10){

            z++;
            a2[z]=32;
            break;

        }

        z++;
        a2[z]=arr[i][j];



    }
}

puts(a2);

}
