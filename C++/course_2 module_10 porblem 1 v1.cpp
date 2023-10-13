#include<stdio.h>

int main(){
	int N;
	scanf("%d",&N);
	
	int arr[N][2];
	
	for(int i=0;i<N;i++){
		for(int j=0;j<3;j++){
		    scanf("%d",&arr[i][j]);
				
		}
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<3;j++){
		    printf("%d",arr[0][0]);
				
		}
	}
	
	
}
