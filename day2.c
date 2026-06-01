#include <stdio.h>
int main() {
    //WAP to find sum of digits of a number
    int n1,r1,sum=0;
    printf("enter the number\n");
    scanf("%d",&n1);
    while(n1>0) {
        r1=n1%10;
        sum=sum+r1;
        n1=n1/10;
    }
    printf("sum of digits of the number=%d\n",sum);


    //WAP to reverse a number
    int n2, r2, rev=0;
    printf("enter the number you want to reverse\n");
    scanf("%d",&n2);
    while(n2>0) {
        r2=n2%10;
        rev=rev*10 + r2;
        n2=n2/10;
    }
    printf("reversed number=%d\n",rev);
    

    //WAP to find the product of digits of a number
    int n3,r3,pro=1;
    printf("enter the number\n");
    scanf("%d",&n3);
    while(n3>0) {
        r3=n3%10;
        pro=pro*r3;
        n3=n3/10;
    }
    printf("product of the digits of number=%d\n",pro);


    //WAP to find whether a number is palindrome or not
    int n4,r4,original,rev1=0;
    printf("enter the number\n");
    scanf("%d",&n4);
    original=n4;
    while(n4>0) {
        r4=n4%10;
        rev1=rev1*10 + r4;
        n4=n4/10;
    }
    if(rev1==original) {
        printf("yes,the number is palindrome");
    } else {
        printf("no, the number is not palindrome");
    }
    return 0;
}