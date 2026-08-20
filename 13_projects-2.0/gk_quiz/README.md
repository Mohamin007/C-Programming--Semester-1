# 🧠 General Knowledge Quiz

A 5-question multiple choice GK quiz in C with a "one wrong answer = game over" mechanic and replay functionality.

## 💡 What It Does

- 5 GK questions with 4 choices each
- Correct answer earns a point and advances to next question
- One wrong answer ends the game immediately
- Displays score at game over
- Asks if player wants to replay — loops until they say no

## 🛠️ Concepts Used

- **Outer `do-while`** — full game replay loop
- **Inner `do-while`** — input validation (rejects choices outside 1–4) per question
- **`goto`** — jumps to end-of-game label on wrong answer
- **Point counter** — increments only on correct answers
- **`char` input** — replay choice captured as character (`y`/`n`)

## 🚀 How to Run

```bash
gcc gk_quiz.c -o quiz
./quiz
```

## 📸 Sample Output

```
------ WELCOME TO MY QUIZ ------
Every correct answer = +1 point
Wrong answer = Game Over

Question 1: What is the capital of France?
1.Paris  2.Berlin  3.Madrid  4.Rome
Enter choice (1-4): 1
Correct!

Question 2: Which planet is known as the Red Planet?
...
```

## 💭 Note on `goto`

This project uses `goto` to jump to the game-over section when a wrong answer is given. While it works, `goto` is generally avoided in modern C because it can make code harder to follow. A cleaner approach would be using a flag variable:

```c
int gameOver = 0;
// instead of: goto endgame;
gameOver = 1; break;
```

This is a great reminder that working code can always be refactored to be cleaner! 🚀

---
*Project built during Semester 1 — FYIMP Data Science & AI, Kashmir University*
