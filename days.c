#include<stdio.h>
int main()
{
    int days,month,year;
    printf("enter no of days:");
    scanf("%d",&days);
    month = days/30;
    year = days/360;
    printf("%d no of days are equal to %d month and %d year\n",days,month,year);
    return 0;
}