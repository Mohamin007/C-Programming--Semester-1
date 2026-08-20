// File: number_properties.c
// Topic: Mini Project — Number Properties Checker
// Category: Projects
// Course: Introduction to C Programming — Semester 1, Kashmir University

// checks multiple properties of a number at once
// combines stuff we learned: prime check, armstrong, even/odd, palindrome

#include<stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\n--- Properties of %d ---\n", n);

    // even or odd
    if (n % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    // prime check
    int isPrime = 1;
    if (n < 2) {
        isPrime = 0;
    } else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    // armstrong check — sum of cubes of digits equals the number
    int temp = n, sum = 0;
    while (temp != 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    if (sum == n) {
        printf("Armstrong number\n");
    }

    // palindrome check
    temp = n;
    int reversed = 0;
    while (temp != 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    if (reversed == n) {
        printf("Palindrome\n");
    }

    return 0;
}
