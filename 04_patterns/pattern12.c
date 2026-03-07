// File: pattern12.c
// Topic: Nested loops, Star/Number patterns
// Category: Patterns
// Course: Introduction to C Programming — Semester 1, Kashmir University

#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number of rows: ");
    scanf("%d", &a);

    int m = 1;

    for (int i = 1; i <= a; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", 2 * m - 1);
            m++;
        }
        printf("\n");
    }

    return 0;
}
