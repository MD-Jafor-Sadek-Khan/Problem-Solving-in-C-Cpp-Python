#include<stdio.h>

int main(){
	
	int n,k=0;
	scanf("%d",&n);
	int arr[n+1];
	int a2[n+1];
	for(int i=1;i<=n;i++){
    	scanf("%d",&arr[i]);
	}
	
	for(int i=1;i<=n;i++){
		if(arr[i]==0 || arr[i]==1){
			
		}
		else if(arr[i]==2 || arr[i]==3 || arr[i]==5 || arr[i]==7){
			k++;
			a2[k]=arr[i];
		}
		else if(arr[i]%2!=0 && arr[i]%3!=0 && arr[i]%5!=0 && arr[i]%7!=0){
			k++;
		    a2[k]=arr[i];	
		}
	}
	printf("%d\n",k);
	
	for(int i=1;i<=k;i++){
		printf("%d ",a2[i]);
	}
	
	





}
