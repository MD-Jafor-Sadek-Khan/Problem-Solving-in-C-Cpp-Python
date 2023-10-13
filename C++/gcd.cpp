#include<stdio.h>

int main(){
int i,a,j;
i=2;
j=0;
scanf("%d",&a);
while(i<=a/2){
	if(a%i==0){
		j++;
	}
	i++;
}
if(j>0){
	printf("Composite");
}
else{
	printf("Prime");
}


	
}

