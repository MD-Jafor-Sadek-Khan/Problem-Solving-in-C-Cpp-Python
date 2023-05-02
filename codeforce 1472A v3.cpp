#include<stdio.h>

int main(){
	int t,c=1;
	scanf("%d",&t);
	int arr[t][3];
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			scanf("%d",&arr[i][j]);
		
	}
	}
	
	for(int i=0;i<t;i++){
		for(int j=0;j<2;j++){
			for(int z=3;z<=7;z=z+2){
				if(arr[i][j]%z==0){
					
					c*=arr[i][j]/z;
				}
				else{
					c*=arr[i][j];
				}
				
				
				
			}
			
		}
		if(c>=arr[i][2]){
			printf("YES");
		}
		else{
			if(arr[i][0]%2==1 && arr[i][1] || c<arr[i][2]){
				printf("NO");
			}
		}
	}
	
	
}
