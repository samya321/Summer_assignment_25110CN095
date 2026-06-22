//WAP to check palindrome string
#include <string.h>
#include <stdio.h>
int main() {
    char str[100],str1[100];
    int i;
    printf("enter string:\n");
    scanf("%s",str);
    strcpy(str1,str);
    strrev(str1);
    i=strcmp(str,str1);
    if(i==0){
        printf("yes the string is palindrome");
    } else {
        printf("not palindrome");
    }
    return 0;
}