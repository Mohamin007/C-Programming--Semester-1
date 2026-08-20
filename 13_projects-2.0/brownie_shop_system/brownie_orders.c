#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare a File Pointer
    FILE *orderFile;
    
    char customerName[50];
    int quantity;
    float pricePerBatch = 450.00;
    float totalCost;
    int addAnother;

    printf("=== The Brownie Makers: Order System ===\n");

    // 2. Open the file in "Append" mode ("a")
    // If the file doesn't exist, C will create it automatically.
    orderFile = fopen("orders_log.txt", "a");

    if (orderFile == NULL) {
        printf(">> FATAL ERROR: Could not open file to save orders.\n");
        return 1; // Exit the program with an error code
    }

    do {
        printf("\nEnter Customer Name: ");
        scanf(" %s", customerName);

        do {
            printf("Enter quantity of brownie batches: ");
            if(scanf("%d", &quantity) != 1){
                printf("Invalid input!\n");
                return 1;
            }
            
            if (quantity <= 0) {
                printf(">> ERROR: Quantity must be at least 1. Please try again.\n");
            }
        } while (quantity <= 0);

        // Calculate total
        totalCost = quantity * pricePerBatch;

        // Write the data into the file instead of the screen
        fprintf(orderFile, "Customer: %s | Batches: %d | Total: Rs.%.2f\n", customerName, quantity, totalCost);
        printf("-> Success! Order for %s saved to database.\n", customerName);

        // Ask if the user wants to log another order
        do {
            printf("\nLog another order? (1 for Yes, 0 for No): ");
            scanf("%d", &addAnother);
            if(addAnother != 0 && addAnother != 1) {
                printf(">> ERROR: Please enter exactly 1 or 0.\n");
            }
        } while (addAnother != 0 && addAnother != 1);

    } while (addAnother == 1);

    // 5. Close the file to lock in the saves and free up memory
    fclose(orderFile);
    
    printf("\n=== System Offline. All orders secured in 'orders_log.txt' ===\n");

    return 0;
}