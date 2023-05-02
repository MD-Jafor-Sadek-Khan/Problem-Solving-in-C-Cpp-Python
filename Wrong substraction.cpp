#include<stdio.h>

int main(){
	int N,K;
	
	scanf("%d%d",&N,&K);
	
	for(int i=1;i<=K;i++){
		if(N%10==0){
			N=N/10;
		}
		else{
			N=N-1;
		}
	}
	printf("%d",N);
}
