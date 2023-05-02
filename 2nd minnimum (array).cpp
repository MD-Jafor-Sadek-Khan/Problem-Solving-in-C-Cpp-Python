#include<stdio.h>

int main(){
	int N=6;
	int arr[6];
	
	for(int i=0;i<6;i++){
	
	scanf("%d",&arr[i]);
	
}                                													

int min=arr[0];
int min2;
for(int j=1;j<6;j++){
	
	
	
	if(min>arr[j]){
		
		min=arr[j];
	}

	
	
}               
printf("min %d\n",min);  
min2=99999999;                       						     
for(int j=0;j<6;j++){
	
	
	
	if(arr[j]!=min){
		
		if(min2>arr[j]){
		
		min2=arr[j];
	}
}

	
	
}


printf("2nd min %d\n",min2);
	
	
	
}
