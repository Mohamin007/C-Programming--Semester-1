// File: string_uppercase.c
// Topic: Strings, toupper, character manipulation
// Category: Strings
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>
#include<string.h>

int main() {
    char str[50];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    // converting each character to uppercase manually
    // lowercase letters are from ASCII 97 to 122 (a-z)
    // subtracting 32 gives the uppercase version
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("Uppercase: %s\n", str);
    return 0;
}
