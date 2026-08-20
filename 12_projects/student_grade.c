// File: student_grade.c
// Topic: Mini Project — Student Grade Calculator
// Category: Projects
// Course: Introduction to C Programming — Semester 1, Kashmir University

// takes marks of 5 subjects and prints total, percentage, and grade
// pretty useful for actually calculating our own results lol

#include<stdio.h>

int main() {
    char name[50];
    int marks[5];
    int total = 0;
    float percentage;

    printf("Enter student name: ");
    scanf("%[^\n]s", name);

    printf("Enter marks for 5 subjects (out of 100):\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = (float)total / 5;

    printf("\n--- Result for %s ---\n", name);
    printf("Total: %d / 500\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    // grade based on percentage
    if (percentage >= 90) {
        printf("Grade: A+\n");
    } else if (percentage >= 80) {
        printf("Grade: A\n");
    } else if (percentage >= 70) {
        printf("Grade: B\n");
    } else if (percentage >= 60) {
        printf("Grade: C\n");
    } else if (percentage >= 40) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F (Failed)\n");
    }

    return 0;
}
