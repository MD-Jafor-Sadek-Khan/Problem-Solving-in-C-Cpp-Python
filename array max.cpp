#include<stdio.h>

int main(){
	int N=6;
	int arr[6];
	
	for(int i=0;i<6;i++){
	
	scanf("%d",&arr[i]);
	
}                                														

int min=arr[0];
int min2;
for(int j=0;j<6;j++){
	
	
	if(min>arr[j]){
		min2=min;
		min=arr[j];
	}
	
	
	
}
printf("%d\n",min2);
	
	
	
}
