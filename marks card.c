#include<stdio.h>
void main()
{
    int rollno;
    char name[30];
    float sub1,sub2,sub3,sub4,sub5;
    float per,avg;
    float total;

    printf("\n enter the student roll no:");
    scanf("%d",&rollno);
    printf("\n enter the student name:");
    scanf("%s",&name);
    printf("\n enter the marks of maths:");
    scanf("%f",&sub1);
    printf("\n enter the marks of phy:");
    scanf("%f",&sub2);
    printf("\n enter the marks of machenics:");
    scanf("%f",&sub3);
    printf("\nenter the marks of computer:");
    scanf("%f",&sub4);
    printf("\n enter the marks of hve:");
    scanf("%f",&sub5);

    total=sub1+sub2+sub3+sub4+sub5;
    printf("\n the total marks: %2f", total);
    per=(total/500)*100;
    avg=(total/5);
    printf("\n the percentage mark: %2f", per);
    printf("\n the average mark 52f:", avg);

    //grade calculation//
    if(per>=60) printf("\n div :1st");
    else if(per>=50) printf("\n div: 2nd");
    else if (per>40) printf("\n div :3rd");
}