//WAP  to find length of string without using strlen()
#include <string.h>
#include <stdio.h>
int main() {
    char str[100];
    int i=0;
    printf("enter string\n");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        i++;
    }
    printf("length of the string is %d",i);
    return 0;
}