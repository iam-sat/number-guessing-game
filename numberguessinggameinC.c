#include<stdio.h>
#include<stdlib.h> 
#include<time.h> 
int main() {
    int number, guess, attempts=1;
    srand(time(0));
    number= rand()%100 + 1;  
    printf("---------------WELCOME--------------\n");
    printf("----------NUMBER GUESSING GAME----------\n");
    do {
        printf("GUESS A NUMBER BETWEEN 1 TO 100 : ");
        scanf("%d",&guess);
        if (guess>number)
        {
            printf("You have entered higher number please choose something smaller\n");
        }
        else if (guess<number)
        {
            printf("You have entered lower number please choose something higher\n");
        }
        else
        {
            printf("Congratulations You Have Guessed It Right in %d chances\n", attempts);
        }
        attempts++;
    } while (guess!=number); 
    printf("Thanks for playing this game\n");
    printf("THE END\n");
    printf("Created By SAT\n");
    return 0;
}