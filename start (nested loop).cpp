#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	
	int k=(n/2)+1;
	
int t=1;
for(int j=1;j<=k;j++){

   
    
     

	for(int i=1;i<=k-j;i++){
		printf(" ");
		
	}
	for(int i=1;i<=t;i++){
		printf("*");
	
	}
	printf("\n");
		t=t+2;
}
	
	
	
}
