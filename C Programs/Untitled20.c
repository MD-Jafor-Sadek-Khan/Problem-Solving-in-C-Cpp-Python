#include<Stdio.h>


int main(){

int arr[3][3];
int sum=0;
int flag=1;
int sum2=0,sum3=0;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){

        scanf("%d",&arr[i][j]);
        if(i==0){
           sum+=arr[0][j];

        }




    }



}
printf("sum = %d\n",sum);
for(int z=0;z<=3;z++){

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){


         if(z==0){

            sum2=sum2+arr[i][j];
            if(j==2){
                if(sum2!=sum){
                    printf("in z=0 i=%d j=%d   sum2 = %d\n",i,j,sum2);
                    flag=0;
                }
                sum2=0;
                continue;
            }

         }
         else if(z==1){



            sum2=sum2+arr[j][i];
            if(j==2){
                if(sum2!=sum){
                    printf("in z=1 i=%d j=%d   sum2 = %d\n",i,j,sum2);
                    flag=0;
                }
                sum2=0;
                continue;
            }





         }

         else if(z==2){

            if(i==j){
                sum2=sum2+arr[i][j];
            if(i==2 && j==2){
                if(sum2!=sum){
                    printf("in z=2 i=%d j=%d   sum2 = %d\n",i,j,sum2);
                    flag=0;
                }
                sum2=0;
                continue;
            }

            }
         }
         else if(z==3)
            {
            if(i+j==2){
                sum2=sum2+arr[i][j];
            if(i==2 && j==0){
                if(sum2!=sum){
                    printf("in z=3 i=%d j=%d  sum2 = %d\n",i,j,sum2);
                    flag=0;
                }
                sum3=0;
                continue;
            }

            }




         }



        }

    }
}
if(flag==1){

    printf("YES");


}
else{

    printf("NO");
}
}












