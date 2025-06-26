#include<stdio.h>
union unionjob
{
    char name[32];
    float salary;
    int workno;
}
ujob;
struct structjob
{
    char name[32];
    float salary;
    int workno;
}
sjob;
int main()
{

    printf("\n size of union = %d bytes",sizeof (ujob));
    printf("\n size of structure = %d bytes",sizeof(sjob));

    return 0;
}