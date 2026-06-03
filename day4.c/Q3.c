//WAP to check armstrong number
#include <stdio.h>
#include <math.h>
int main () {
    int n,n1,n2,d,r,arm=0;
    d=0;
    printf("enter the number\n");
    scanf("%d",&n);
    n1=n2=n;
    while(n1>0) {
        d++;
        n1=n1/10;
    }
    while(n2>0) {
        r=n2%10;
        arm=arm+pow(r,d);
        n2=n2/10;
    }
    if(n==arm) {
        printf("yes the number is armstrong");
    } else {
        printf("no the number is not armstrong");
    }
    return 0;
}