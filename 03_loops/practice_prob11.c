// File: practice_prob11.c
// Topic: for, while, do-while loops
// Category: Loops
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include <stdio.h>

int main()
{

    int prime = 0;
    int n = 5;
    int i = 2;
    do
    {
        if (n % i == 0)
        {
            prime = 1;
            break;
        }
        i++;
    } while (i < n);

    if (prime == 1)
    {
        printf("number is not prime");
    }
    else
    {
        printf("number is prime");
    }

    return 0;
}