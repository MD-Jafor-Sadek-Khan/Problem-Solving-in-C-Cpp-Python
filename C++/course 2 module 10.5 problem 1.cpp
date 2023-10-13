#include<stdio.h>

int main(){
	int N;
	scanf("%d",&N);
	
	int arr[N+1];
	for(int i=0;i<=N;i++){
		arr[i]=0;
	
	}	
	
	arr[1]=1;
	
	
	
	for(int i=1;i<=N;i++){
	    
		
		arr[i+1]=(arr[i]+arr[i-1]);
		
		printf("%d ",arr[i-1]);
	
		
	
	}
		

	
	
	
}
