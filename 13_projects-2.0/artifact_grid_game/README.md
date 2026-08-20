# 🗺️ The Grid Explorer

A grid-based treasure hunting game in C. Find the hidden artifact in a 3x3 grid before your attempts run out.

## 💡 What It Does

- A hidden artifact is placed at a random location in a 3x3 grid
- Player has 3 attempts to find it by entering row/column coordinates
- Grid updates visually after each wrong guess (`.` = unexplored, `X` = searched)
- Already-searched cells are detected — no wasted attempt charged
- Game ends with win or reveals artifact location on failure

## 🛠️ Concepts Used

- **2D array** — `int grid[3][3]` tracks the state of each cell
- **`srand(time(0))` + `rand()`** — random artifact placement
- **Nested `do-while`** — separate validation loops for row and column input
- **`for` loops** — rendering the grid state after each attempt
- **`attempt--`** — smart re-attempt when an already-searched cell is picked
- **`return 0` mid-loop** — instant exit on winning condition

## 🚀 How to Run

```bash
gcc Artifact_in_Grid.c -o grid_explorer
./grid_explorer
```

## 📸 Sample Output

```
=== The Grid Explorer ===
Find the hidden artifact in the 3x3 sector.

--- Attempt 1 of 3 ---
Enter row coordinate (0-2): 1
Enter column coordinate (0-2): 1
Nothing but dirt at [1][1]. Keep looking.

Grid Status:
. . .
. X .
. . .

--- Attempt 2 of 3 ---
Enter row coordinate (0-2): 0
Enter column coordinate (0-2): 2

>>> SUCCESS! You unearthed the artifact at [0][2]! <<<
```

---
*Project built during Semester 1 — FYIMP Data Science & AI, Kashmir University*
