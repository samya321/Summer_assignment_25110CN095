//WAP to create voting eligibility system
#include <stdio.h>
int main() {
    int age;
    printf("welcome to voting eligibility system!\n");
    printf("enter your age:\n");
    scanf("%d",&age);
    if(age>=18){
        printf("yes you are eligible to vote!");
    } else {
        printf("no you are not eligible to vote!");
    }
    return 0;
}