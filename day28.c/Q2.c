//WAP to create bank account system
#include <stdio.h>
#include <string.h>
struct bank{
    int accountnumber;
    char name[50];
    float balance;
};
int main() {
    int count=0;
    int choice;
    struct bank b[100];
    while(1){
        printf("=== BANK MANAGEMENT SYSTEM ===\n");
        printf("1.Create an account\n");
        printf("2.deposit money\n");
        printf("3.withdraw money\n");
        printf("4.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        if(choice==1){
            if(count>=100){
                printf("system full!!\n");
                continue;
            } else {
                printf("enter account number:\n");
                scanf("%d",&b[count].accountnumber);
                printf("enter the name:\n");
                scanf("%s",b[count].name);
                printf("enter initial deposit amount:\n");
                scanf("%f",&b[count].balance);
                count++;
                printf("account created successfully!!\n");
            }
        } else if(choice==2){
            if(count==0){
                printf("no records found!!\n");
            } else {
                float amount;
                int acc,i;
                int found=0;
                printf("enter amount to be deposited: $");
                scanf("%f",&amount);
                printf("enter account number:");
                scanf("%d",&acc);
                if(amount>0){
                    for(i=0;i<count;i++){
                        if(b[i].accountnumber==acc){
                            printf("account found!!\n");
                            found=1;
                            break;
                        } 
                        
                    }
                } else {
                    printf("invalid deposit amount\n");
                }
                if(found==0){
                    printf("invalid account!!\n");
                } else {
                    b[i].balance+=amount;
                    printf("money deposited successfully!!\n");
                }
            }
        } else if(choice==3){
            if(count==0){
                printf("no records found!!\n");
            } else {
                float amount;
                int acc,i;
                int found=0;
                printf("enter amount to withdraw: $");
                scanf("%f",&amount);
                printf("enter account number:");
                scanf("%d",&acc);
                if(amount>0){
                   for(i=0;i<count;i++){
                      if(b[i].accountnumber==acc){
                         printf("account found!!");
                         found=1;
                         break;
                        }
                    }
                } else {
                    printf("invalid amount\n");
                }
                if(found==0){
                    printf("invalid account\n");
                } else {
                    b[i].balance-=amount;
                    printf("money deposited!!\n");
                }
            }
        } else if(choice==4){
            printf("exiting...");
            break;
        } else {
            printf("invalid choice\n");
        }
    }
    return 0;
}