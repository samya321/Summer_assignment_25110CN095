//WAP to reverse the string
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("enter string:\n");
    scanf("%s",&str);
    printf("reverse of string is:\n");
    for(int i=strlen(str)-1;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}