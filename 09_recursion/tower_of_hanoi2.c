// File: tower_of_hanoi2.c
// Topic: Recursion, Base Case, Recursive Functions
// Category: Recursion
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include <stdio.h>

int steps = 0;   // global counter

void TOH(int n, char from, char to, char aux) {
    if (n == 1) {
        steps++;
        printf("Step %d: Move disk 1 from %c to %c\n", steps, from, to);
        return;
    }

    TOH(n - 1, from, aux, to);

    steps++;
    printf("Step %d: Move disk %d from %c to %c\n", steps, n, from, to);

    TOH(n - 1, aux, to, from);
}

int main() {
    int n;
    printf("Enter num of discs:");
    scanf("%d", &n);
    TOH(n, 'A', 'C', 'B');

    printf("\nTotal Steps = %d\n", steps);

    return 0;
}
