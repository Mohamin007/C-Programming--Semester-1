// File: string_lowercase.c
// Topic: Strings, tolower, character manipulation
// Category: Strings
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    char str[50];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    // uppercase letters are ASCII 65 to 90 (A-Z)
    // adding 32 converts them to lowercase
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }

    printf("Lowercase: %s\n", str);
    return 0;
}
