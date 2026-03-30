// File: count_vowels.c
// Topic: Strings, character checking, loops
// Category: Strings
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    int vowels = 0;
    int consonants = 0;

    int i = 0;
    while (str[i] != '\0') {
        char ch = str[i];
        // convert to lowercase first so we dont have to check both cases
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
        i++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
