//WAP to print recursive factorial
#include <stdio.h>
int factorial(int n) {
    if(n==0 || n==1){
        return 1;
    } else {
        return(n* factorial(n-1));
    }

}
int main() {
    int n;
    int factorial(int n);
    printf("enter the number\n");
    scanf("%d",&n);
    printf("factorial is %d",factorial(n));
    return 0;
}