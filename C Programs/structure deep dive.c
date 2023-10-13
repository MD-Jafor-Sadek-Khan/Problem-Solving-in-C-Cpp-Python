#include<stdio.h>
#include<String.h>
struct name{

char name[50];


};

struct point{

int x,y,z;


};
int main(){



struct name rahat={"jafor"};

struct name jafor;
scanf("%s",&jafor.name);

char lol[50]="rahat";
strcpy(rahat.name,lol);

printf("%s\n%s\n",rahat.name,lol);
printf("%s\n",jafor.name);



struct point c1={1,2,3};
struct point c2={4,5,6};

c2=c1;

printf("values of c2   x=%d y=%d z=%d\n",c2.x,c2.y,c2.z);








}
