#include<stdio.h>
struct Student{
    char name[20];
    int roll_no;
    int age;
    float marks;
}std[2];

int main(){

    for(int i=0;i<2;i++){
        printf("enter the name student:");
        scanf("%s",std[i].name);
        printf("enter the roll no  student:");
        scanf("%d",&std[i].roll_no);
        printf("enter the age  student:");
        scanf("%d",&std[i].age);
        printf("enter the total marks  student:");
        scanf("%2f",&std[i].marks);

         printf("name:%s\n",std[i].name);
          printf(" roll no.:%d\n",std[i].roll_no);
           printf("age:%d\n",std[i].age);
            printf(" total marks:%2f\n",std[i].marks);
    }
}