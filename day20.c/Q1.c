//WAP to multiply matrices
#include <stdlib.h>
#include <stdio.h>
int main() {
    int a[100][100],r1,c1,b[100][100],r2,c2,c[100][100];
    printf("enter the order of first matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("enter the order of second matrix\n");
    scanf("%d%d",&r2,&c2);
    if(r2!=c1){
        printf("multiplication not possible");
        exit(0);
    }
    printf("enter elements for first matrix\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter elements for second matrix\n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            c[i][j]=0;
            for(int k=0;k<c1;k++){
              c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("matrix after multiplication\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d",c[i][j]);
        }
    }
}