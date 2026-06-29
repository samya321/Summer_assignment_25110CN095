//WAP to create student management system
#include<stdio.h>
#include<string.h>
struct student{
    int id;
    char name[50];
    float gpa;
};
int main() {
    struct student students[100];
    int count=0;
    int choice;
    while(1){
        printf("\n=== STUDENT MANAGEMENT SYSTEM ===\n");
        printf("1.Add student\n");
        printf("2.display student\n");
        printf("3.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        if(choice==1){
            if(count>=100){
                printf("system full!!\n");
                continue;
            } else {
                printf("enter ID:\n");
                scanf("%d",&students[count].id);
                printf("enter name:\n");
                scanf("%s",students[count].name);
                printf("enter GPA:\n");
                scanf("%f",&students[count].gpa);
                count++;
                printf("student detail added succesfully!!\n");
            }
        } else if(choice==2){
            if(count==0){
                printf("no records found!\n");
                continue;
            } else {
                printf("---STUDENT LIST---\n");
                for(int i=0;i<count;i++){
                    printf("ID:%d|name:%s|GPA:%f\n",students[i].id,students[i].name,students[i].gpa);
                }
            }
        } else if(choice==3){
            printf("exiting...\n");
            break;
        } else {
            printf("invalid choice! try again.\n");
        }
    }
    return 0;
}