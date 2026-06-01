#include <stdio.h>
int main()
{//wap to calculate sum of n numbers
    int i,n1,s=0;
    printf("enter the number whose sum is required\n");
    scanf("%d",&n1);
    for(i=1;i<=n1;i++){
        s=s+i;
    }
    printf("sum of %d natural numbers is %d",n1,s);


//wap to print table of a number
    int j,n2,m=1;
    printf("enter the number whose multiplication table is required\n");
    scanf("%d",&n2);
    for(j=1;j<=10;j++){
        m=n2*j;
        printf("%d * %d = %d",n2,j,m);
    }


//wap to find factorial of a number
    int k,n3,f=1;
    printf("enter the number whose factorial is required\n");
    scanf("%d",&n3);
    for("k=1;k<=n3;k++"){
        f=f*i;
    }
    printf("factorial = %d",f);


//wap to calculate digits in a number

    int n4,d;
    printf("enter the number\n");
    scanf("%d",&n4);
    while(n4>0){
        d++;
        n=n/10;
    }
    printf("digits in the number = %d",d);
    return 0;
}