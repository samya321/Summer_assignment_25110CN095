//WAP to create marksheet generation system
#include <stdio.h>
#include <string.h>
struct student{
    int roll;
    char name[50];
    float marks1;
    float marks2;
    float marks3;
    float total;
    float percentage;
};
int main() {
    struct student s[100];
    int choice;
    int count=0;
    while(1){
       printf("=== MARKSHEET GENERATION SYSTEM ===\n");
       printf("1.Add student\n");
       printf("2.display all\n");
       printf("3.exit\n");
       printf("enter your choice:");
       scanf("%d",&choice);
       if(choice==1){
        if(count>=100){
            printf("system full!!");
            continue;
        } else {
            printf("enter roll number:\n");
            scanf("%d",&s[count].roll);
            printf("enter name:\n");
            scanf("%s",s[count].name);
            printf("enter marks in first subject:\n");
            scanf("%f",&s[count].marks1);
            printf("enter marks in second subject:\n");
            scanf("%f",&s[count].marks2);
            printf("enter marks in third subject:\n");
            scanf("%f",&s[count].marks3);
            s[count].total= s[count].marks1+ s[count].marks2+ s[count].marks3;
            s[count].percentage=(s[count].total/300)*100;
            count++;
            printf("student added successfully!!");
        }
       } else if(choice==2){
        if(count==0){
            printf("no records found!!");
        } else {
            for(int i=0;i<count;i++){
                printf("roll number:%d| name:%s| marks1:%f| marks2:%f| marks3:%f| total:%f| percentage:%f\n",s[i].roll,s[i].name,s[i].marks1,s[i].marks2,s[i].marks3,s[i].total,s[i].percentage);

            }
        }
       } else if(choice==3){
        printf("exiting..");
        break;
       } else {
        printf("invalid choice");
       }
    }
    return 0;
}