#include <stdio.h>
#include <stdlib.h> // Needed for the random number functions
#include <time.h>   // Needed to use the clock for true randomness

int main() {
    int userScore = 0;
    int goalieScore = 0;
    int userChoice, goalieChoice;

    // This makes sure the random numbers are different every time you play
    srand(time(0));

    printf("=== The Final Penalty Shootout ===\n");
    printf("Step up to the spot. You have 5 shots to win the match!\n\n");

    // A 'for' loop is used because we know exactly how many times it should run (5 rounds)
    for (int round = 1; round <= 5; round++) {
        printf("--- Round %d ---\n", round);
        printf("Where are you aiming?\n");
        printf("1. Left Corner\n2. Center\n3. Right Corner\n");
        do {
        printf("Enter your choice (1-3): ");
        scanf("%d", &userChoice);

        if(userChoice < 1 || userChoice > 3)
            printf("Invalid choice! Try again.\n");

        } while(userChoice < 1 || userChoice > 3);

        // The goalkeeper (computer) randomly picks 1, 2, or 3
        goalieChoice = (rand() % 3) + 1;
        if(goalieChoice == 1)
            printf("\nGoalkeeper dived LEFT!\n");
        else if(goalieChoice == 2)
            printf("\nGoalkeeper stayed CENTER!\n");
        else
            printf("\nGoalkeeper dived RIGHT!\n");
        // Input validation: What if the user types 9?
        if (userChoice < 1 || userChoice > 3) {
            printf("\n-> You kicked the ball over the stadium! Wasted shot.\n\n");
            continue; // The 'continue' keyword skips the rest of the code and moves to the next round
        }

        // The logic to check if you scored
        if (userChoice == goalieChoice) {
            printf("\n-> SAVED! The goalkeeper guessed right.\n");
            goalieScore++;
        } else {
            printf("\n-> GOAL!!! A spectacular finish!\n");
            userScore++;
        }
        
        printf("Current Score -> You: %d | Goalkeeper: %d\n\n", userScore, goalieScore);
    }

    // Final Match Results outside the loop
    printf("=== Final Whistle ===\n");
    if (userScore > goalieScore) {
        printf("You win! An absolute masterclass on the pitch.\n");
    } else if (userScore < goalieScore) {
        printf("You lost. Better get back to the training ground.\n");
    } else {
        printf("It's a draw! What a tense match.\n");
    }

    return 0;
}