//WAP to write function to find maximum
#include <stdio.h>
int main() {
    int a,b,m;
    int max(int,int);
    printf("enter first number\n");
    scanf("%d",&a);
    printf("enter second number\n");
    scanf("%d",&b);
    if(a==b){
        printf("enter unequal numbers\n");
    } else {
        m=max(a,b);
        printf("maximum of %d and %d is %d",a,b,m);
    }
    return 0;
}
int max(int a,int b) {
    if(a>b){
        return a;
    } else {
        return b;
    }

}