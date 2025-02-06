#include<stdio.h>

void naturalSum(int m){
    static int n3=0;
    if(m>0){
        n3=n3+m;
        return naturalSum(m-1);
    }
    printf("sum of %d natural no.:%d",m,n3);
}

int main(){

    int m;
    printf("enter the no. upto which you want to print fibo series:");
    scanf("%d",&m);
   naturalSum(m);
    return 0;
}