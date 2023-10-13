#include<stdio.h>

int main(){
	int N,k;
	
	scanf("%d%d",&N,&k);
	
	for(int i=1;i<=k;i++){
		if(N%10==0){
			N=N/10;
		}
		else{
			N=N-1;
		}
	} 
	printf("%d",N);
}
