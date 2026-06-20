//WAP to find row wise sum of a matrix
#include <stdio.h>
int main() {
    int a[100][100],r,c,sum;
    printf("enter the order of matrix\n");
    scanf("%d%d",&r,&c);
    printf("enter elements\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        sum=0;
        for(int j=0;j<c;j++){
            sum+=a[i][j];
        }
        printf("sum of row %d is %d\n",(i+1),sum);
    }
    return 0;

}