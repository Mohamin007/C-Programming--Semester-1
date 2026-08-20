#include <stdio.h>

int main() {
    int totalCalories = 0;
    printf("=== Daily Calorie Tracker ===\n");
    int target;
    do {
    printf("Enter your target calories: ");
    scanf("%d", &target);
    if(target <= 0)
        printf("Target calories must be positive.\n");

    } while(target <= 0);
    int n;
    do
    {   
        printf("Enter number of meals taken today: ");
        scanf("%d", &n);
        if(n <= 0 || n >= 20){
            
            printf("\nPlease enter between 1 and 20 meals.\n");
        }
    } while (n <= 0 || n >= 20);
    
    int meals[n]; 
    
    printf("Goal: Hit %d calories today to stay on track!\n\n", target);

    // 2. Using a 'for' loop to fill the array
    for (int i = 0; i < n; i++) {
        printf("\nEnter calories for Meal %d: ", i + 1);
        scanf("%d", &meals[i]);
        if(meals[i] < 0)
        {
        printf("Calories cannot be negative.\n");
        printf("Please enter a positive number!");
        i--;
        continue;
        }
        else{
            totalCalories = totalCalories + meals[i]; // Add the current meal's calories to our running total
        }   
    }

    printf("\n--- Daily Summary ---\n");
    
    // 3. Using another 'for' loop to read data out of the array
    for (int i = 0; i < n; i++) {
        printf("Meal %d: %d kcal\n", i + 1, meals[i]);
    }

    printf("---------------------\n");
    printf("Total Calories Consumed: %d kcal\n", totalCalories);

    // 4. Final check against the goal
    if (totalCalories >= target) {
        printf("Goal achieved! Excellent work on the bulk today.\n");
    } else {
        printf("You are %d calories short. Time for a high-calorie snack!\n", target - totalCalories);
    }

    return 0;
}