//WAP to print reverse number triangle
#include <stdio.h>
int main() {
    int n,i,j;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=n;i>0;i--) {
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}