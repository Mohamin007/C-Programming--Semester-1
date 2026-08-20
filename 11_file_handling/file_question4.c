// File: file_question4.c
// Topic: File I/O, fopen, fclose, fprintf, fscanf
// Category: File Handling
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    FILE* pt = fopen("student.txt", "a");
    char arr[100];
    printf("Enter your sentence: \n");
    fgets(arr, 100, stdin);
    fputs(arr,pt);
    fclose(pt);
    return 0;
}