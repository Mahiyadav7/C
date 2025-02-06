#include<stdio.h>

void fibonacci(int m){
    static int n1=0,n2=1,n3;
    if(m>0){
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d ",n3);
        return fibonacci(m-1);
    }
}

int main(){

    int m, n=0,n1=1;
    printf("enter the no. upto which you want to print fibo series:");
    scanf("%d",&m);
    printf("fibonacci series:\n");
    printf("%d %d ",n,n1);
    fibonacci(m-2);
    return 0;
}