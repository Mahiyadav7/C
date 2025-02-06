#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr=(int*)malloc(sizeof(int));
    int a=5;
    ptr=&a;
    free(ptr);
      printf("address of a:%d",&a);
    printf("After delallocting the memory(*ptr):%d",ptr);
    return 0;
}