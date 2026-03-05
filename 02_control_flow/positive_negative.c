// File: positive_negative.c
// Topic: if/else, switch-case, Logical Operators
// Category: Control Flow
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main() {
    int m;
    printf("enter num: ");
    scanf("%d", &m);

    if (m>0)
    {
        printf("its a +ve num");
    }
    else if (m<0)
    {
        printf("its a -ve num");
    }
    else{
        printf("num is 0");
    }
    return 0;
}