#include<stdio.h>

int main(){
	long long int N,r=0,q=0;
		scanf("%lld",&N);
	
	long long int arr[N+1];

	for(int i=1;i<=N;i++){
		scanf("%lld",&arr[i]);
	}
	
	
	for(int i=2;i<=N;i++){
		if(arr[i]<arr[i-1]){
			r=r+(arr[i-1]-arr[i]);
			q=arr[i-1]-arr[i];
		
			arr[i]+=q;
			
		}
		
	}
	printf("%lld",r);
	
}
