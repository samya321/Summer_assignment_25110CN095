//WAP to print nth term of fibonacci series
#include <stdio.h>
int main() {
    int i,t,t1,t2,next;
    t1=0;
    t2=1;
    printf("enter the term number\n");
    scanf("%d",&t);
    printf("the %dth term of fibonacci series is\n" ,t);
    if (t==1) {
        printf("%d",t1);
    } else if(t==2) {
        printf("%d",t2);
    } else {
        for(i=3;i<=t;i++) {
            next=t1+t2;
            t1=t2;
            t2=next;
            if(i==t) {
                printf("%d",next);
            }
        }
    }
    return 0;
}