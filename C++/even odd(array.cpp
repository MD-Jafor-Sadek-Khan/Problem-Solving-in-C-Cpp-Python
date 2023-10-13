#include<stdio.h>

int main(){
	
	int n=6;
    int arr[n];
    
    for(int i=0;i<6;i++)
	{
    	scanf("%d",&arr[i]);
    	
	}
	printf("list of even:");
	for(int j=0;j<6;j++)
	{
		if(arr[j]%2==0)
		{
			printf(" %d,",arr[j]);
		}
	}
	printf("\nlist of odd:");
	for(int j=0;j<6;j++)
	{
		if(arr[j]%2!=0)
		{
			printf(" %d,",arr[j]);
		}
	}
	
	
	
	
}
