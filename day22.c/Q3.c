//WAP to character frequency
#include <string.h>
#include <stdio.h>
int main() {
    char str[100],ch;
    int n,count=0;
    printf("enter a string:\n");
    scanf("%s", str);
    n=strlen(str);
    printf("enter character:\n");
    scanf(" %c",&ch);
    for(int i=0;i<n;i++) {
        if(str[i]==ch){
            count++;
        }
    }
    printf("frequency of %c is %d",ch,count);
    return 0;
}