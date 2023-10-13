#include<stdio.h>
int main(){
	
	int N;
	scanf("%d",&N);
	int arr[N];
	
	int i,m;

	for(i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);		
	}
	
	m=arr[0];
	int n=0;
	i=0;
	while(i<N)
	{
		if(m>arr[i])
		{
			m=arr[i];
			n=m;
		}
		i++;
	}
	
	printf("%d",n);
	
	
	
	
}
