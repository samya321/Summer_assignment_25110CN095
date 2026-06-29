//WAP to create employee management system
#include <stdio.h>
#include <string.h>
struct employee{
    int id;
    char name[50];
    char designation[50];
};
int main() {
    struct employee emp[100];
    int choice;
    int count=0;
    while(1){
        printf("\n=== EMPLOYEE MANAGEMENT SYSTEM ===\n");
        printf("1.Add an employee\n");
        printf("2.display employee\n");
        printf("3.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        if(choice==1){
            if(count>=100){
                printf("system full!!\n");
                continue;
            } else {
                printf("enter ID:\n");
                scanf("%d",&emp[count].id);
                printf("enter name of employee:\n");
                scanf("%s",emp[count].name);
                printf("enter designation:\n");
                scanf("%s",emp[count].designation);
                count++;
                printf("employee added succesfully!!\n");
            }
        } else if(choice==2){
            if(count==0){
                printf("no records found!!\n");
            } else {
                for(int i=0;i<count;i++){
                    printf("ID: %d| name: %s| designation: %s\n",emp[i].id,emp[i].name,emp[i].designation);
                }
            }
        } else if(choice==3){
            printf("exiting...");
            break;
        } else {
            printf("invalid choice");
        }
    }
    return 0;
}