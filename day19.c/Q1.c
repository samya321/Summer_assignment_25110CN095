//WAP to add matrices
#include <stdlib.h>
#include <stdio.h>
int main() {
    int a[100][100],b[100][100],r1,c1,r2,c2,c[100][100];
    printf("enter the order of first matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("enter the order of second matrix\n");
    scanf("%d%d",&r2,&c2);
    if(r1!=r2 && c1!=c2){
        printf("addition not possible");
        exit(0);
    }
    printf("enter the elements for first matrix\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements for second matrix\n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%d\n",c[i][j]);
        }
    }
    return 0;
}