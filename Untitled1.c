#include<stdio.h>

int main(){
	int n;
	scanf("%d",n);
	
	int a[n];
	
	
	a[0]=1;
	a[1]=1;
	
	
	a[2]=a[0]+a[1];
	a[0]=a[1];
	a[1]=a[2];
    
    for(int i=0;i<n;i++)
	printf("%d",a[2]);
	
	
	
	
	
}
