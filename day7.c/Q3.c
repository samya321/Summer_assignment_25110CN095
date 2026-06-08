//WAP to print recursive sum of digits
#include <stdio.h>
int sumdigit(int n) {
    if(n==0) {
        return 0;
    } else {
        return((n%10) + sumdigit(n/10));
    }
}
int main() {
    int n;
    int sumdigit(int n);
    printf("enter the number\n");
    scanf("%d",&n);
    printf("sum of digits of %d is %d",n,sumdigit(n));
    return 0;
}