//WAP to create ATM simulation
#include <stdio.h>
void checkbalance(float balance);
float depositmoney(float balance);
float withdrawmoney(float balance);
int main() {
    int choice;
    float balance=1000.00;
    int pin=1234;
    int enteredpin;
    int attempts=0;
    printf("=== welcome to the ATM simulation ===\n");
    while(attempts<3){
        printf("enter your 4 digit PIN:\n");
        scanf("%d",&enteredpin);
        if(enteredpin==pin) {
            break;
        } else {
            attempts++;
            printf("incorrect pin! %d attempts remaining\n\n",3-attempts);
        }
    }
    if (attempts==3){
        printf("too many incorrect attempts.card blocked!\n");
        return 0;
    }
    do {
        printf("\n---ATM MAIN MENU---\n");
        printf("1. check balance\n");
        printf("2.deposit money\n");
        printf("3. withdraw money\n");
        printf("4.exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: checkbalance(balance);
            break;
            case 2: balance=depositmoney(balance);
            break;
            case 3: balance=withdrawmoney(balance);
            break;
            case 4: printf("\nthank you for using our ATM!!\n");
            break;
            default: printf("\ninvalid choice!\n");
        }
    } while( choice!=4);
    return 0;
}
void checkbalance(float balance) {
    printf("\n your current balance is:$%f\n",balance);
}
float depositmoney(float balance){
    float amount;
    printf("\nenter amount to deposit:\n $");
    scanf("%f",&amount);
    if(amount<=0){
        printf("invalid amount! deposit must be greater than 0\n");
    } else {
        balance+=amount;
        printf("successfully deposited $%f\n",amount);
        printf("new balance = $%f\n",balance);
    }
    return balance;
}
float withdrawmoney(float balance){
    float amount;
    printf("\nenter amount to withdraw:\n$");
    scanf("%f",&amount);
    if(amount<=0){
        printf("invalid amount! deposit must be greater than 0\n");
    } else if(amount>balance){
        printf("insufficient balance\n");
    } else {
        balance-=amount;
        printf("successfully withdrew $%f\n",amount);
        printf("remaining balance:$%f\n",balance);
    }
    return balance;
}