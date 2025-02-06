#include<stdio.h>
int main(){

     int c=0;
    int arr[]={11,22,33,11,44};
    for(int i=0;i<5;i++){
        
        if(arr[i]==11){
            c++;
        }
        else 
        continue;
    }
    printf("11 is present %d times!",c);
    return 0;
}