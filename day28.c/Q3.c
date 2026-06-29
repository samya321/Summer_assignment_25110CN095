//WAP to create ticket booking system
#include <stdio.h>
#include <string.h>
struct ticket{
    int id;
    char name[50];
    char status[50];
};
int main() {
    struct ticket t[100];
    int count=0;
    int choice;
    while(1) {
        printf("=== TICKET BOOKING SYSTEM ===\n");
        printf("1.raise a ticket\n");
        printf("2.display all tickets\n");
        printf("3.resolve a ticket\n");
        printf("4.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        if(choice==1){
            if(count>=100){
                printf("system full!!\n");
            } else {
                printf("enter ticket ID:\n");
                scanf("%d",&t[count].id);
                printf("enter name of customer:\n");
                scanf("%s",t[count].name);
                strcpy(t[count].status,"open");
                count++;
                printf("ticket raised successfully!!\n");
            }
        } else if(choice==2){
            if(count==0){
                printf("no records found!!\n");
            } else {
                printf("\n--- LIST ---\n");
                for(int i=0;i<count;i++){
                    printf("ID:%d| name:%s| status:%s\n",t[i].id,t[i].name,t[i].status);
                }
            }
        } else if(choice==3){
            if(count==0){
                printf("no records found!!\n");
            } else {
                int searchid,i;
                int found=0;
                printf("enter ticket id to resolve:\n");
                scanf("%d",&searchid);
                for(i=0;i<count;i++){
                   if(t[i].id==searchid){
                     printf("ticket found!!\n");
                     found=1;
                     if( strcmp(t[i].status,"resolved")==0){
                        printf("ticket is already resolved\n");
                     } else {
                        strcpy(t[i].status,"resolved");
                        printf("ticket resolved successfully!!\n");
                     }
                     break;
                   }
                   if(found==0){
                    printf("ticket not found!!\n");
                   }
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