#include <stdio.h>
#include <time.h>
#include <stdlib.h>
double Elapsed_Time(clock_t start) {
    return ((double)(clock() - start)) / CLOCKS_PER_SEC;
}
void startQuiz() {
    int score = 0, answer;
    int quizDuration = 40;
    clock_t start_time = clock();

    printf("\n\t\t\tWelcome to the Online Quiz Test!\n");
    printf("\t\t You have a total of %d seconds to complete the quiz.\n", quizDuration);

    printf("\n1. What is the colour of sky?\n");
    printf("1. Red\n2. Blue\n3. Black\n4. Green\n");
    printf("Your Answer: ");
    scanf("%d", &answer);

    if (Elapsed_Time(start_time) > 30) {
        printf("\nTime up! Quiz ended.\n");
        printf("Your Score: %d\n", score);
        return;
    }

    if (answer == 2) {
        score++;
        printf("Correct!\n");
    } else {
        printf("Wrong answer!\n");
    }

    printf("\n2. Which planet is known as the Red Planet?\n");
    printf("1. Venus\n2. Jupiter\n3. Saturn\n4. Mars\n");
    printf("Your Answer: ");
    scanf("%d", &answer);

    if (Elapsed_Time(start_time) > 30) {
        printf("\nTime up! Quiz ended.\n");
        printf("Your Score: %d\n", score);
        return;
    }

    if (answer == 4) {
        score++;
        printf("Correct!\n");
    } else {
        printf("Wrong answer!\n");
    }

    printf("\n3. Which company developed the iPhone?\n");
    printf("1. Apple\n2. Microsoft\n3. Samsung\n4. Sony\n");
    printf("Your Answer: ");
    scanf("%d", &answer);

    if (Elapsed_Time(start_time) > 30) {
        printf("\nTime up! Quiz ended.\n");
        printf("Your Score: %d\n", score);
        return;
    }

    if (answer == 1) {
        score++;
        printf("Correct!\n");
    } else {
        printf("Wrong answer!\n");
    }
    
    printf("\n4. Which continent is the Sahara Desert located in?\n");
    printf("1. Asia\n2. South America\n3. Africa\n4. Australia\n");
    printf("Your Answer: ");
    scanf("%d", &answer);

    if (Elapsed_Time(start_time) > 30) {
        printf("\nTime up! Quiz ended.\n");
        printf("Your Score: %d\n", score);
        return;
    }

    if (answer == 3) {
        score++;
        printf("Correct!\n");
    } else {
        printf("Wrong answer!\n");
    }

    printf("\nQuiz Finished!\n");
    printf("Your Score: %d/4\n", score);
    if (score == 4) {
        printf("Excellent!\n");
    }else if (score == 3) {
        printf("Brilliant!\n");
    }else if (score == 2) {
        printf("Good Job!\n");
    } else {
        printf("Better Luck Next Time!\n");
    }
    printf("\nThank you for giving the test!\n");
}

int main() {
    startQuiz();
    return 0;
}
