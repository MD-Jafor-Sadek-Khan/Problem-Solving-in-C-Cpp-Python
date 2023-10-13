#include<stdio.h>

int main(){
	
	
	unsigned int n;
	scanf("%lu",&n);

	unsigned int arr[200001];
	int x,y;
	
	for( y=1;y<=n;y++){
		arr[y]=0;
	}
	for(y=1;y<=n-1;y++){
		scanf("%lu",&x);
		arr[x]=1;
		
	}
	
	unsigned int i;
	for(i=1;i<=n;i++){
		if(arr[i]==0){
			printf("%lu",i);
		}
	}
	
	
}
