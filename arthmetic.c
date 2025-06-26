#include<stdio.h>
int main(){
    int n,m,cho;
    printf("Enter two no:\n");
    scanf("%d%d",&n,&m);
    printf("\n1.Multiply\n 2.Divide\n 3.Add\n 4.SUB\n");
    printf("Enter choice");
    scanf("%d",&cho);
    switch(cho){
        case 1:printf("%d",n*m);
        break;
        case 2:printf("%0.3f",n/m);
        break;
        case 3:printf("%d",n+m);
        break;
        case 4:printf("%d",n-m);
        break;
    }

    return 0;
}
