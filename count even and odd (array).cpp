#include<stdio.h>

int main(){
	
	int n=6;
    int arr[n];
    
    for(int i=0;i<6;i++)
	{
    	scanf("%d",&arr[i]);
    	
	}
	printf("number of even:");
	int even=0;
	int odd=0;
	for(int j=0;j<6;j++)
	{
		if(arr[j]%2==0)
		{
			even+=1;
		}
		else{
		odd+=1;	
		}
	}
		printf("%d",even);
	printf("\nnumber of odd:");

	printf("%d",odd);
	
	
	
}
