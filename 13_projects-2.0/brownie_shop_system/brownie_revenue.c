#include <stdio.h>

int main() {
    FILE *orderFile;
    
    char name[50];
    int qty;
    float cost;
    
    int totalBatches = 0;
    float totalRevenue = 0.0;
    int orderCount = 0;

    printf("\n=== The Brownie Makers: Revenue Analyzer ===\n");

    // 1. Open the file in "Read" mode ("r")
    orderFile = fopen("orders_log.txt", "r");

    if (orderFile == NULL) {
        printf(">> ERROR: 'orders_log.txt' not found. Have you logged any orders yet?\n");
        return 1; 
    }

    printf("Loading data from database...\n");

    // 2. The Extraction Loop
    // fscanf reads the file looking for an EXACT pattern. 
    // It returns the number of variables it successfully filled (we want 3).
    while (fscanf(orderFile, "Customer: %s | Batches: %d | Total: Rs.%f\n", name, &qty, &cost) == 3) {
        
        // Accumulate the data
        orderCount++;
        totalBatches = totalBatches + qty;
        totalRevenue = totalRevenue + cost;
    }

    // 3. Close the file immediately after reading
    fclose(orderFile);

    // 4. Generate the Final Report
    if (orderCount == 0) {
        printf(">> Alert: The database is empty or the data format is corrupted.\n");
    } else {
        printf("--- Daily Analytics Report ---\n");
        printf("Total Orders Processed: %d\n", orderCount);
        printf("Total Batches Sold: %d\n", totalBatches);
        printf("Total Revenue Generated: Rs.%.2f\n", totalRevenue);
        printf("===============================\n");
        printf("Average Order Value: Rs.%.2f\n",(float)totalRevenue / orderCount);
        printf("Average Batches Per Order: %.2f\n",(float)totalBatches / orderCount);
        
        
        // A little conditional logic for business insights
        if (totalRevenue >= 1000.0) {
            printf(">> Outstanding day! Business is booming.\n");
        } else {
            printf(">> Solid effort. Let's push some marketing tomorrow!\n");
        }
    }

    return 0;
}