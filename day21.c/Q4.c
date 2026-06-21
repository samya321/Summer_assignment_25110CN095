//WAP to convert lowercase to uppercase
#include <string.h>
#include <stdio.h>
int main() {
    char str[100];
    int i=0;
    printf("enter string in lower case:\n");
    scanf("%s",str);
    printf("string in upper case:\n");
    while(str[i]!='\0'){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
        printf("%c",str[i]);
        i++;
    }
    return 0;
}