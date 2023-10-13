#include<stdio.h>

int main(){
	
	int n,k;
	scanf("%d",&n);
	int arr[n];
	for(int i=1;i<=n;i++){
    	scanf("%d",&arr[i]);
	}
	


	for(int j=1;j<=n;j++){

	for(int i=2;i<=n;i++){
		if(arr[i-1]>arr[i]){
			arr[0]=arr[i-1];
		
			arr[i-1]=arr[i];
			arr[i]=arr[0];
			
			
		}
	}
	
}
	


	
	scanf("%d",&k);
	
	printf("%d",arr[k]);
	
	
	
}
