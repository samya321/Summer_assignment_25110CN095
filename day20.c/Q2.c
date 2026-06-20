//WAP to check whether the matrix is symmetric or not
#include <stdio.h>
int main() {
    int a[100][100],r,c,b[100][100],t=0;
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
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            if(b[i][j]!=a[i][j]){
                t++;
                break;
            }
        }
    }
    if(t==0){
        printf("it is a symmetric matrix");
    } else {
        printf("not symmetric");
    }
    return 0;
}