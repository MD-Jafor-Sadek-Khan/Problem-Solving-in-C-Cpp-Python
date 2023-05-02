#include<stdio.h>

int main(){
	int N,a,b,c,counter=0;
	scanf("%d",&N);
	
	for(int i=1;i<=N;i++){
		scanf("%d%d%d",&a,&b,&c);
		if(a+b+c>=2){
			counter=counter+1;
		}
	}
	printf("%d",counter);
}
