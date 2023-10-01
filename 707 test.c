#include<stdio.h>

int main(){
	int m,n,c=0;
	scanf("%d%d",&n,&m);

    int f=n*m;

	char z;
	for(int i=1;i<=f;i++){


			scanf("%s",&z);

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
