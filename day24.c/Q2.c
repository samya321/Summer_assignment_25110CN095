//WAP to compress a string
#include <stdio.h>
#include <string.h>
int main() {
    char str[100],str1[100];
    int count=1,k=0;
    printf("enter the string:\n");
    scanf("%s", str);
    for(int i=0;i<strlen(str);i++){
        if(i<strlen(str)-1 && str[i]==str[i+1]){
                count++;
        } else {
           str1[k]=str[i];
           k++;
           str1[k]='\0';
           char countstr[20];
           sprintf(countstr, "%d", count);
           strcat(str1,countstr);
           k=strlen(str1);
           count=1;
        }
    }
    printf("compressed string:\n");
    printf(" %s",str1);
    return 0;
}