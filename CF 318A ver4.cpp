#include<stdio.h>

int main()
{
	__int64 h,w;
	
	scanf("%lld%lld",&h,&w);
	long long res;
	if(w<=(h/2)+(h%2!=0))
	{
		res=w*2-1;
		printf("%lld",res);
		
	}
	else
	{
		long long int step= w-((h/2)+(h%2!=0));
		
		res=2*step;
		printf("%lld",res);
		
		
		
	}
	
	
	
}
