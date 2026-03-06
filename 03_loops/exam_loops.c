// File: exam_loops.c
// Topic: for, while, do-while loops
// Category: Loops
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    int n=1;
    // while (n<101)
    // {
    //     printf("%d ", n);
    //     n++;
    // }
    // for (int i = 0; i <= 100; i++)
    // {
    //     printf("%d ", i);
    // }
    do
    {
        printf("%d ", n);
        n++;
    } while (n<101);
    
    
    return 0;
}