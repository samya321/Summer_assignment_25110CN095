//WAP to create quiz application
#include <stdio.h>
#include <ctype.h>
int main() {
    char answer1,answer2,answer3;
    int score=0;
    printf("=== SIMPLE C QUIZ ===\n");
    printf("1.what is the size of an 'int' data type in C?\n");
    printf("A. 1 byte\n B. 2 bytes\n C. 4 bytes\nD. 8 bytes\n");
    printf("your answer:\n");
    scanf("%c",&answer1);
    if(toupper(answer1)=='C'){
        printf("correct!\n\n");
        score++;
    } else {
        printf("wrong! correct answer is C.\n\n");
    }
    printf("2.which keyboard is used to prevent modification of a variable?\n");
    printf("A. static\n B. constant\n C. const\nD. volatile\n");
    printf("your answer:");
    scanf(" %c",&answer2);
    if(toupper(answer2)=='C'){
        printf("correct!\n\n");
        score++;
    } else {
        printf("wrong! correct answer is C\n\n");
    }
    printf("3.which function is used to read a character from the keyboard?\n");
    printf("A.printf()\nB. scanf()\nC. main()\nD.exit()\n");
    printf("your answer:\n");
    scanf(" %c",&answer3);
    if(toupper(answer3)=='B'){
        printf("correct!\n\n");
        score++;
    } else {
        printf("wrong! correct answer is B.\n\n");
    }
    printf("--- QUIZ RESULT ---\n");
    printf("you scored %d out of 3!\n",score);
    return 0;
}