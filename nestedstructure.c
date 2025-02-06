#include<stdio.h>
int main(){
    int i;

    struct Student{
        int roll_no;
        char stud_name[20];
        long int  phn;
        float percent;
        struct dob{
            int d,m,y;
        }f;
    };



    struct Student stu={24,"mahi",23456789,{7,12,2005}};
    
       
         printf("student name:%s\n",stu.stud_name);
         printf("student roll no:%d\n",stu.roll_no);
         printf("student phone no:%ld\n",stu.phn);
         printf("student dob :%d-%d-%d\n",stu.f.d,stu.f.m,stu.f.y);
         
    
    return 0;
    
}