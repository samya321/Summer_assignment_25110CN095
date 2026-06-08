//WAP to print recursive fibonacci
#include <stdio.h>
int fibo(int n) {
    if(n==1) {
        return 0;
    } else if(n==2) {
        return 1;
    } else {
        return( fibo(n-1) + fibo(n-2));
    }
}
int main() {
    int n,i;
    int fibo(int n);
    printf("enter the limit of fibonacci series\n");
    scanf("%d",&n);
    printf("fibonacci series:\n");
    for(i=1;i<=n;i++) {
        printf("%d\n",fibo(i));
    }
    return 0;
}