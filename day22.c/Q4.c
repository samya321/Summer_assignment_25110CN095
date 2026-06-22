//WAP to remove spaces from string
#include <string.h>
#include <stdio.h>
int main() {
    char str[100],str1[100];
    int n,j=0;
    printf("enter the string:\n");
    scanf("%[^\n]s", str);
    n=strlen(str);
    for(int i=0;i<n;i++){
        if(str[i]!=' '){
            str1[j]=str[i];
            j++;
        }
    }
    printf("now string:\n");
    printf("%s",str1);
    return 0;
}