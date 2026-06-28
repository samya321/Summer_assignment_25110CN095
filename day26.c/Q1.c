//WAP to create a number guessing game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int secret_number, guess;
    int attempts=0;
    srand(time(NULL));
    secret_number=(rand() %100) + 1;
    printf("welcome to number guessing game!\n");
    printf("i have chosen a number between 1 and 100\n");
    printf("can you guess what it is?\n\n");
    do{
        printf("enter your guess:\n");
        if(scanf("%d",&guess)!=1){
            while(getchar()!='\n');
            continue;
        }
        attempts++;
        if(guess>secret_number){
            printf("too high! try again.\n\n");
        } else if(guess<secret_number){
            printf("too low! try again.\n\n");
        } else {
            printf("congrats you guessed it right\n");
            printf("the secret number was %d and it took you %d attempts",secret_number,attempts);
        }
    }while(guess!=secret_number);
    return 0;
}