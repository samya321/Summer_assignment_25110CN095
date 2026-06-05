//WAP to convert binary to decimal
#include <stdio.h>
#include <math.h>
int main() {
    int binary,d=0,decimal=0,r;
    printf("enter the binary number\n");
    scanf("%d",&binary);
    while(binary>0){
        r=binary%10;
        decimal=decimal+(r*pow(2,d));
        d++;
        binary=binary/10;
    }
    printf("decimal equivalent=%d",decimal);
    return 0;
}