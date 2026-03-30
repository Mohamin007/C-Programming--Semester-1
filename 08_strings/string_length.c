// File: string_length.c
// Topic: Strings, String Length
// Category: Strings
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>
#include<string.h>

int main() {
    char str[50];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    // finding length manually without strlen
    int len = 0;
    int i = 0;
    while (str[i] != '\0') {
        len++;
        i++;
    }
    printf("Length (manual): %d\n", len);

    // now using strlen to verify
    printf("Length (strlen): %lu\n", strlen(str));

    return 0;
}
