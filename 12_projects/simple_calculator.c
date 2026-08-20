// File: simple_calculator.c
// Topic: Mini Project — Basic Calculator
// Category: Projects
// Course: Introduction to C Programming — Semester 1, Kashmir University

// a simple calculator that keeps running until user wants to exit
// used switch-case here since thats cleaner than a bunch of if-else

#include<stdio.h>

int main() {
    float a, b, result;
    char op;
    char choice;

    printf("=== Simple Calculator ===\n");

    do {
        printf("\nEnter expression (e.g. 5 + 3): ");
        scanf("%f %c %f", &a, &op, &b);

        switch (op) {
            case '+':
                result = a + b;
                printf("Answer: %.2f\n", result);
                break;
            case '-':
                result = a - b;
                printf("Answer: %.2f\n", result);
                break;
            case '*':
                result = a * b;
                printf("Answer: %.2f\n", result);
                break;
            case '/':
                if (b == 0) {
                    printf("Error: cant divide by zero\n");
                } else {
                    result = a / b;
                    printf("Answer: %.2f\n", result);
                }
                break;
            default:
                printf("Unknown operator\n");
        }

        printf("Do another? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Bye!\n");
    return 0;
}
