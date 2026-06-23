//WAP to check anagram strings
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sortstring(char* str,int n){
    char t;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(str[j]>str[j+1]){
                t= str[j];
                str[j]=str[j+1];
                str[j+1]=t;
            }
        }
    }
}
int main() {
    char str[100],str1[100];
    printf("enter first string:\n");
    scanf("%s", str);
    printf("enter second string:\n");
    scanf(" %s",str1);
    if(strlen(str)!=strlen(str1)){
        printf("not anagram");
        exit(0);
    }
    sortstring(str,strlen(str));
    sortstring(str1,strlen(str1));
    if(strcmp(str1,str)==0) {
        printf("anagram");
    } else {
        printf("not anagram");
    }
    return 0;
    
}