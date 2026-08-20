# 🥗 Daily Calorie Tracker

A personalized calorie tracking program in C that logs meals, calculates totals, and compares against a daily target.

## 💡 What It Does

- User sets a daily calorie target
- User enters number of meals (1–19)
- Program collects calories for each meal
- Displays a full meal-by-meal breakdown
- Compares total to target and gives feedback

## 🛠️ Concepts Used

- **Variable-length array (VLA)** — array size determined at runtime from user input
- **`do-while`** — input validation for target, meal count, and negative calories
- **`i--` retry trick** — re-prompts the same meal if negative calories entered
- **Two `for` loops** — first to fill the array, second to read and display it
- **Running total** — accumulated with each valid meal entry

## 🚀 How to Run

```bash
gcc calories.c -o calories
./calories
```

## 📸 Sample Output

```
=== Daily Calorie Tracker ===
Enter your target calories: 2000
Enter number of meals taken today: 3
Goal: Hit 2000 calories today to stay on track!

Enter calories for Meal 1: 650
Enter calories for Meal 2: 800
Enter calories for Meal 3: 400

--- Daily Summary ---
Meal 1: 650 kcal
Meal 2: 800 kcal
Meal 3: 400 kcal
---------------------
Total Calories Consumed: 1850 kcal
You are 150 calories short. Time for a high-calorie snack!
```

## 🔍 Key Logic — Retry on Invalid Input

```c
if(meals[i] < 0) {
    printf("Calories cannot be negative.\n");
    i--;      // Decrement index to re-enter the same meal
    continue; // Skip to next iteration
}
```

---
*Project built during Semester 1 — FYIMP Data Science & AI, Kashmir University*
