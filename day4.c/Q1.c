//WAP to print fibonacci series
#include <stdio.h>
int main() {
    int i,n,t1,t2,next;
    t1=0;
    t2=1;
    printf("enter the limit of fibonacci series\n");
    scanf("%d",&n);
    printf("fibonacci series : \n");
    for(i=1;i<=n;i++) {
        if(i==1) {
            printf("%d\n",t1);
        } else if(i==2) {
            printf("%d\n",t2);
        } else {
            next = t1+t2;
            t1=t2;
            t2=next;
            printf("%d\n",next);
        }
    }
    return 0;
}