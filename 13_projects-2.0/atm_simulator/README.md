# 🏧 ATM Simulator

A command-line ATM simulation built in C that handles real banking operations with full input validation.

## 💡 What It Does

Simulates a functional ATM with a persistent session loop, allowing users to:
- Check their current account balance
- Deposit money with amount validation
- Withdraw money with overdraft protection
- Exit cleanly

## 🛠️ Concepts Used

- `do-while` loop for persistent menu (ATM stays active until user exits)
- `switch-case` for clean menu option handling
- Input validation using `scanf` return value checking
- Conditional logic for overdraft and invalid amount protection
- `float` for precise monetary values with `%.2f` formatting

## 🚀 How to Run

```bash
gcc atm_simulator.c -o atm
./atm
```

## 📸 Sample Output

```
Welcome to the Mohamin Bank ATM!

========== ATM MENU ==========
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
==============================
Enter your choice (1-4): 2
Enter amount to deposit: $500
-> Success! Deposited $500.00. New balance: $1500.00
```

## 🔍 Key Logic

```c
case 3: // Withdraw
    if (amount > balance) {
        printf("-> Transaction failed! Insufficient funds.\n");
    } else if (amount <= 0) {
        printf("-> Invalid amount.\n");
    } else {
        balance = balance - amount;
    }
```

---
*Project built during Semester 1 — FYIMP Data Science & AI, Kashmir University*
