# 🍫 Brownie Shop Management System

A two-program file-based order management system — one program logs customer orders, another analyzes revenue. Built entirely in C using File I/O.

## 💡 What It Does

### Program 1 — `brownie_orders.c` (Order Logger)
- Takes customer name and number of brownie batches ordered
- Calculates total cost automatically (Rs. 450 per batch)
- Saves each order permanently to `orders_log.txt`
- Supports logging multiple orders in one session
- Full input validation on all fields

### Program 2 — `brownie_revenue.c` (Revenue Analyzer)
- Reads all saved orders from `orders_log.txt`
- Calculates total orders, total batches sold, total revenue
- Computes average order value and average batches per order
- Gives business insight messages based on performance

## 🛠️ Concepts Used

- **File I/O** — `fopen`, `fclose`, `fprintf`, `fscanf`
- **Append mode (`"a"`)** — new orders are added without overwriting old ones
- **Read mode (`"r"`)** — revenue analyzer reads existing data
- **NULL pointer check** — handles missing file gracefully
- **`do-while` loops** — persistent session and input validation
- **Structs thinking** — data flows between two separate programs via file

## 🚀 How to Run

```bash
# Step 1 — Log some orders
gcc brownie_orders.c -o orders
./orders

# Step 2 — Analyze revenue
gcc brownie_revenue.c -o revenue
./revenue
```

> **Note:** Run `brownie_orders` first to generate the `orders_log.txt` file before running the analyzer.

## 📸 Sample Output

**Order Logger:**
```
=== The Brownie Makers: Order System ===
Enter Customer Name: Ahmed
Enter quantity of brownie batches: 3
-> Success! Order for Ahmed saved to database.
Log another order? (1 for Yes, 0 for No): 0
=== System Offline. All orders secured in 'orders_log.txt' ===
```

**Revenue Analyzer:**
```
=== The Brownie Makers: Revenue Analyzer ===
--- Daily Analytics Report ---
Total Orders Processed: 3
Total Batches Sold: 7
Total Revenue Generated: Rs.3150.00
===============================
Average Order Value: Rs.1050.00
Average Batches Per Order: 2.33
>> Outstanding day! Business is booming.
```

## 🔍 Key Logic — Two Programs, One Data File

```c
// brownie_orders.c — WRITES data
fprintf(orderFile, "Customer: %s | Batches: %d | Total: Rs.%.2f\n",
        customerName, quantity, totalCost);

// brownie_revenue.c — READS the same data
fscanf(orderFile, "Customer: %s | Batches: %d | Total: Rs.%f\n",
       name, &qty, &cost);
```

---
*Project built during Semester 1 — FYIMP Data Science & AI, Kashmir University*
