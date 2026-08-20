// File: atm_simulation.c
// Topic: Mini Project — ATM Machine Simulation
// Category: Projects
// Course: Introduction to C Programming — Semester 1, Kashmir University

// simulates a basic ATM — deposit, withdraw, check balance
// used a do-while loop to keep showing the menu until user exits
// PIN is hardcoded to 1234 for now

#include<stdio.h>

int main() {
    int pin;
    int correctPin = 1234;
    float balance = 5000.0;
    int attempts = 0;

    printf("=== ATM Machine ===\n");

    // give 3 attempts for PIN
    do {
        printf("Enter PIN: ");
        scanf("%d", &pin);
        attempts++;
        if (pin != correctPin && attempts < 3) {
            printf("Wrong PIN. %d attempt(s) left.\n", 3 - attempts);
        }
    } while (pin != correctPin && attempts < 3);

    if (pin != correctPin) {
        printf("Card blocked. Too many wrong attempts.\n");
        return 0;
    }

    printf("PIN correct. Welcome!\n");

    int choice;
    float amount;

    do {
        printf("\n1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Balance: Rs. %.2f\n", balance);
        } else if (choice == 2) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance += amount;
            printf("Deposited Rs. %.2f. New balance: Rs. %.2f\n", amount, balance);
        } else if (choice == 3) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > balance) {
                printf("Insufficient balance\n");
            } else {
                balance -= amount;
                printf("Withdrew Rs. %.2f. Remaining: Rs. %.2f\n", amount, balance);
            }
        } else if (choice == 4) {
            printf("Thank you. Goodbye!\n");
        } else {
            printf("Invalid option\n");
        }

    } while (choice != 4);

    return 0;
}
