//WAP to count vowels and consonants in a string
#include<stdio.h>
int main() {
    char str[100];
    int countv=0,countc=0,i=0;
    printf("enter the string:\n");
    scanf("%s",str);
    while(str[i]!='\0'){
       if(str[i]=='a'|| str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'){
         countv++;
       } else {
         countc++;
       }
       i++;
    }
    printf("there are %d vowels and %d consonants",countv,countc);
    return 0;
}