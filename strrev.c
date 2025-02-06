#include<stdio.h>
#include<string.h>
int main(){
    char str[]="mahi";
    char str2[10];
    strcpy(str2,str);
    strrev(str2);
    printf("reverse of %s is:%s",str,str2);
}