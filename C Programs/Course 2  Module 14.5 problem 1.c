#include<stdio.h>
#include<string.h>


int main(){

char a[10000];

int m;
scanf("%d",&m);
getchar();

int j=-1;
for(int i=0;i<m;i++)
{
  for(;;) {

    j++;
    scanf("%c",&a[j]);

        if(a[j]==10){
            a[j]=32;

            break;
        }

    }


}

puts(a);

}


