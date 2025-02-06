#include<stdio.h>
/*int inputArray(int n){
    int i;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements in array:\n");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    return arr;

}*/

void insertElement(int arr[],int pos,int n ,int x){
int arr2[n+1];
int i;
         for(i=pos+1;i<n+1;i++){
          arr2[i]=arr[i-1];
         }
         for(i=0;i<=pos;i++){
            if(i==pos)
            arr2[i]=x;
            else{
                arr2[i]=arr[i];
            }
         }
         printf("array after insertion:\n");
         for(i=0;i<n+1;i++){
            printf("%d  ",arr2[i]);
         }
}

int main(){
    int n,i;
    printf("enter the size of array:");
    scanf("%d",&n);
  
    int arr[n];
    printf("enter elements in array:\n");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
int x,pos;
   printf("enter the value and postion of the element you would like to insert respectively:\n");
   scanf("%d",&x);
    scanf("%d",&pos);
   insertElement(arr,pos,n,x);
return 0;
}