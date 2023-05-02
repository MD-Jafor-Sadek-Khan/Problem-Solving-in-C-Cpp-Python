#include<stdio.h>

int main(){
	
	int n,e=0,o=0,c=0;
	int arr[101];
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	
	for(int i=1;i<=n;i++){
		if(arr[i]%2==0){
			e++;
		}
		else{
			o++;
		}
		
	}
		if(o==1){
			for(int i=1;i<=n;i++){
				c++;
				if(arr[i]%2!=0){
					break;
				}
			}
		}
		else{
			for(int i=1;i<=n;i++){
				c++;
				if(arr[i]%2==0){
					break;
				}
			}
		}
		

	
	
	
	printf("%d",c);
}
