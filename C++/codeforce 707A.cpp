#include<stdio.h>

int main(){
	int m,n,b=0,c=0;
	scanf("%d%d",&n,&m);
	n*=2;
    int f=n*m;
	
	int z;
	for(int i=1;i<=f;i++){
		
			
			scanf("%c",&z);
			
				if(z==67 || z==77 || z==89 ){
				c++;
				
			}
		
		}
		
	
	if(c>0){
			printf("#Color");
		}
		else{
		    printf("#Black&White");	
		}
	
	
	
	
	
	
}
