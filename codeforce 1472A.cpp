#include<stdio.h>
#include <math.h>

int main(){
	int t,c=0,d=0,s=0;
	scanf("%d",&t);
	int arr[t][3];
	
	
	for(int i=0;i<t;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
/*	for(int i=0;i<t;i++){
		for(int j=0;j<3;j++){
			printf("giveen numbers %d ",arr[i][j]);
		}
		printf("\n");
	}*/
	
	
	for(int i=0;i<t;i++){
	for(int j=3;j<=7;j=j+2){
	
	if(arr[i][0]%j==0){
		c+=arr[i][0]/j;
	}
	else{
		c+=arr[i][0];
	}
	if(arr[i][1]%j==0){
		d+=arr[i][1]/j;
	}
	else{
		d+=arr[i][1];
	}
	
	
	}
	s=c*d;
	if(s>arr[i][2]){
		printf("YES");
		break;
	}
	else{
		printf("NO");
		break
	}
}
     
	
	
	
}
