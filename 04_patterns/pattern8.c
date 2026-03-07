// File: pattern8.c
// Topic: Nested loops, Star/Number patterns
// Category: Patterns
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include <stdio.h>

int main()
{

    int a;
    printf("Enter num : ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 1)
            {
                printf(" %d", j);
            }
            else
            {
                printf(" %c", j + 64);
            }
        }
        printf("\n");
    }

    return 0;
}