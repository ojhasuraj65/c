#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    char course[20];
    int marks;
}
s1;
int main()
{
    printf("\n enter the student roll number:");
    scanf("%d",&s1.rollno);
    printf("\n enter the student name:");
    scanf("%s",s1.name);
    fflush (stdin);
    printf("\n enter the student course:");
    scanf("%s",s1.course);
    printf("\n enter the student mark obtained:");
    scanf("%d",&s1.marks);
    printf("\n data entery is complete:");
    printf("\n\n the data entered is as follows:");
    printf("\n the student roll no is %d",s1.rollno);
    printf("\n the student name is:%s",s1.name);
    printf("\n the student course is:%s",s1.course);
    printf("\n mark obtained by student is:%d",s1.marks);
    return 0;
}