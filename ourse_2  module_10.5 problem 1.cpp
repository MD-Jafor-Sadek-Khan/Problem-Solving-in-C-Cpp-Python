#include<stdio.h>

int main(){
	int N,t1=0,t2=1,j=0;
	scanf("%d",&N);
	printf("%d %d",t1,t2);
	for(int i=1;i<=N-2;i++){
		j=t1+t2;
		
		t1=t2;
		t2=j;
	
		
		
		printf(" %d",j);
	}
	
}
