#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Declare a 2D array (3 rows, 3 columns). 0 means unexplored.
    int grid[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };
    
    int rowGuess, colGuess;
    int targetRow, targetCol;
    int maxAttempts = 3;

    // Seed the random number generator
    srand(time(0));
    
    // Hide the artifact at a random row (0-2) and column (0-2)
    targetRow = rand() % 3;
    targetCol = rand() % 3;

    printf("\n=== The Grid Explorer ===\n");
    printf("Find the hidden artifact in the 3x3 sector.\n");
    printf("Coordinates range from 0 to 2.\n\n");

    //  The main game loop
    for (int attempt = 1; attempt <= maxAttempts; attempt++) {
        printf("--- Attempt %d of %d ---\n", attempt, maxAttempts);
        
        do {
            printf("Enter row coordinate (0-2): ");
            scanf("%d", &rowGuess);
            
            if (rowGuess < 0 || rowGuess > 2) {
                printf(">> ERROR: Invalid row! Must be between 0 and 2. Recalibrating...\n");
            }
            
        } while (rowGuess < 0 || rowGuess > 2);

        do {
            printf("Enter column coordinate (0-2): ");
            scanf("%d", &colGuess);
            
            if (colGuess < 0 || colGuess > 2) {
                printf(">> ERROR: Invalid column! Must be between 0 and 2. Recalibrating...\n");
            }
        } while (colGuess < 0 || colGuess > 2);
        if(grid[rowGuess][colGuess] == 1)
        {
            printf("You already searched this location!\n\n");
            attempt--;
            continue;
        }


        //  Checking the coordinates against the hidden target
        if (rowGuess == targetRow && colGuess == targetCol) {
            printf("\n>>> SUCCESS! You unearthed the artifact at [%d][%d]! <<<\n", rowGuess, colGuess);
            return 0; // This instantly exits the program because you won
        } else {
            // Mark the spot as dug (using a 1 to represent a dug hole)
            grid[rowGuess][colGuess] = 1;
            printf("Nothing but dirt at [%d][%d]. Keep looking.\n\n", rowGuess, colGuess);
            printf("\nGrid Status:\n");
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    if(grid[i][j] == 0)
                        printf(". ");
                    else
                        printf("X ");
                }
                printf("\n");
            }
        }
    }

    printf("=== GAME OVER ===\n");
    printf("You ran out of attempts. The artifact was hidden at [%d][%d].\n", targetRow, targetCol);

    return 0;
}