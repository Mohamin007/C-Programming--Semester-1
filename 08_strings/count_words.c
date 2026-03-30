// File: count_words.c
// Topic: Strings, word counting
// Category: Strings
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    char str[100];
    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);

    int count = 0;
    int inWord = 0;

    // same logic we used in file_question3.c but for a string now
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\t') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            count++;
        }
        i++;
    }

    printf("Number of words: %d\n", count);
    return 0;
}
