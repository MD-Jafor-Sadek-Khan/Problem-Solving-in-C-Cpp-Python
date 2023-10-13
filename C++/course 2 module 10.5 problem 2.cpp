#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int arr[n+1];

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
printf("\n");
for(int i=1;i<=n;i++){
	
	printf("%d ",arr[i]);
}
}
