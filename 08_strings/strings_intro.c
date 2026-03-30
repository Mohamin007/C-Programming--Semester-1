// File: strings_intro.c
// Topic: Strings, String Functions
// Category: Strings
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    char arr[]="PhysicsWallah";
    int i=0;
    int size=0;
    while(arr[i]!='\0'){
    printf("%c", arr[i]);
    size++;
    i++;
    } 
    printf("\nsize is %d", size);
    return 0;
} 