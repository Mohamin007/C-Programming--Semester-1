// File: function_prime.c
// Topic: Functions, Scope, Parameters
// Category: Functions
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include <stdio.h>

int main()
{
    int i, n = 1;
    printf("Prime no b/w 1 to 300 are : \t");
    for (n = 1; n <= 300; n++)
    {
        i=2;
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                break;
            }
        }
        if (i == n)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}