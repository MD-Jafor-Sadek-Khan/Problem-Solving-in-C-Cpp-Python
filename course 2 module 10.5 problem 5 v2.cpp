#include<stdio.h>

int main(){
	int N,c=0,h=0;
	scanf("%d",&N);
	int a[N];
	int arr[N+1];
	for(int i=1;i<=N;i++){
		scanf("%d",&arr[N]);
		
	}
	
	for(int i=1;i<=N;i++){
		if(arr[i]!=2){
		 h=arr[i]/2;
		for(int j=2;j<=h;j++){
			int c=2;
			if(arr[i]!=0 || arr[i]!=1){
			  if(arr[i]/j){
			  	c++;
			  }	
			}
			if(c>1){
				a[i]=arr[i];
			}
			
			
				
		}
	}
	else{
		
		for(int j=2;j<=2;j++){
			int c=2;
			if(arr[i]!=0 || arr[i]!=1){
			  if(arr[i]/j){
			  	c++;
			  }	
			}
			if(c>1){
				a[i]=arr[i];
			}
			
			
				
		}
	}
}

for(int i=1;i<N;i++){
	printf("%d\n%d",sizeof(a[i]),a[i]);
}
	
	
	
}
