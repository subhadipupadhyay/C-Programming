#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main() {
    printf("\n\t\t\tWelcome to our number guessing game\n");
    int min = 1, max = 100, guess, count = 0;
    srand(time(NULL));
    int answer = (rand() % max) + min;
    printf("\nGuess a number between %d and %d.\n", min, max);
    do {
        printf("Enter the number guess by the user : ");
        scanf("%d", &guess);
        if (guess < answer) {
            printf("Too low! Try again.\n");
        } else if (guess > answer) {
            printf("Too high! Try again.\n");
        } else {
            printf("Hurray! You guessed it right!\n");
        }
        count++;
    } while (guess != answer);
    printf("You needed %d attempts to guess the number.\n", count);
    if (count == 1) {
        printf("Excellent performance!\n");
    } else if (count <= 5) {
        printf("Brilliant performance!\n");
    } else if (count <= 15) {
        printf("Good performance!\n");
    } else {
        printf("Well, hope you do better next time.\n");
    }
    return 0;
}
