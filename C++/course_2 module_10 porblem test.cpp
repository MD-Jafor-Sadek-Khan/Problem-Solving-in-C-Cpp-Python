#include<stdio.h>

int main(){
	int N;
	scanf("%d",&N);
	
	int arr[N][2];
	int t=0;
	
	for(int i=0;i<N;i++){
		for(int j=0;j<3;j++){
		    scanf("%d",&arr[i][j]);
				
		}
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<3;j++){
		   if(j+2<3){
		   	if(arr[i][j+2]+arr[i][j]>=2){
		   		t=t+1;
		   		break;
			   }
		   }
				
		}
		
	}
	printf("%d",t);

	
	
}
