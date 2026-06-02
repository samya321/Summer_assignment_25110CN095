//WAP to find whether a number is prime or not
#include <stdio.h>
int main () {
    int n,i,c=0;
    printf("enter the number\n");
    scanf("%d",&n);
    for(i=2;i<n;i++) {
        if(n%i==0) {
            c=c+1;
        }
    }
    if (c==0 && n>1) {
        printf("the number is prime number");
    } else {
        printf("the number is not a prime number");
    }
    return 0;
}