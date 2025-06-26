#include<stdio.h>
int main(){
    int i,j,a[3][3],b[3][3],c[3][3];
    printf("Element for array a:\n");
    for(i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("Element a[%d][%d]: \n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }}
    printf("Element for array b:\n");
    for(i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("Element a[%d][%d]:\n",i+1,j+1);
            scanf("%d",&b[i][j]);
        }}

    for(i=0;i<3;i++){
        for (j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
        }}
        printf("Elements after sum:\n");
    for(i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
        }
    return 0;
}