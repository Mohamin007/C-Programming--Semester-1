// File: string_search.c
// Topic: Strings, character search, strstr
// Category: Strings
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    char ch;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    getchar();
    printf("Enter character to search: ");
    scanf("%c", &ch);

    // manually checking if the character exists and at which position
    int found = 0;
    int pos = -1;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ch) {
            found = 1;
            pos = i;
            break;
        }
        i++;
    }

    if (found) {
        printf("'%c' found at index %d\n", ch, pos);
    } else {
        printf("'%c' not found in the string\n", ch);
    }

    return 0;
}
