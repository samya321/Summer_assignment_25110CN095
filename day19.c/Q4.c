//WAP to find the sum of diagonal elements of matrix
#include <stdio.h>
int main() {
    int a[100][100],sum=0,r,c;
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
            if(i==j){
                sum=sum+a[i][j];
            }
        }
    }
    printf("sum of diagonal elements=%d",sum);
    return 0;
}