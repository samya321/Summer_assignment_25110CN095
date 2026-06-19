//WAP to find transpose of matrix
#include <stdio.h>
int main() {
    int a[100][100],r,c,b[100][100];
    printf("enter the order of matrix\n");
    scanf("%d%d",&r,&c);
    printf("enter the elements\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            b[j][i]=a[i][j];
        }
    }
    printf("transpose of matrix\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d",b[i][j]);
        }
    }
    return 0;
}