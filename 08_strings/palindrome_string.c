// File: palindrome_string.c
// Topic: Strings, palindrome check
// Category: Strings
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>
#include<string.h>

int main() {
    char str[50];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    // check from both ends moving inward
    int i = 0, j = len - 1;
    int isPalindrome = 1;
    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome) {
        printf("\"%s\" is a palindrome\n", str);
    } else {
        printf("\"%s\" is not a palindrome\n", str);
    }

    return 0;
}
