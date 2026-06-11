//WAP to write funtion to find factorial
#include <stdio.h>
int main() {
    int n,f;
    int factorial(int);
    printf("enter the number\n");
    scanf("%d",&n);
    f=factorial(n);
    printf("factorial of %d is %d",n,f);
    return 0;
}
int factorial(int n) {
    int i,m=1;
    if(n==0){
        return 1;
    }
    for(i=1;i<=n;i++){
        m=m*i;
    }
    return m;
}