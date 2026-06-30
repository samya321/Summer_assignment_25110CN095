//WAP to create menu driven calculator
#include <stdio.h>
#include <string.h>
int main() {
    int choice;
    int a,b,c;
    float d;
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);
    while(choice!=5){
       printf("\n=== CALCULATOR ===\n");
       printf("1.addition\n");
       printf("2.subtraction\n");
       printf("3.multiplication\n");
       printf("4.division\n");
       printf("5.exit\n");
       printf("enter your choice from 1 to 5: ");
       scanf("%d",&choice);
       switch(choice){
        case 1: c=a+b;
                printf("result of addition= %d",c);
                break;
        case 2: c=a-b;
                printf("result of subtraction=%d",c);
                break;
        case 3: c=a*b;
                printf("result of multiplication=%d",c);
                break;
        case 4: if(b!=0){
                  d=(float)a/b;
                  printf("result of division=%f",d);
                } else {
                    printf("division not possible\n");
                }
                break;
        case 5: printf("exiting...\n");
                break;
        default: printf("invalid choice!!\n");
                 break;
       }
    }
    return 0;
}