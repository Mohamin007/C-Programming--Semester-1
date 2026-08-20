# 🖥️ C Programming Projects

A collection of mini projects built during **Semester 1** of my FYIMP Data Science & AI program at Kashmir University. Each project applies core C programming concepts to solve a real, practical problem.

---

## 📁 Projects

| Project | Description | Key Concepts |
|---------|-------------|--------------|
| [🏧 ATM Simulator](./atm_simulator/) | Full ATM with deposit, withdrawal & balance check | `switch-case`, `do-while`, input validation |
| [🍫 Brownie Shop System](./brownie_shop_system/) | Two-program order logging & revenue analysis system | File I/O, `fprintf`, `fscanf`, append mode |
| [⚽ Penalty Shootout](./penalty_shootout/) | 5-round penalty shootout vs randomized goalkeeper | `rand()`, `srand()`, `for` loop, score tracking |
| [🥗 Calorie Tracker](./calorie_tracker/) | Daily meal logger with target comparison | VLA, arrays, running total, retry logic |
| [🗺️ Artifact Grid Game](./artifact_grid_game/) | Find hidden treasure in a 3x3 grid | 2D arrays, `rand()`, grid rendering, validation |
| [🧠 GK Quiz](./gk_quiz/) | 5-question quiz with game-over on wrong answer | `goto`, nested loops, replay with `char` input |

---

## 🏆 Highlight Project

### 🍫 Brownie Shop Management System
The most complex project in this collection — a **two-program data pipeline**:
- `brownie_orders.c` logs customer orders to a persistent file
- `brownie_revenue.c` reads the file and generates a full analytics report

This project demonstrates real-world software thinking: two separate programs communicating through a shared data file, with proper error handling and business logic.

---

## 🛠️ How to Compile & Run Any Project

```bash
# Navigate into any project folder
cd atm_simulator

# Compile
gcc atm_simulator.c -o atm

# Run
./atm
```

For the Brownie Shop System specifically:
```bash
cd brownie_shop_system
gcc brownie_orders.c -o orders && ./orders    # Log orders first
gcc brownie_revenue.c -o revenue && ./revenue # Then analyze
```

---

## 📚 What I Learned Building These

- Breaking a problem into inputs, logic, and outputs before writing a single line
- Using loops not just for repetition but for **input validation and retry logic**
- File I/O — making data **persist** beyond a single program session
- How two separate programs can **share data** through files
- That working code is just the first step — clean, readable code is the real goal

---

## 🚀 What's Next

Currently learning **Python** (CS50P + Angela Yu's 100 Days of Code) and building toward a career as an **ML Engineer**.

More projects coming soon — Python versions of these ideas and eventually ML projects.

---

*Mohamin Mir | FYIMP Data Science & AI — Kashmir University*
*📍 Kashmir*
