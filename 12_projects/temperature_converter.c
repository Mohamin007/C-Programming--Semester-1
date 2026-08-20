// File: temperature_converter.c
// Topic: Mini Project — Temperature Converter
// Category: Projects
// Course: Introduction to C Programming — Semester 1, Kashmir University

// converts between Celsius, Fahrenheit, and Kelvin
// formulas: C to F = (C * 9/5) + 32
//           C to K = C + 273.15

#include<stdio.h>

int main() {
    int choice;
    float temp, converted;

    printf("=== Temperature Converter ===\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        converted = (temp * 9.0 / 5.0) + 32;
        printf("%.2f C = %.2f F\n", temp, converted);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        converted = (temp - 32) * 5.0 / 9.0;
        printf("%.2f F = %.2f C\n", temp, converted);
    } else if (choice == 3) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        converted = temp + 273.15;
        printf("%.2f C = %.2f K\n", temp, converted);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
