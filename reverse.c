#include<stdio.h>
 


 void printArray(int arr[],int len){
    //int len= sizeof(arr) / sizeof(arr[0]);
    printf("original array:\n");
    for(int i=0;i<len;i++){
printf("%d ",arr[i]);
    }
 }
void swap( int arr[],int a,int b){
 int c=arr[a];
   arr[a]=arr[b];
   arr[b]=c;
 
 }
  void reverse(int arr[],int len)
{
    int i=0,j=len-1;
   while(i<j){
    swap(arr,i,j);
    i++;
    j--;
    }


    } 

 int main(){
     int n;
    printf("enter the size of array:");
    scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int len= sizeof(a) / sizeof(a[0]);
 
 printArray(a,len);
 printf("\nreversed array:\n");
reverse(a,len);
printArray(a,len);

    return 0;
 }