// File: string_compare.c
// Topic: Strings, strcmp, string comparison
// Category: Strings
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>
#include<string.h>

int main() {
    char s1[50], s2[50];

    printf("Enter first string: ");
    scanf("%[^\n]s", s1);
    getchar();
    printf("Enter second string: ");
    scanf("%[^\n]s", s2);

    // strcmp returns 0 if equal, negative if s1 < s2, positive if s1 > s2
    int result = strcmp(s1, s2);

    if (result == 0) {
        printf("Both strings are equal\n");
    } else if (result < 0) {
        printf("\"%s\" comes before \"%s\"\n", s1, s2);
    } else {
        printf("\"%s\" comes after \"%s\"\n", s1, s2);
    }

    return 0;
}
