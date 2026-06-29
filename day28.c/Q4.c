//WAP to create contact management system
#include <stdio.h>
#include <string.h>
struct contact{
    char name[50];
    char phone[15];
    char email[50];
};
int main() {
    struct contact c[100];
    int count=0;
    int choice;
    while(1){
        printf("=== CONTACT MANAGEMENT SYSTEM ===\n");
        printf("1.add contact\n");
        printf("2.display all contacts\n");
        printf("3.remove contact\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        if(choice==1){
            if(count>=100){
              printf("system full!!\n");
              continue;
            } else {
              printf("enter the name:\n");
              scanf("%s", c[count].name);
              printf("enter phone number:\n");
              scanf(" %s",c[count].phone);
              printf("enter email:");
              scanf("%s", c[count].email);
              count++;
              printf("contact added successfully!!\n");
            }
        } else if(choice==2){
            if(count==0){
                printf("no records found!!\n");
            } else {
                for(int i=0;i<count;i++){
                    printf("name:%s| phone:%s| email:%s\n",c[i].name,c[i].phone,c[i].email);
                }
            }
        } else if(choice==3){
            if(count==0){
                printf("no records found!!\n");
            } else {
                char name[50];
                int found=0;
                printf("enter the name whose contact you want to remove:\n");
                scanf("%s", name);
                for(int i=0;i<count;i++){
                    if(strcmp(c[i].name,name)==0){
                        found=1;
                        for(int j=i;j<count;j++){
                            c[j]=c[j+1];
                        }
                        count--;
                        printf("contact deleted!!\n");
                        break;
                    }
                    if(!found){
                        printf("contact not found\n");
                    }
                }
            }
        } else if(choice==4){
            printf("exiting..");
            break;
        } else {
            printf("invalid choice!!\n");
        }
    }
    return 0;
}