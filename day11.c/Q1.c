//WAP to write function to print sum of two numbers
#include <stdio.h>
int main() {
    int a,b,s;
    int sum(int a,int b);
    printf("enter first number\n");
    scanf("%d",&a);
    printf("enter second number\n");
    scanf("%d",&b);
    s=sum(a,b);
    printf("sum of these numbers=%d",s);
    return 0;
}
int sum(int a,int b) {
    return(a+b);
}