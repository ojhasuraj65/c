#include<stdio.h>
 main()
{
    int pri[5]={2,4,6,8,10};
    int i;
    printf("\n element of pri[1]=%d",pri[0]);
    printf("\n element of pri[1]=%d",pri[1]);
    printf("\n element of pri[1]=%d",pri[2]);
    printf("\n element of pri[1]=%d",pri[3]);
    printf("\n element of pri[1]=%d",pri[4]);
    printf("\n an above element can be printed as:\n\n");
    for(i=0; i<5; i++)
    {
        printf("\n element of pri[%d]=%d",pri[1]);
    }
    getch();
    return 0;
    }