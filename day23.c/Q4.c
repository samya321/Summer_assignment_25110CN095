//WAP to find maximum occuring character
#include <string.h>
#include <stdio.h>
int main() {
    char str[100],maxelement;
    int count,maxcount=0;
    printf("enter the string:\n");
    scanf("%s", str);
    for(int i=0;i<strlen(str);i++){
        count=0;
        for(int j=0;j<strlen(str);j++){
            if(str[i]==str[j]){
                count++;
            } 
        }
        if(count>maxcount){
            maxcount=count;
            maxelement=str[i];
        }
    }
    printf("maximum occuring character is %c",maxelement);
    return 0;
}