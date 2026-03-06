// File: practice_prob3.c
// Topic: for, while, do-while loops
// Category: Loops
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include<stdio.h>

int main(){

    int i = 1;
    int sum = 0;

    while (i <= 10){
        sum = sum + i;
        i++;
    }

    printf("The sum of first 10 natural numbers is: %d\n", sum);

    return 0;
}
