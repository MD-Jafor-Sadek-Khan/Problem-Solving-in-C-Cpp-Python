#include<stdio.h>

int main(){
	int a,b,c;
	printf("input two numbers");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && a>c){
		printf("a is bigger");
	}
	else if(a<b && c<b){
		printf("b is bigger");
		
	}
	else if(c>a && c>b)
	{
		printf("c is bigger");
	}
	else {
		if (a==b){
			printf("a and b both are bigger");
		}
		else if (b==c){
			printf("b and c both are bigger");
		
	}
		else if (a==c){
			printf("a and c both are bigger");
}}}
