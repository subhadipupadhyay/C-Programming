#include<stdio.h>
void main() {
    printf("\n\t\t\tSimple Calculator");
    int a, b;
    char option;
    printf("\n\nEnter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    printf("\nPress + for addition...");
    printf("\nPress - for subtraction...");
    printf("\nPress * for multiplication...");
    printf("\nPress / for division...");
    printf("\n\nEnter your choice : ");
    scanf(" %c", &option);

    switch(option) {
        case '+':
            printf("\nAddition is : %d\n", a + b);
            break;
        case '-':
            printf("\nSubtraction is : %d\n", a - b);
            break;
        case '*':
            printf("\nMultiplication is : %d\n", a * b);
            break;
        case '/':
            printf("\nDivision is : %d\n", a/b);
            break;
        default:
            printf("\nEnter a valid operator (+, -, *, /).\n");
    
    }
}
