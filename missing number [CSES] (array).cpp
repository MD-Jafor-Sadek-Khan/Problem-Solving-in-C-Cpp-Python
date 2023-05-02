#include<stdio.h>

int main(){
	
	
unsigned int n,k=1,j=1,f=1; 
scanf("%u",&n);
for(unsigned int i=1;i<n;i++){

scanf("%u",&f);
k=k+f;
//printf("\nf=%d  k=%d\n",f,k);
}
	for(unsigned int i=1;i<=n;i++){
		j=j+i;
//		printf("\ni=%d  j=%d\n",i,j);
	}
	int sum=j-k;
	printf("%u",sum);
}
