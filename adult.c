#include<stdio.h>
int main()
{
    int age;
    printf("enetr age:");
    scanf("%d",&age);

    if(age>18){
        printf(" adult\n ");
        printf(" they can drive\n ");
        printf(" they can vote\n ");
        printf(" they can do love marriage\n ");
        printf(" they can do love\n ");
    }

    else{
        printf(" not adult\n ");
        printf(" they can not drive\n ");
        printf(" they can not vote\n ");
        printf(" they can not do love marriage\n  ");
        printf(" they can not do love\n ");
    }
    return 0;
}