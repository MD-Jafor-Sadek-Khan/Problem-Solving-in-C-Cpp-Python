#include<stdio.h>


int main(){
	
	unsigned int n,i;
	unsigned int arr[200001];
	for(i=0;i<=n;i++){
		arr[i]=0;
	}
	for(i=1;i<=n;i++)
	scanf("%u",&n);
	
	
	
	unsigned int j,check=1;
	for(i=0;i<=n;i++){
		for(j=1;j<=n;j++){
			if(arr[j]==check)
			{
			check++;
			break;}
			
			
			
		}
		
	}
	
	printf("%u",check);
	
	
	
	
}
