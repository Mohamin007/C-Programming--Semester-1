# ⚽ The Final Penalty Shootout

A 5-round penalty shootout game against a randomized goalkeeper AI, built in C.

## 💡 What It Does

- Player chooses where to aim: Left, Center, or Right
- Goalkeeper randomly picks a direction to dive using `rand()`
- Score is tracked across 5 rounds
- Final result announced — Win, Loss, or Draw

## 🛠️ Concepts Used

- **`srand(time(0))`** — true randomness seeded by system clock
- **`for` loop** — exactly 5 rounds, controlled iteration
- **`do-while`** — input validation, rejects choices outside 1-3
- **`if-else`** — goal/save logic and final result
- **Score tracking** — two integer counters updated each round

## 🚀 How to Run

```bash
gcc penalty_shootout.c -o shootout
./shootout
```

## 📸 Sample Output

```
=== The Final Penalty Shootout ===
Step up to the spot. You have 5 shots to win the match!

--- Round 1 ---
Where are you aiming?
1. Left Corner  2. Center  3. Right Corner
Enter your choice (1-3): 1

Goalkeeper dived RIGHT!
-> GOAL!!! A spectacular finish!
Current Score -> You: 1 | Goalkeeper: 0
```

---
*Project built during Semester 1 — FYIMP Data Science & AI, Kashmir University*
