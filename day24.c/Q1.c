//WAP to check string rotation
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main() {
    char str[100],str1[100],t[200];
    printf("enter the string\n");
    scanf("%s", str);
    printf("enter another string\n");
    scanf(" %s",str1);
    if(strlen(str)!=strlen(str1)){
        printf("not rotation");
        exit(0);
    }
    strcat(t,str);
    strcat(t,str);
    if(strstr(t,str1)!=NULL){
        printf("yes, it is a rotation");
    } else {
        printf("not rotation");
    }
    return 0;
}