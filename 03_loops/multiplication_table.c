// File: multiplication_table.c
// Topic: for, while, do-while loops
// Category: Loops
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    int n;
    printf("enter num of which table should be made : ");
    scanf("%d" , &n);
    
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n",n, i,n*i);
    }

    return 0;
}