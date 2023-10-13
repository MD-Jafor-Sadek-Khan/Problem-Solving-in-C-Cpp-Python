#include<stdio.h>


int main(){
	int t=0,c=1,d=1,s=0;
	scanf("%d",&t);
	int arr[t][3];
	
	
	for(int i=0;i<t;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(int i=0;i<t;i++){
		for(int j=0;j<3;j++){
			printf("given numbers %d ",arr[i][j]);
		}
		printf("\n");
	}
	
	
	for(int i=0;i<t;i++){
		if(arr[i][0]%2==1 && arr[i][1]%2==1){
			printf("NO");
		}
		else{
			for(int j=3;j<=7;j+=2){
	
	if(arr[i][0]%j==0){
		c*=arr[i][0]/j;
	}
	else{
		c*=arr[i][0];
	}
	
	if(arr[i][1]%j==0){
		d*=arr[i][1]/j;
	}
	else{
		d*=arr[i][1];
	}
	
		}
	
	
	}
	s=c*d;
	if(s>arr[i][2]){
		printf("YES");
		
	}
	else{
		printf("NO");
		
	}
}
     
	
	
	
}
