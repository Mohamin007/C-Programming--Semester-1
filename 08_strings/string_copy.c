// File: string_copy.c
// Topic: Strings, strcpy, manual copy
// Category: Strings
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>
#include<string.h>

int main() {
    char original[50];
    char copy[50];

    printf("Enter a string: ");
    scanf("%[^\n]s", original);

    // copying manually character by character
    int i = 0;
    while (original[i] != '\0') {
        copy[i] = original[i];
        i++;
    }
    copy[i] = '\0';  // dont forget the null terminator, learned this the hard way

    printf("Original: %s\n", original);
    printf("Copy: %s\n", copy);

    // using strcpy to do the same thing
    char copy2[50];
    strcpy(copy2, original);
    printf("Copy using strcpy: %s\n", copy2);

    return 0;
}
