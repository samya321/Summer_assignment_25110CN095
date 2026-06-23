//WAP to find first non repeating character
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("enter the string:\n");
    scanf("%s", str);
    printf("first non repeating character:\n");
    for(int i=0;str[i]!=0;i++){
        if(strchr(str,str[i])==strrchr(str,str[i])){
            printf("%c",str[i]);
            break;
        }
    } 
    return 0;
}