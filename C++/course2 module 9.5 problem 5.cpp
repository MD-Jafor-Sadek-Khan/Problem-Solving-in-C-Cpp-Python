#include<stdio.h>

int main(){
	int N;
	scanf("%d",&N);
	int arr[N];
	for(int i=0;i<N;i++){
		
	scanf("%d",&arr[i]);	
		
		
		
	}
	
		int Q;
	    scanf("%d",&Q);
	int t=0;
	for(int i=0;i<N;i++){
		int j=0;
		while(j<N){
			if(arr[i]+arr[j]==Q){
				t=1;
			}
			j++;
		}
		
	}
	if(t==1){
			printf("YES");
		}
		else{
			printf("NO");
		}
			
		
}
