// File: string_reverse.c
// Topic: Strings, String Functions
// Category: Strings
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>
#include<string.h>
int main() {
    char srr[40];
    printf("Enter name: ");
    scanf("%[^\n]s", srr );

    int k=0;
    int size=0;
    while (srr[k]!='\0')
    {
        size++;
        k++;
    }
    for (int i = 0, j=size-1; i<=j;  i++, j--)
    {
        char temp = srr[i];
        srr[i] = srr[j];
        srr[j] = temp;
    }
    
    printf("reverse is: ");
    puts(srr);
    
    return 0;
}