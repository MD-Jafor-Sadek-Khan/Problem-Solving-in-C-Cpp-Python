#include<stdio.h>

int main(){
	int n,p,c=0;
	scanf("%d%d",&n,&p);
	int arr[101];
	for(int i=1;i<=n;i++){
	    scanf("%d",&arr[i]);	
	}
	for(int i=1;i<=n;i++){
		
		if(arr[i]>=arr[p] && arr[i]>0){
			c++;
		}
	}
	printf("%d",c);
	
	
	
}
