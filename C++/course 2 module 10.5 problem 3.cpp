#include<stdio.h>

int main(){
	
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=1;i<=n;i++){
    	scanf("%d",&arr[i]);
    	
    	if(arr[i]%2==1){
    		arr[0]+=arr[i];
		}
		
	}
	if(arr[0]%2==0){
		printf("YES");
	}
	else{
		printf("NO");
	}
	
}
