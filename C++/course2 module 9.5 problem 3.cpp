#include<stdio.h>

int main(){
	int N;
	scanf("%d",&N);
	int arr[N];
	for(int i=0;i<N;i++){
		
	scanf("%d",&arr[i]);	
		
		
		
	}
int t=0;
	for(int i=0;i<N;i++){
		if(arr[i]/arr[0]==1){
			 
		t=t+1;
		}
		else
		{
		  t+=0;
	}
	}
	
		if(t==N){
			printf("YES");
		}
		else
        printf("NO");		
}

