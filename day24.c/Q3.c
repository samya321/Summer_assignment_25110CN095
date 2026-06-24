//WAP to find the longest word
#include <stdio.h>
#include <string.h>
int main() {
    char sentence[100],str[100],maxchar[100];
    int n,count,j=0,maxcount=0;
    printf("enter the sentence:\n");
    scanf("%[^\n]s", sentence);
    n=strlen(sentence);
    for(int i=0;i<n;i++){
        if(sentence[i]==' '){
            continue;
        }
        int j=0;
        count=0;
        while(sentence[i]!=' ' && i<n){
            count++;
            str[j]=sentence[i];
            j++;
            i++;
        }
        str[j]='\0';
        if(count>maxcount){
            maxcount=count;
            strcpy(maxchar,str);
        }
    }
    printf("longest word is\n");
    printf(" %s", maxchar);
    return 0;

}
