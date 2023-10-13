#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	
	for(int i=n;i>=1;i--){
		for(int j=n-1;j>=i;j--){
		
		
		printf(" ");
	}
	
	
	
	
		for(int j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	
	
}
