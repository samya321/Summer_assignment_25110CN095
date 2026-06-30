//WAP to create menu driven string operations system
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int choice;
    printf("\n=== STRING OPERATION SYSTEM ===\n");
    printf("enter string:\n");
    scanf("%s", str);
    while(choice!=5){
        printf("\n==== STRING MENU ====\n");
        printf("1-find length of string\n");
        printf("2-copy the string to another string\n");
        printf("3-concatenate strings\n");
        printf("4-exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        if(choice==1){
            int len=0;
            while(str[len]!='\0'){
                len++;
            }
            printf("length of string is %d",len);
        } else if(choice==2){
            char str1[100];
            int i=0;
            while(str[i]!='\0'){
                str1[i]=str[i];
                i++;
            }
            str1[i]='\0';
            printf("copied successfully!!");
        } else if(choice==3){
            char str2[100];
            printf("enter another string to concatenate:\n");
            scanf(" %s",str2);
            int i=0;
            int j=0;
            while(str2[i]!='\0'){
                i++;
            }
            while(str[j]!='\0'){
                str2[i]=str[j];
                i++;
                j++;
            }
            str2[i]='\0';
            printf("now string:\n");
            printf("%s",str2);
        } else if(choice==4){
            printf("exiting...");
            break;
        } else {
            printf("invalid choice\n");
        }
    }
    return 0;
}