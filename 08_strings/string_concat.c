// File: string_concat.c
// Topic: Strings, strcat, manual concatenation
// Category: Strings
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>
#include<string.h>

int main() {
    char first[50], second[30];

    printf("Enter first string: ");
    scanf("%[^\n]s", first);
    getchar();  // clear the newline before next scanf
    printf("Enter second string: ");
    scanf("%[^\n]s", second);

    // manually joining second string to the end of first
    int i = 0, j = 0;
    while (first[i] != '\0') {
        i++;
    }
    while (second[j] != '\0') {
        first[i] = second[j];
        i++;
        j++;
    }
    first[i] = '\0';

    printf("After manual concat: %s\n", first);

    // strcat does the same thing in one line
    char a[50] = "Hello ";
    char b[20] = "World";
    strcat(a, b);
    printf("Using strcat: %s\n", a);

    return 0;
}
