#include<stdio.h>

int main()
{
	__int64 h,w;
	
	scanf("%I64d%I64d",&h,&w);
	__int64 res;
	if(w<=(h/2)+(h%2!=0))
	{
		res=w*2-1;
		printf("%I64d",res);
		
	}
	else
	{
	
		
		res=2*(w-((h/2)+(h%2!=0)));
		printf("%I64d",res);
		
		
		
	}
	
	
	
}
