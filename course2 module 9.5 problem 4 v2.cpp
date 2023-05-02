#include<stdio.h>

int main(){
	int N;
	scanf("%d",&N);
	int arr[N];
	for(int i=0;i<N;i++){
		
	scanf("%d",&arr[i]);	
		
		
		
	}

	for(int i=0;i<N;i++){
		printf("\n%d",arr[i]);
		for(int j=0;j<N;j++){
			if(j!=i){
				printf("%d",arr[j]);
			}
		}
		
	}
}
