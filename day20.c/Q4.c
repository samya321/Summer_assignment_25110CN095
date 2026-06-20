//WAP to find column wise sum of matrix
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
    for(int i=0;i<c;i++){
        sum=0;
        for(int j=0;j<r;j++){
            sum+=a[j][i];
        }
        printf("sum of column %d is %d\n",(i+1),sum);
    }
    return 0;

}