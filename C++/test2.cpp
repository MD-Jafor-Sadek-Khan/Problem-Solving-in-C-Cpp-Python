#include<stdio.h>


int main(){
	int t=0,c=1,d=1,s=1;
	scanf("%d",&t);
	int arr[t][3];
	
	
	for(int i=0;i<t;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	
	
	
	for(int i=t;i>0;i--){
		if(arr[i][0]%2==1 && arr[i][1]%2==1){
			printf("NO");
		}
	
			
			
	
	else if(arr[i][0]%3==0 || arr[i][0]%7==0 || arr[i][0]%5==0 && arr[i][1]%3==0 || arr[i][1]%7==0 || arr[i][1]%5==0){
	
		if(arr[i][0]%3==0){
			c*=arr[i][0]/3;
		}
		else if(arr[i][0]%5==0){
			c*=arr[i][0]/5;
		}
		else if(arr[i][0]%7==0){
			c*=arr[i][0]/7;
		}
		else if(arr[i][0]%3!=0 && arr[i][0]%7!=0 && arr[i][0]%5!=0){
			c*=arr[i][0];
		}
		
		
		if(arr[i][1]%3==0){
			d*=arr[i][1]/3;
		}
		else if(arr[i][1]%5==0){
			d*=arr[i][1]/5;
		}
		else if(arr[i][1]%7==0){
			d*=arr[i][1]/7;
		}
		else if(arr[i][1]%3!=0 && arr[i][1]%7!=0 && arr[i][1]%5!=0){
				d*=arr[i][1];
		}
		
		
		s=c*d;
	if(s>=arr[i][2]){
		printf("YES\n");
		
	}
	else{
		printf("NO\n");
		
	}	

	
}
	else{
	}
	
	
}
     
	
	
	
}
