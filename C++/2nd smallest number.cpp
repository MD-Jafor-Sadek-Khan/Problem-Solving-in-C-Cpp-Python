#include<stdio.h>

int main()
{
	int N;
	scanf("%d",&N);
	int arr[N];
	
	int i,m,final,check;

	for(i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);		
	}
	
	int z=2;
	int z2;
	for(z2=0;z2<z;z2++)
	{
		int i=0;
	    
	    
	    for(i=0;i<N;i++){
	    	
	    	if(final<arr[i])
	    	{
	    		final=arr[i];
			}
		}
		
	   	
	  for(i=0;i<N;i++){
	  
		if(final!=arr[i])
		{
			if(check<arr[i])
			{
				check=arr[i];
				
			}
		}
	}
	}
	
	
	
	
	printf("%d",check);
	
}
