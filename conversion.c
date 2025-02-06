#include<stdio.h>
#include<math.h>

int main(){
     
     int i,sum,a=1,n,d;
     printf("enter the binary no. for conversion:\n");
     scanf("%d",&n);

     for(i=0;n>0;i++){
       
       d=n%10;
       n=n/10;
       sum=sum + (d*pow(2,i));
      
     }
     printf("decimal no. of %d is:%d\n",n,sum);
     return 0;
}