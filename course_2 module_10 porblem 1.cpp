#include<stdio.h>

int main(){
	int N,t,a,b,c;
	t=0;
	scanf("%d",&N);
	
	for(int i=0;i<N;i++){
		scanf("%d%d%d",&a,&b,&c);
		if(a+b+c>=2){
			t+=1;
		}
	}
	printf("%d",t);
	
}
