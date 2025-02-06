#include<stdio.h>
#include<string.h>
 int maxarrayy(int arr[]){
   int len=5;
   int max=0;
    for(int i=0;i<len;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        
    }
    return max;
 }

 int minarray(int arr[]){
      
      int len=5;
      int min;
      for(int i=0;i<len;i++){
        for(int j=1;j<i;j++)
        if(arr[i]>arr[j]){
            min=arr[j];
        }
      }
      return min;
 }

 int main(){
    int arr[]={4,7,2,1,9};
    int max=maxarrayy(arr);
    int min=minarray(arr);
    printf("maximum no. in arr:%d\n",max);
    printf("minimum no. in arr:%d\n",min);
    return 0;
 }