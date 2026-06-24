//WAP to remove duplicate characters
#include <stdio.h>
#include <string.h>
int main() {
    char str[100],str1[100];
    int n,k=0;
    printf("enter the string:\n");
    scanf("%s", str);
    n=strlen(str);
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<k;j++){
            if(str[i]==str1[j]){
                c=1;
                break;
            }
        }
        if(!c){
          str1[k]=str[i];
          k++;
        }
    }  
    str1[k]='\0';
    printf("now string:\n");
    printf(" %s",str1);
    return 0;
}