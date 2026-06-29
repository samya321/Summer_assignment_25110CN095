//WAP to create salary management system
#include <stdio.h>
#include <string.h>
struct employee {
    int id;
    char name[50];
    float base_salary;
    float allowances;
    float deductions;
    float net_salary;
};
int main() {
    struct employee emp[100];
    int choice;
    int count=0;
    while(1){
        printf("=== SALARY MANAGEMENT SYSTEM ===\n");
        printf("1.Add employee\n");
        printf("2.display all\n");
        printf("3.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        if(choice==1){
            if(count>=100){
                printf("system full!!");
                continue;
            } else{
                printf("enter ID:\n");
                scanf("%d",&emp[count].id);
                printf("enter name:\n");
                scanf("%s",emp[count].name);
                printf("enter base salary:\n");
                scanf("%f",&emp[count].base_salary);
                printf("enter allowances:\n");
                scanf("%f",&emp[count].allowances);
                printf("enter deductations:\n");
                scanf("%f",&emp[count].deductions);
                emp[count].net_salary= emp[count].base_salary + emp[count].allowances - emp[count].deductions;
                count++;
                printf("employee added successfully!!");
            }
        } else if(choice==2){
            if(count==0){
                printf("no records found!!\n");
            } else {
                for(int i=0;i<count;i++){
                   printf("ID:%d| name:%s| base:%f| allowance:%f| deduction:%f| net:%f\n",emp[i].id,emp[i].name,emp[i].base_salary,emp[i].allowances,emp[i].deductions,emp[i].net_salary);
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