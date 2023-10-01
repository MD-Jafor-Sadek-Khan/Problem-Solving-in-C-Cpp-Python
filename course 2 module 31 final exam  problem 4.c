#include<Stdio.h>

int main(){

char arr[100000];

scanf("%s",arr);

int l=strlen(arr);

int frequency[125];


for(int i=0;i<l;i++){

        frequency[arr[i]]+=1;


}

for(int i=0;i<124;i++){

        if(frequency[i]==0){
            continue;
        }
        else{
            for(int j=0;j<frequency[i];j++){
                printf("%c",i);
            }

        }



}







}
