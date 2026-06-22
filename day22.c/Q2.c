//WAP to count words in a sentence
#include <string.h>
#include <stdio.h>
int main() {
    char sentence[1000];
    int n,count=0;
    printf("enter a sentence:\n");
    fgets(sentence,sizeof(sentence),stdin);
    n=strlen(sentence);
    if (n>0){
        count =1;
    }
    for(int i=0;i<n;i++){
        if(sentence[i]==' '){
            count++;
        }
    }
    printf("%d number of words are there",count);
    return 0;
}