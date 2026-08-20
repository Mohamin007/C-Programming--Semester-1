#include <stdio.h>

int main() {
    float balance = 1000.00; // Starting with a default balance
    int choice;
    float amount;

    printf("Welcome to the Mohamin Bank ATM!\n");

    // The do-while loop keeps the ATM running until the user wants to leave
    do {
        printf("\n========== ATM MENU ==========\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("==============================\n");
        printf("Enter your choice (1-4): ");
        if(scanf("%d", &choice) != 1){
        printf("Invalid input!\n");
        return 0;
        }

        // The switch statement handles the user's decision
        switch(choice) {
            case 1:
                printf("\n-> Your current balance is: $%.2f\n", balance);
                break;
                
            case 2:
                printf("Enter amount to deposit: $");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance = balance + amount; // Update the balance
                    printf("-> Success! Deposited $%.2f. New balance: $%.2f\n", amount, balance);
                } else {
                    printf("-> Invalid amount. Please enter a positive number.\n");
                }
                break;
                
            case 3:
                printf("\nEnter amount to withdraw: $");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("-> Transaction failed! Insufficient funds.\n");
                } else if (amount <= 0) {
                    printf("-> Invalid amount. Please enter a positive number.\n");
                } else {
                    balance = balance - amount; // Deduct the amount
                    printf("-> Success! Please take your $%.2f. Remaining balance: $%.2f\n", amount, balance);
                }
                break;
                
            case 4:
                printf("\n-> Thank you for using Mohamin Bank. Have a great day!\n");
                break;
                
            default:
                printf("\n-> Invalid choice! Please select an option from 1 to 4.\n");
        }
    } while (choice != 4); // Condition to keep looping

    return 0;
}